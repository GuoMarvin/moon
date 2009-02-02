using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Windows.Media.Imaging;

using Mono.Moonlight.UnitTesting;
using Microsoft.VisualStudio.TestTools.UnitTesting;

// FIXME: the exceptions shouldn't be NRE's, but I'm not sure what
// they will be so amde them something they won't be so that the
// Assert fails so I can fix them.

namespace MoonTest.System.Windows.Media.Imaging {
	[TestClass]
	public class BitmapImageTest {
		static Uri corruptImage = new Uri ("images/invalid-image-data.png", UriKind.Relative);
		static Uri badUri = new Uri ("non-existent-uri.png", UriKind.Relative);
		
		// Invalid/bad Uri
		
		[TestMethod]
		public void BadUriInCtor ()
		{
			Assert.IsNotNull(new BitmapImage (badUri));
		}

		[TestMethod]
		public void Defaults ()
		{
			BitmapImage image = new BitmapImage ();
			Assert.IsFalse (image.UriSource.IsAbsoluteUri, "#1");
			Assert.AreEqual (string.Empty, image.UriSource.ToString (), "#2");
		}
		
		[TestMethod]
		public void ImageDefaults ()
		{
			Image image = new Image ();
			Assert.IsNotNull (image.Source, "#1");
			Assert.IsTrue (image.Source is BitmapImage, "#2");
			Assert.AreEqual (string.Empty, ((BitmapImage)image.Source).UriSource.ToString (), "#3");
		}
		[TestMethod]
		public void EmptyUriInCtor ()
		{
			var bitmap = new BitmapImage (new Uri ("", UriKind.Relative));
			var image = new Image ();
			image.Source = bitmap;
		}

		[TestMethod]
		public void BadUriSetUriSource ()
		{
			BitmapImage bitmap = new BitmapImage ();
			bitmap.UriSource = badUri;
		}
		
		[TestMethod]
		public void BadUriSetUriSourceProperty ()
		{
			BitmapImage bitmap = new BitmapImage ();
			bitmap.SetValue (BitmapImage.UriSourceProperty, badUri);
		}
		
		
		// Corrupt image
		
		[TestMethod]
		public void CorruptImageInCtor ()
		{
			Assert.IsNotNull(new BitmapImage (corruptImage));
		}
		
		[TestMethod]
		public void CorruptImageSetUriSource ()
		{
			BitmapImage bitmap = new BitmapImage ();
			bitmap.UriSource = corruptImage;
		}
		
		[TestMethod]
		public void CorruptImageSetUriSourceProperty ()
		{
			BitmapImage bitmap = new BitmapImage ();
			bitmap.SetValue (BitmapImage.UriSourceProperty, corruptImage);
		}
		
		
	}
}
