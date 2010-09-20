//
// Namescope.cs
//
// Contact:
//   Moonlight List (moonlight-list@lists.ximian.com)
//
// Copyright 2008 Novell, Inc.
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
//

using System;
using System.Windows;
using System.Collections;
using System.Collections.Generic;

namespace Mono
{

	internal partial class NameScope : INativeEventObjectWrapper, IRefContainer {

		EventObjectSafeHandle safeHandle;

		EventObjectSafeHandle INativeEventObjectWrapper.SafeHandle {
			get { return safeHandle; }
		}

		internal IntPtr NativeHandle {
			get { return safeHandle.DangerousGetHandle (); }
		}

		internal NameScope (IntPtr raw, bool dropRef)
		{
			safeHandle = NativeDependencyObjectHelper.AddNativeMapping (raw, this);;
			if (dropRef)
				NativeMethods.event_object_unref (raw);
		}

		internal NameScope () : this (SafeNativeMethods.name_scope_new (), true)
		{
		}

		public bool Temporary {
			get { return NativeMethods.name_scope_get_temporary (NativeHandle); }
			set { NativeMethods.name_scope_set_temporary (NativeHandle, value); }
		}

		public static void SetNameScope (DependencyObject dob, NameScope scope)
		{
			dob.SetValue (NameScope.NameScopeProperty, scope);
		}
		
		public static NameScope GetNameScope (DependencyObject dob)
		{
			return (NameScope) dob.GetValue (NameScope.NameScopeProperty);
		}

		public Kind GetKind () { return Kind.NAMESCOPE; }

		void IRefContainer.AddStrongRef (IntPtr referent, string name)
		{
		}

		void IRefContainer.ClearStrongRef (IntPtr referent, string name)
		{
		}

#if HEAPVIZ
		System.Collections.ICollection IRefContainer.GetManagedRefs ()
		{
			return new List<HeapRef> ();
		}
#endif

		void INativeEventObjectWrapper.MentorChanged (IntPtr mentor_ptr)
		{
		}

		void INativeEventObjectWrapper.OnAttached ()
		{
		}

		void INativeEventObjectWrapper.OnDetached ()
		{
		}

	}
}
