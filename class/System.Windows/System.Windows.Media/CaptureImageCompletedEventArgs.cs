//
// CaptureSource.cs
//
// Contact:
//   Moonlight List (moonlight-list@lists.ximian.com)
//
// Copyright 2010 Novell, Inc.
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

using System.ComponentModel;
using System.Windows.Media.Imaging;
using Mono;
using System.Collections;
using System.Collections.Generic;

namespace System.Windows.Media {

	public class CaptureImageCompletedEventArgs : AsyncCompletedEventArgs, INativeEventObjectWrapper
	{
		EventObjectSafeHandle safeHandle;

		IntPtr NativeHandle {
			get { return safeHandle.DangerousGetHandle (); }
		}

		EventObjectSafeHandle INativeEventObjectWrapper.SafeHandle {
			get { return safeHandle; }
		}

                internal CaptureImageCompletedEventArgs (IntPtr raw, Exception exc, bool dropref)
                        : base (exc,
                                false,
				null)
                {
                        safeHandle = NativeDependencyObjectHelper.AddNativeMapping (raw, this);;
                        if (dropref)
                                NativeMethods.event_object_unref (raw);
                }

		public CaptureImageCompletedEventArgs (WriteableBitmap image)
			: base (null, false, null)
		{
			Console.WriteLine ("NIEX: System.Windows.Media.CaptureImageCompletedEventArgs:.ctor");
			throw new NotImplementedException ();
		}

		WriteableBitmap result;
                public WriteableBitmap Result {
                        get {
				if (result == null) {
					BitmapSource source = (BitmapSource)NativeDependencyObjectHelper.FromIntPtr (NativeMethods.capture_image_completed_event_args_get_source (NativeHandle));
					result = new WriteableBitmap (source);
				}
				return result;
			}
                }

#region "INativeEventObjectWrapper interface"

		void INativeEventObjectWrapper.MentorChanged (IntPtr mentor_ptr)
		{
		}

		void INativeEventObjectWrapper.OnAttached ()
		{
			throw new Exception ();
		}

		void INativeEventObjectWrapper.OnDetached ()
		{
			throw new Exception ();
		}

		Kind INativeEventObjectWrapper.GetKind ()
		{
			return Deployment.Current.Types.TypeToKind (GetType ());
		}
#endregion
	}
}