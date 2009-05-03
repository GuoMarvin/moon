//
// DependencyObject.cs
//
// Author:
//   Iain McCoy (iain@mccoy.id.au)
//   Moonlight Team (moonlight-list@lists.ximian.com)
//
// Copyright 2005 Iain McCoy
// Copyright 2007 Novell, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

using Mono;
using System.Collections.Generic;
using System.Windows;
using System.Runtime.InteropServices;
using System.Windows.Threading;
using System.Threading;

namespace System.Windows {
	public abstract partial class DependencyObject : INativeDependencyObjectWrapper {
		internal static Thread moonlight_thread;
		internal IntPtr _native;
		EventHandlerList event_list;
		
		internal EventHandlerList EventList {
			get {
				if (event_list == null)
					event_list = new EventHandlerList ();
				return event_list;
			}
		}

		[ThreadStatic] static private Dispatcher dispatcher;

		IntPtr INativeDependencyObjectWrapper.NativeHandle {
			get { return native; }
			set { native = value; }
		}

		internal IntPtr native {
			get {
				return _native;
			}

			set {
				if (_native != IntPtr.Zero) {
					throw new InvalidOperationException ("DependencyObject.native is already set");
				}

				_native = value;
				NativeDependencyObjectHelper.AddNativeMapping (value, this);
			}
		}
		
		static DependencyObject ()
		{
			moonlight_thread = Thread.CurrentThread;
		}

		protected DependencyObject ()
		{
			native = NativeMethods.dependency_object_new ();
			NativeMethods.event_object_set_object_type (native, GetKind ());
		}

		internal DependencyObject (IntPtr raw, bool dropref)
		{
			native = raw;
			NativeMethods.event_object_set_object_type (native, GetKind ());
			// NOTE: This is horrible.  The managed case:
			//	DependencyObject do = new DependencyObject ();
			// Creates 2 refs, 1 in the dependency_object_new call, and 1 in the toggleref
			// As such we need to drop the one from the new call, since we are self-managed
			// by the toggleref here.
			if (dropref)
				NativeMethods.event_object_unref (native);
		}

		internal void Free ()
		{
			if (this.native != IntPtr.Zero) {
				ToggleRef tref;
				lock (NativeDependencyObjectHelper.objects) {
					if (NativeDependencyObjectHelper.objects.TryGetValue (this.native, out tref))
						NativeDependencyObjectHelper.objects.Remove (this.native);
				}
				if (tref != null)
					tref.Free ();
				GC.SuppressFinalize (this);
			}
		}

		~DependencyObject ()
		{
			Free ();
		}

		public object GetValue (DependencyProperty dp)
		{
			return NativeDependencyObjectHelper.GetValue (this, dp);
		}

		public object GetAnimationBaseValue (DependencyProperty dp)
		{
			return NativeDependencyObjectHelper.GetAnimationBaseValue (this, dp);
		}

		public object ReadLocalValue (DependencyProperty dp)
		{
			return ReadLocalValueImpl (dp);
		}

		internal void RegisterEvent (object eventObject, string eventName, UnmanagedEventHandler nativeHandler, Delegate managedHandler)
		{
			if (EventList[eventObject] == null)
				Events.AddHandler (this, eventName, nativeHandler);
			EventList.AddHandler (eventObject, managedHandler);
		}

		internal void UnregisterEvent (object eventObject, string eventName, UnmanagedEventHandler nativeHandler, Delegate managedHandler)
		{
			EventList.RemoveHandler (eventObject, managedHandler);
			if (EventList[eventObject] == null)
				Events.RemoveHandler (this, eventName, nativeHandler);
		}

		internal virtual object ReadLocalValueImpl (DependencyProperty dp)
		{
			return NativeDependencyObjectHelper.ReadLocalValue (this, dp);
		}
		
		public void ClearValue (DependencyProperty dp)
		{
			ClearValueImpl (dp);
		}

		internal virtual void ClearValueImpl (DependencyProperty dp)
		{
			NativeDependencyObjectHelper.ClearValue (this, dp);
		}
		
		[System.ComponentModel.EditorBrowsable (System.ComponentModel.EditorBrowsableState.Advanced)]
		public Dispatcher Dispatcher {
			get {
				return Dispatcher.Main;
			}
		}
		

		public void SetValue (DependencyProperty dp, object value)
		{
			if (dp == null)
				throw new ArgumentNullException ("property");
			if (dp.IsReadOnly)
				throw new InvalidOperationException ();
			SetValueImpl (dp, value);
		}

		internal virtual void SetValueImpl (DependencyProperty dp, object value)
		{
			NativeDependencyObjectHelper.SetValue (this, dp, value);
		}

		internal DependencyObject DepObjectFindName (string name)
		{
			Kind k;
			IntPtr o = NativeMethods.dependency_object_find_name (native, name, out k);
			if (o == IntPtr.Zero)
				return null;

			return NativeDependencyObjectHelper.Lookup (k, o) as DependencyObject;
		}

		Kind INativeDependencyObjectWrapper.GetKind ()
		{
			return GetKind ();
		}

		internal Kind GetKind ()
		{
			return Deployment.Current.Types.Find (GetType()).native_handle;
		}

		[System.ComponentModel.EditorBrowsable (System.ComponentModel.EditorBrowsableState.Never)]
		public bool CheckAccess ()
		{
			return Thread.CurrentThread == moonlight_thread;
		}
		
		internal static void Initialize ()
		{
			// Here just to ensure that the static ctor is executed and
			// runtime init is initialized from some entry points
		}
	}
}
