/*
 * Automatically generated, do not edit this file directly
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>

#include "animation.h"
#include "animation2.h"
#include "audio.h"
#include "audio-alsa.h"
#include "audio-pulse.h"
#include "binding.h"
#include "bitmapimage.h"
#include "border.h"
#include "brush.h"
#include "canvas.h"
#include "cbinding.h"
#include "clock.h"
#include "collection.h"
#include "contentcontrol.h"
#include "control.h"
#include "deepzoomimagetilesource.h"
#include "dependencyobject.h"
#include "deployment.h"
#include "downloader.h"
#include "error.h"
#include "eventargs.h"
#include "expression.h"
#include "frameworkelement.h"
#include "geometry.h"
#include "grid.h"
#include "media.h"
#include "mediaelement.h"
#include "mediaplayer.h"
#include "mp3.h"
#include "multiscaleimage.h"
#include "multiscalesubimage.h"
#include "namescope.h"
#include "panel.h"
#include "pipeline.h"
#include "pipeline-asf.h"
#include "pipeline-ffmpeg.h"
#include "pipeline-nocodec-ui.h"
#include "playlist.h"
#include "resources.h"
#include "runtime.h"
#include "shape.h"
#include "size.h"
#include "stackpanel.h"
#include "style.h"
#include "stylus.h"
#include "template.h"
#include "text.h"
#include "textbox.h"
#include "tilesource.h"
#include "transform.h"
#include "trigger.h"
#include "type.h"
#include "uielement.h"
#include "usercontrol.h"
#include "yuv-converter.h"

const int Clock::CompletedEvent = 1;
const int Clock::CurrentGlobalSpeedInvalidatedEvent = 2;
const int Clock::CurrentStateInvalidatedEvent = 3;
const int Clock::CurrentTimeInvalidatedEvent = 4;
const int Downloader::CompletedEvent = 1;
const int Downloader::DownloadFailedEvent = 2;
const int Downloader::DownloadProgressChangedEvent = 3;
const int EventObject::DestroyedEvent = 0;
const int FrameworkElement::BindingValidationErrorEvent = 13;
const int FrameworkElement::LayoutUpdatedEvent = 14;
const int FrameworkElement::SizeChangedEvent = 15;
const int Image::ImageFailedEvent = 17;
const int ImageBrush::DownloadProgressChangedEvent = 1;
const int ImageBrush::ImageFailedEvent = 2;
const int MediaBase::DownloadProgressChangedEvent = 16;
const int MediaElement::BufferingProgressChangedEvent = 17;
const int MediaElement::CurrentStateChangedEvent = 18;
const int MediaElement::MarkerReachedEvent = 19;
const int MediaElement::MediaEndedEvent = 20;
const int MediaElement::MediaFailedEvent = 21;
const int MediaElement::MediaOpenedEvent = 22;
const int MultiScaleImage::ImageFailedEvent = 17;
const int MultiScaleImage::ImageOpenFailedEvent = 18;
const int MultiScaleImage::ImageOpenSucceededEvent = 19;
const int MultiScaleImage::MotionFinishedEvent = 20;
const int MultiScaleImage::ViewportChangedEvent = 21;
const int PasswordBox::PasswordChangedEvent = 18;
const int Storyboard::CompletedEvent = 1;
const int Surface::ErrorEvent = 1;
const int Surface::FullScreenChangeEvent = 2;
const int Surface::LoadEvent = 3;
const int Surface::ResizeEvent = 4;
const int TextBox::SelectionChangedEvent = 16;
const int TextBox::TextChangedEvent = 17;
const int TimeManager::RenderEvent = 1;
const int TimeManager::UpdateInputEvent = 2;
const int TimeSource::TickEvent = 1;
const int UIElement::GotFocusEvent = 1;
const int UIElement::InvalidatedEvent = 2;
const int UIElement::KeyDownEvent = 3;
const int UIElement::KeyUpEvent = 4;
const int UIElement::LoadedEvent = 5;
const int UIElement::LostFocusEvent = 6;
const int UIElement::MouseEnterEvent = 7;
const int UIElement::MouseLeaveEvent = 8;
const int UIElement::MouseLeftButtonDownEvent = 9;
const int UIElement::MouseLeftButtonUpEvent = 10;
const int UIElement::MouseMoveEvent = 11;
const int UIElement::UnloadedEvent = 12;

const char *Clock_Events [] = { "Completed", "CurrentGlobalSpeedInvalidated", "CurrentStateInvalidated", "CurrentTimeInvalidated", NULL };
const char *Downloader_Events [] = { "Completed", "DownloadFailed", "DownloadProgressChanged", NULL };
const char *EventObject_Events [] = { "Destroyed", NULL };
const char *FrameworkElement_Events [] = { "BindingValidationError", "LayoutUpdated", "SizeChanged", NULL };
const char *Image_Events [] = { "ImageFailed", NULL };
const char *ImageBrush_Events [] = { "DownloadProgressChanged", "ImageFailed", NULL };
const char *MediaBase_Events [] = { "DownloadProgressChanged", NULL };
const char *MediaElement_Events [] = { "BufferingProgressChanged", "CurrentStateChanged", "MarkerReached", "MediaEnded", "MediaFailed", "MediaOpened", NULL };
const char *MultiScaleImage_Events [] = { "ImageFailed", "ImageOpenFailed", "ImageOpenSucceeded", "MotionFinished", "ViewportChanged", NULL };
const char *PasswordBox_Events [] = { "PasswordChanged", NULL };
const char *Storyboard_Events [] = { "Completed", NULL };
const char *Surface_Events [] = { "Error", "FullScreenChange", "Load", "Resize", NULL };
const char *TextBox_Events [] = { "SelectionChanged", "TextChanged", NULL };
const char *TimeManager_Events [] = { "Render", "UpdateInput", NULL };
const char *TimeSource_Events [] = { "Tick", NULL };
const char *UIElement_Events [] = { "GotFocus", "Invalidated", "KeyDown", "KeyUp", "Loaded", "LostFocus", "MouseEnter", "MouseLeave", "MouseLeftButtonDown", "MouseLeftButtonUp", "MouseMove", "Unloaded", NULL };

Type type_infos [] = {
	{ Type::INVALID, Type::INVALID, false, "INVALID", NULL, 0, 0, NULL, NULL, NULL, NULL, NULL },
	{ Type::ANIMATION, Type::TIMELINE, false, "Animation", "ANIMATION", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::ANIMATIONCLOCK, Type::CLOCK, false, "AnimationClock", "ANIMATIONCLOCK", 0, 5, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::APPLICATION, Type::DEPENDENCY_OBJECT, false, "Application", "APPLICATION", 0, 1, NULL, (create_inst_func *) application_new, NULL, NULL, NULL }, 
	{ Type::ARCSEGMENT, Type::PATHSEGMENT, false, "ArcSegment", "ARCSEGMENT", 0, 1, NULL, (create_inst_func *) arc_segment_new, NULL, NULL, NULL }, 
	{ Type::ASSEMBLYPART, Type::DEPENDENCY_OBJECT, false, "AssemblyPart", "ASSEMBLYPART", 0, 1, NULL, (create_inst_func *) assembly_part_new, NULL, NULL, NULL }, 
	{ Type::ASSEMBLYPART_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "AssemblyPartCollection", "ASSEMBLYPART_COLLECTION", 0, 1, NULL, (create_inst_func *) assembly_part_collection_new, NULL, NULL, NULL }, 
	{ Type::BEGINSTORYBOARD, Type::TRIGGERACTION, false, "BeginStoryboard", "BEGINSTORYBOARD", 0, 1, NULL, (create_inst_func *) begin_storyboard_new, "Storyboard", NULL, NULL }, 
	{ Type::BEZIERSEGMENT, Type::PATHSEGMENT, false, "BezierSegment", "BEZIERSEGMENT", 0, 1, NULL, (create_inst_func *) bezier_segment_new, NULL, NULL, NULL }, 
	{ Type::BINDINGEXPRESSION, Type::BINDINGEXPRESSIONBASE, false, "BindingExpression", "BINDINGEXPRESSION", 0, 1, NULL, (create_inst_func *) binding_expression_new, NULL, NULL, NULL }, 
	{ Type::BINDINGEXPRESSIONBASE, Type::EXPRESSION, false, "BindingExpressionBase", "BINDINGEXPRESSIONBASE", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::BITMAPIMAGE, Type::DEPENDENCY_OBJECT, false, "BitmapImage", "BITMAPIMAGE", 0, 1, NULL, (create_inst_func *) bitmap_image_new, NULL, NULL, NULL }, 
	{ Type::BOOL, Type::OBJECT, false, "bool", "BOOL", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::BORDER, Type::FRAMEWORKELEMENT, false, "Border", "BORDER", 0, 16, NULL, (create_inst_func *) border_new, "Child", NULL, NULL }, 
	{ Type::BRUSH, Type::DEPENDENCY_OBJECT, false, "Brush", "BRUSH", 0, 1, NULL, (create_inst_func *) brush_new, NULL, NULL, NULL }, 
	{ Type::CANVAS, Type::PANEL, false, "Canvas", "CANVAS", 0, 16, NULL, (create_inst_func *) canvas_new, NULL, NULL, NULL }, 
	{ Type::CLOCK, Type::DEPENDENCY_OBJECT, false, "Clock", "CLOCK", 4, 5, Clock_Events, NULL, NULL, NULL, NULL }, 
	{ Type::CLOCKGROUP, Type::CLOCK, false, "ClockGroup", "CLOCKGROUP", 0, 5, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::COLLECTION, Type::DEPENDENCY_OBJECT, false, "Collection", "COLLECTION", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::COLOR, Type::OBJECT, true, "Color", "COLOR", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::COLORANIMATION, Type::ANIMATION, false, "ColorAnimation", "COLORANIMATION", 0, 1, NULL, (create_inst_func *) color_animation_new, NULL, NULL, NULL }, 
	{ Type::COLORANIMATIONUSINGKEYFRAMES, Type::COLORANIMATION, false, "ColorAnimationUsingKeyFrames", "COLORANIMATIONUSINGKEYFRAMES", 0, 1, NULL, (create_inst_func *) color_animation_using_key_frames_new, "KeyFrames", NULL, NULL }, 
	{ Type::COLORKEYFRAME, Type::KEYFRAME, false, "ColorKeyFrame", "COLORKEYFRAME", 0, 1, NULL, (create_inst_func *) color_key_frame_new, NULL, NULL, NULL }, 
	{ Type::COLORKEYFRAME_COLLECTION, Type::KEYFRAME_COLLECTION, false, "ColorKeyFrameCollection", "COLORKEYFRAME_COLLECTION", 0, 1, NULL, (create_inst_func *) color_key_frame_collection_new, NULL, NULL, NULL }, 
	{ Type::COLUMNDEFINITION, Type::DEPENDENCY_OBJECT, false, "ColumnDefinition", "COLUMNDEFINITION", 0, 1, NULL, (create_inst_func *) column_definition_new, NULL, NULL, NULL }, 
	{ Type::COLUMNDEFINITION_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "ColumnDefinitionCollection", "COLUMNDEFINITION_COLLECTION", 0, 1, NULL, (create_inst_func *) column_definition_collection_new, NULL, NULL, NULL }, 
	{ Type::CONTENTCONTROL, Type::CONTROL, false, "ContentControl", "CONTENTCONTROL", 0, 16, NULL, (create_inst_func *) content_control_new, "Content", NULL, NULL }, 
	{ Type::CONTROL, Type::FRAMEWORKELEMENT, false, "Control", "CONTROL", 0, 16, NULL, (create_inst_func *) control_new, NULL, NULL, NULL }, 
	{ Type::CONTROLTEMPLATE, Type::FRAMEWORKTEMPLATE, false, "ControlTemplate", "CONTROLTEMPLATE", 0, 1, NULL, (create_inst_func *) control_template_new, NULL, NULL, NULL }, 
	{ Type::CORNERRADIUS, Type::OBJECT, true, "CornerRadius", "CORNERRADIUS", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::DATATEMPLATE, Type::FRAMEWORKTEMPLATE, false, "DataTemplate", "DATATEMPLATE", 0, 1, NULL, (create_inst_func *) data_template_new, NULL, NULL, NULL }, 
	{ Type::DEEPZOOMIMAGETILESOURCE, Type::MULTISCALETILESOURCE, false, "DeepZoomImageTileSource", "DEEPZOOMIMAGETILESOURCE", 0, 1, NULL, (create_inst_func *) deep_zoom_image_tile_source_new, NULL, NULL, NULL }, 
	{ Type::DEPENDENCY_OBJECT, Type::EVENTOBJECT, false, "DependencyObject", "DEPENDENCY_OBJECT", 0, 1, NULL, (create_inst_func *) dependency_object_new, NULL, NULL, NULL }, 
	{ Type::DEPENDENCY_OBJECT_COLLECTION, Type::COLLECTION, false, "DependencyObjectCollection", "DEPENDENCY_OBJECT_COLLECTION", 0, 1, NULL, (create_inst_func *) dependency_object_collection_new, NULL, NULL, NULL }, 
	{ Type::DEPENDENCYPROPERTY, Type::OBJECT, false, "DependencyProperty", "DEPENDENCYPROPERTY", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::DEPLOYMENT, Type::DEPENDENCY_OBJECT, false, "Deployment", "DEPLOYMENT", 0, 1, NULL, (create_inst_func *) deployment_new, NULL, NULL, NULL }, 
	{ Type::DISCRETECOLORKEYFRAME, Type::COLORKEYFRAME, false, "DiscreteColorKeyFrame", "DISCRETECOLORKEYFRAME", 0, 1, NULL, (create_inst_func *) discrete_color_key_frame_new, NULL, NULL, NULL }, 
	{ Type::DISCRETEDOUBLEKEYFRAME, Type::DOUBLEKEYFRAME, false, "DiscreteDoubleKeyFrame", "DISCRETEDOUBLEKEYFRAME", 0, 1, NULL, (create_inst_func *) discrete_double_key_frame_new, NULL, NULL, NULL }, 
	{ Type::DISCRETEOBJECTKEYFRAME, Type::OBJECTKEYFRAME, false, "DiscreteObjectKeyFrame", "DISCRETEOBJECTKEYFRAME", 0, 1, NULL, (create_inst_func *) discrete_object_key_frame_new, NULL, NULL, NULL }, 
	{ Type::DISCRETEPOINTKEYFRAME, Type::POINTKEYFRAME, false, "DiscretePointKeyFrame", "DISCRETEPOINTKEYFRAME", 0, 1, NULL, (create_inst_func *) discrete_point_key_frame_new, NULL, NULL, NULL }, 
	{ Type::DOUBLE, Type::OBJECT, false, "double", "DOUBLE", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::DOUBLE_COLLECTION, Type::COLLECTION, false, "DoubleCollection", "DOUBLE_COLLECTION", 0, 1, NULL, (create_inst_func *) double_collection_new, NULL, NULL, NULL }, 
	{ Type::DOUBLEANIMATION, Type::ANIMATION, false, "DoubleAnimation", "DOUBLEANIMATION", 0, 1, NULL, (create_inst_func *) double_animation_new, NULL, NULL, NULL }, 
	{ Type::DOUBLEANIMATIONUSINGKEYFRAMES, Type::DOUBLEANIMATION, false, "DoubleAnimationUsingKeyFrames", "DOUBLEANIMATIONUSINGKEYFRAMES", 0, 1, NULL, (create_inst_func *) double_animation_using_key_frames_new, "KeyFrames", NULL, NULL }, 
	{ Type::DOUBLEKEYFRAME, Type::KEYFRAME, false, "DoubleKeyFrame", "DOUBLEKEYFRAME", 0, 1, NULL, (create_inst_func *) double_key_frame_new, NULL, NULL, NULL }, 
	{ Type::DOUBLEKEYFRAME_COLLECTION, Type::KEYFRAME_COLLECTION, false, "DoubleKeyFrameCollection", "DOUBLEKEYFRAME_COLLECTION", 0, 1, NULL, (create_inst_func *) double_key_frame_collection_new, NULL, NULL, NULL }, 
	{ Type::DOWNLOADER, Type::DEPENDENCY_OBJECT, false, "Downloader", "DOWNLOADER", 3, 4, Downloader_Events, (create_inst_func *) downloader_new, NULL, NULL, NULL }, 
	{ Type::DRAWINGATTRIBUTES, Type::DEPENDENCY_OBJECT, false, "DrawingAttributes", "DRAWINGATTRIBUTES", 0, 1, NULL, (create_inst_func *) drawing_attributes_new, NULL, NULL, NULL }, 
	{ Type::DURATION, Type::OBJECT, true, "Duration", "DURATION", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::ELLIPSE, Type::SHAPE, false, "Ellipse", "ELLIPSE", 0, 16, NULL, (create_inst_func *) ellipse_new, NULL, NULL, NULL }, 
	{ Type::ELLIPSEGEOMETRY, Type::GEOMETRY, false, "EllipseGeometry", "ELLIPSEGEOMETRY", 0, 1, NULL, (create_inst_func *) ellipse_geometry_new, NULL, NULL, NULL }, 
	{ Type::ERROREVENTARGS, Type::EVENTARGS, false, "ErrorEventArgs", "ERROREVENTARGS", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::EVENTARGS, Type::DEPENDENCY_OBJECT, false, "EventArgs", "EVENTARGS", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::EVENTOBJECT, Type::OBJECT, false, "EventObject", "EVENTOBJECT", 1, 1, EventObject_Events, NULL, NULL, NULL, NULL }, 
	{ Type::EVENTTRIGGER, Type::TRIGGERBASE, false, "EventTrigger", "EVENTTRIGGER", 0, 1, NULL, (create_inst_func *) event_trigger_new, "Actions", NULL, NULL }, 
	{ Type::EXPRESSION, Type::EVENTOBJECT, false, "Expression", "EXPRESSION", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::FRAMEWORKELEMENT, Type::UIELEMENT, false, "FrameworkElement", "FRAMEWORKELEMENT", 3, 16, FrameworkElement_Events, (create_inst_func *) framework_element_new, NULL, NULL, NULL }, 
	{ Type::FRAMEWORKTEMPLATE, Type::DEPENDENCY_OBJECT, false, "FrameworkTemplate", "FRAMEWORKTEMPLATE", 0, 1, NULL, (create_inst_func *) framework_template_new, NULL, NULL, NULL }, 
	{ Type::GENERALTRANSFORM, Type::DEPENDENCY_OBJECT, false, "GeneralTransform", "GENERALTRANSFORM", 0, 1, NULL, (create_inst_func *) general_transform_new, NULL, NULL, NULL }, 
	{ Type::GEOMETRY, Type::DEPENDENCY_OBJECT, false, "Geometry", "GEOMETRY", 0, 1, NULL, (create_inst_func *) geometry_new, NULL, NULL, NULL }, 
	{ Type::GEOMETRY_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "GeometryCollection", "GEOMETRY_COLLECTION", 0, 1, NULL, (create_inst_func *) geometry_collection_new, NULL, NULL, NULL }, 
	{ Type::GEOMETRYGROUP, Type::GEOMETRY, false, "GeometryGroup", "GEOMETRYGROUP", 0, 1, NULL, (create_inst_func *) geometry_group_new, "Children", NULL, NULL }, 
	{ Type::GLYPHS, Type::FRAMEWORKELEMENT, false, "Glyphs", "GLYPHS", 0, 16, NULL, (create_inst_func *) glyphs_new, NULL, NULL, NULL }, 
	{ Type::GRADIENTBRUSH, Type::BRUSH, false, "GradientBrush", "GRADIENTBRUSH", 0, 1, NULL, (create_inst_func *) gradient_brush_new, "GradientStops", NULL, NULL }, 
	{ Type::GRADIENTSTOP, Type::DEPENDENCY_OBJECT, false, "GradientStop", "GRADIENTSTOP", 0, 1, NULL, (create_inst_func *) gradient_stop_new, NULL, NULL, NULL }, 
	{ Type::GRADIENTSTOP_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "GradientStopCollection", "GRADIENTSTOP_COLLECTION", 0, 1, NULL, (create_inst_func *) gradient_stop_collection_new, NULL, NULL, NULL }, 
	{ Type::GRID, Type::PANEL, false, "Grid", "GRID", 0, 16, NULL, (create_inst_func *) grid_new, NULL, NULL, NULL }, 
	{ Type::GRIDLENGTH, Type::OBJECT, true, "GridLength", "GRIDLENGTH", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::IMAGE, Type::MEDIABASE, false, "Image", "IMAGE", 1, 18, Image_Events, (create_inst_func *) image_new, NULL, NULL, NULL }, 
	{ Type::IMAGEBRUSH, Type::TILEBRUSH, false, "ImageBrush", "IMAGEBRUSH", 2, 3, ImageBrush_Events, (create_inst_func *) image_brush_new, NULL, NULL, NULL }, 
	{ Type::IMAGEERROREVENTARGS, Type::ERROREVENTARGS, false, "ImageErrorEventArgs", "IMAGEERROREVENTARGS", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::INKPRESENTER, Type::CANVAS, false, "InkPresenter", "INKPRESENTER", 0, 16, NULL, (create_inst_func *) ink_presenter_new, NULL, NULL, NULL }, 
	{ Type::INLINE, Type::DEPENDENCY_OBJECT, false, "Inline", "INLINE", 0, 1, NULL, (create_inst_func *) inline_new, NULL, NULL, NULL }, 
	{ Type::INLINE_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "InlineCollection", "INLINE_COLLECTION", 0, 1, NULL, (create_inst_func *) inline_collection_new, NULL, NULL, NULL }, 
	{ Type::INPUTMETHOD, Type::DEPENDENCY_OBJECT, false, "InputMethod", "INPUTMETHOD", 0, 1, NULL, (create_inst_func *) input_method_new, NULL, NULL, NULL }, 
	{ Type::INT32, Type::OBJECT, false, "gint32", "INT32", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::INT64, Type::OBJECT, false, "gint64", "INT64", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::KEYEVENTARGS, Type::ROUTEDEVENTARGS, false, "KeyEventArgs", "KEYEVENTARGS", 0, 1, NULL, (create_inst_func *) key_event_args_new, NULL, NULL, NULL }, 
	{ Type::KEYFRAME, Type::DEPENDENCY_OBJECT, false, "KeyFrame", "KEYFRAME", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::KEYFRAME_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "KeyFrameCollection", "KEYFRAME_COLLECTION", 0, 1, NULL, (create_inst_func *) key_frame_collection_new, NULL, NULL, NULL }, 
	{ Type::KEYSPLINE, Type::DEPENDENCY_OBJECT, false, "KeySpline", "KEYSPLINE", 0, 1, NULL, (create_inst_func *) key_spline_new, NULL, NULL, NULL }, 
	{ Type::KEYTIME, Type::OBJECT, true, "KeyTime", "KEYTIME", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::LINE, Type::SHAPE, false, "Line", "LINE", 0, 16, NULL, (create_inst_func *) line_new, NULL, NULL, NULL }, 
	{ Type::LINEARCOLORKEYFRAME, Type::COLORKEYFRAME, false, "LinearColorKeyFrame", "LINEARCOLORKEYFRAME", 0, 1, NULL, (create_inst_func *) linear_color_key_frame_new, NULL, NULL, NULL }, 
	{ Type::LINEARDOUBLEKEYFRAME, Type::DOUBLEKEYFRAME, false, "LinearDoubleKeyFrame", "LINEARDOUBLEKEYFRAME", 0, 1, NULL, (create_inst_func *) linear_double_key_frame_new, NULL, NULL, NULL }, 
	{ Type::LINEARGRADIENTBRUSH, Type::GRADIENTBRUSH, false, "LinearGradientBrush", "LINEARGRADIENTBRUSH", 0, 1, NULL, (create_inst_func *) linear_gradient_brush_new, NULL, NULL, NULL }, 
	{ Type::LINEARPOINTKEYFRAME, Type::POINTKEYFRAME, false, "LinearPointKeyFrame", "LINEARPOINTKEYFRAME", 0, 1, NULL, (create_inst_func *) linear_point_key_frame_new, NULL, NULL, NULL }, 
	{ Type::LINEBREAK, Type::INLINE, false, "LineBreak", "LINEBREAK", 0, 1, NULL, (create_inst_func *) line_break_new, NULL, NULL, NULL }, 
	{ Type::LINEGEOMETRY, Type::GEOMETRY, false, "LineGeometry", "LINEGEOMETRY", 0, 1, NULL, (create_inst_func *) line_geometry_new, NULL, NULL, NULL }, 
	{ Type::LINESEGMENT, Type::PATHSEGMENT, false, "LineSegment", "LINESEGMENT", 0, 1, NULL, (create_inst_func *) line_segment_new, NULL, NULL, NULL }, 
	{ Type::MANAGED, Type::OBJECT, false, "Managed", "MANAGED", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::MANUALTIMESOURCE, Type::TIMESOURCE, false, "ManualTimeSource", "MANUALTIMESOURCE", 0, 2, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::MARKERREACHEDEVENTARGS, Type::EVENTARGS, false, "MarkerReachedEventArgs", "MARKERREACHEDEVENTARGS", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::MATRIX, Type::DEPENDENCY_OBJECT, false, "Matrix", "MATRIX", 0, 1, NULL, (create_inst_func *) matrix_new, NULL, NULL, NULL }, 
	{ Type::MATRIXTRANSFORM, Type::TRANSFORM, false, "MatrixTransform", "MATRIXTRANSFORM", 0, 1, NULL, (create_inst_func *) matrix_transform_new, NULL, NULL, NULL }, 
	{ Type::MEDIAATTRIBUTE, Type::DEPENDENCY_OBJECT, false, "MediaAttribute", "MEDIAATTRIBUTE", 0, 1, NULL, (create_inst_func *) media_attribute_new, NULL, NULL, NULL }, 
	{ Type::MEDIAATTRIBUTE_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "MediaAttributeCollection", "MEDIAATTRIBUTE_COLLECTION", 0, 1, NULL, (create_inst_func *) media_attribute_collection_new, NULL, NULL, NULL }, 
	{ Type::MEDIABASE, Type::FRAMEWORKELEMENT, false, "MediaBase", "MEDIABASE", 1, 17, MediaBase_Events, (create_inst_func *) media_base_new, NULL, NULL, NULL }, 
	{ Type::MEDIAELEMENT, Type::MEDIABASE, false, "MediaElement", "MEDIAELEMENT", 6, 23, MediaElement_Events, (create_inst_func *) media_element_new, NULL, NULL, NULL }, 
	{ Type::MEDIAERROREVENTARGS, Type::ERROREVENTARGS, false, "MediaErrorEventArgs", "MEDIAERROREVENTARGS", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::MOUSEEVENTARGS, Type::ROUTEDEVENTARGS, false, "MouseEventArgs", "MOUSEEVENTARGS", 0, 1, NULL, (create_inst_func *) mouse_event_args_new, NULL, NULL, NULL }, 
	{ Type::MULTISCALEIMAGE, Type::MEDIABASE, false, "MultiScaleImage", "MULTISCALEIMAGE", 5, 22, MultiScaleImage_Events, (create_inst_func *) multi_scale_image_new, NULL, NULL, NULL }, 
	{ Type::MULTISCALESUBIMAGE, Type::DEPENDENCY_OBJECT, false, "MultiScaleSubImage", "MULTISCALESUBIMAGE", 0, 1, NULL, (create_inst_func *) multi_scale_sub_image_new, NULL, NULL, NULL }, 
	{ Type::MULTISCALETILESOURCE, Type::DEPENDENCY_OBJECT, false, "MultiScaleTileSource", "MULTISCALETILESOURCE", 0, 1, NULL, (create_inst_func *) multi_scale_tile_source_new, NULL, NULL, NULL }, 
	{ Type::NAMESCOPE, Type::DEPENDENCY_OBJECT, false, "NameScope", "NAMESCOPE", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::NPOBJ, Type::OBJECT, false, "NPObj", "NPOBJ", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::OBJECT, Type::INVALID, false, "object", "OBJECT", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::OBJECTANIMATIONUSINGKEYFRAMES, Type::ANIMATION, false, "ObjectAnimationUsingKeyFrames", "OBJECTANIMATIONUSINGKEYFRAMES", 0, 1, NULL, (create_inst_func *) object_animation_using_key_frames_new, "KeyFrames", NULL, NULL }, 
	{ Type::OBJECTKEYFRAME, Type::KEYFRAME, false, "ObjectKeyFrame", "OBJECTKEYFRAME", 0, 1, NULL, (create_inst_func *) object_key_frame_new, NULL, NULL, NULL }, 
	{ Type::OBJECTKEYFRAME_COLLECTION, Type::KEYFRAME_COLLECTION, false, "ObjectKeyFrameCollection", "OBJECTKEYFRAME_COLLECTION", 0, 1, NULL, (create_inst_func *) object_key_frame_collection_new, NULL, NULL, NULL }, 
	{ Type::PANEL, Type::FRAMEWORKELEMENT, false, "Panel", "PANEL", 0, 16, NULL, (create_inst_func *) panel_new, "Children", NULL, NULL }, 
	{ Type::PARALLELTIMELINE, Type::TIMELINEGROUP, false, "ParallelTimeline", "PARALLELTIMELINE", 0, 1, NULL, (create_inst_func *) parallel_timeline_new, NULL, NULL, NULL }, 
	{ Type::PARSERERROREVENTARGS, Type::ERROREVENTARGS, false, "ParserErrorEventArgs", "PARSERERROREVENTARGS", 0, 1, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::PASSWORDBOX, Type::TEXTBOX, false, "PasswordBox", "PASSWORDBOX", 1, 19, PasswordBox_Events, (create_inst_func *) password_box_new, NULL, NULL, NULL }, 
	{ Type::PATH, Type::SHAPE, false, "Path", "PATH", 0, 16, NULL, (create_inst_func *) path_new, NULL, NULL, NULL }, 
	{ Type::PATHFIGURE, Type::DEPENDENCY_OBJECT, false, "PathFigure", "PATHFIGURE", 0, 1, NULL, (create_inst_func *) path_figure_new, "Segments", NULL, NULL }, 
	{ Type::PATHFIGURE_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "PathFigureCollection", "PATHFIGURE_COLLECTION", 0, 1, NULL, (create_inst_func *) path_figure_collection_new, NULL, NULL, NULL }, 
	{ Type::PATHGEOMETRY, Type::GEOMETRY, false, "PathGeometry", "PATHGEOMETRY", 0, 1, NULL, (create_inst_func *) path_geometry_new, "Figures", NULL, NULL }, 
	{ Type::PATHSEGMENT, Type::DEPENDENCY_OBJECT, false, "PathSegment", "PATHSEGMENT", 0, 1, NULL, (create_inst_func *) path_segment_new, NULL, NULL, NULL }, 
	{ Type::PATHSEGMENT_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "PathSegmentCollection", "PATHSEGMENT_COLLECTION", 0, 1, NULL, (create_inst_func *) path_segment_collection_new, NULL, NULL, NULL }, 
	{ Type::POINT, Type::OBJECT, true, "Point", "POINT", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::POINT_COLLECTION, Type::COLLECTION, false, "PointCollection", "POINT_COLLECTION", 0, 1, NULL, (create_inst_func *) point_collection_new, NULL, NULL, NULL }, 
	{ Type::POINTANIMATION, Type::ANIMATION, false, "PointAnimation", "POINTANIMATION", 0, 1, NULL, (create_inst_func *) point_animation_new, NULL, NULL, NULL }, 
	{ Type::POINTANIMATIONUSINGKEYFRAMES, Type::POINTANIMATION, false, "PointAnimationUsingKeyFrames", "POINTANIMATIONUSINGKEYFRAMES", 0, 1, NULL, (create_inst_func *) point_animation_using_key_frames_new, "KeyFrames", NULL, NULL }, 
	{ Type::POINTKEYFRAME, Type::KEYFRAME, false, "PointKeyFrame", "POINTKEYFRAME", 0, 1, NULL, (create_inst_func *) point_key_frame_new, NULL, NULL, NULL }, 
	{ Type::POINTKEYFRAME_COLLECTION, Type::KEYFRAME_COLLECTION, false, "PointKeyFrameCollection", "POINTKEYFRAME_COLLECTION", 0, 1, NULL, (create_inst_func *) point_key_frame_collection_new, NULL, NULL, NULL }, 
	{ Type::POLYBEZIERSEGMENT, Type::PATHSEGMENT, false, "PolyBezierSegment", "POLYBEZIERSEGMENT", 0, 1, NULL, (create_inst_func *) poly_bezier_segment_new, NULL, NULL, NULL }, 
	{ Type::POLYGON, Type::SHAPE, false, "Polygon", "POLYGON", 0, 16, NULL, (create_inst_func *) polygon_new, NULL, NULL, NULL }, 
	{ Type::POLYLINE, Type::SHAPE, false, "Polyline", "POLYLINE", 0, 16, NULL, (create_inst_func *) polyline_new, NULL, NULL, NULL }, 
	{ Type::POLYLINESEGMENT, Type::PATHSEGMENT, false, "PolyLineSegment", "POLYLINESEGMENT", 0, 1, NULL, (create_inst_func *) poly_line_segment_new, NULL, NULL, NULL }, 
	{ Type::POLYQUADRATICBEZIERSEGMENT, Type::PATHSEGMENT, false, "PolyQuadraticBezierSegment", "POLYQUADRATICBEZIERSEGMENT", 0, 1, NULL, (create_inst_func *) poly_quadratic_bezier_segment_new, NULL, NULL, NULL }, 
	{ Type::QUADRATICBEZIERSEGMENT, Type::PATHSEGMENT, false, "QuadraticBezierSegment", "QUADRATICBEZIERSEGMENT", 0, 1, NULL, (create_inst_func *) quadratic_bezier_segment_new, NULL, NULL, NULL }, 
	{ Type::RADIALGRADIENTBRUSH, Type::GRADIENTBRUSH, false, "RadialGradientBrush", "RADIALGRADIENTBRUSH", 0, 1, NULL, (create_inst_func *) radial_gradient_brush_new, NULL, NULL, NULL }, 
	{ Type::RECT, Type::OBJECT, true, "Rect", "RECT", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::RECTANGLE, Type::SHAPE, false, "Rectangle", "RECTANGLE", 0, 16, NULL, (create_inst_func *) rectangle_new, NULL, NULL, NULL }, 
	{ Type::RECTANGLEGEOMETRY, Type::GEOMETRY, false, "RectangleGeometry", "RECTANGLEGEOMETRY", 0, 1, NULL, (create_inst_func *) rectangle_geometry_new, NULL, NULL, NULL }, 
	{ Type::REPEATBEHAVIOR, Type::OBJECT, true, "RepeatBehavior", "REPEATBEHAVIOR", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::RESOURCE_DICTIONARY, Type::COLLECTION, false, "ResourceDictionary", "RESOURCE_DICTIONARY", 0, 1, NULL, (create_inst_func *) resource_dictionary_new, NULL, NULL, NULL }, 
	{ Type::ROTATETRANSFORM, Type::TRANSFORM, false, "RotateTransform", "ROTATETRANSFORM", 0, 1, NULL, (create_inst_func *) rotate_transform_new, NULL, NULL, NULL }, 
	{ Type::ROUTEDEVENTARGS, Type::EVENTARGS, false, "RoutedEventArgs", "ROUTEDEVENTARGS", 0, 1, NULL, (create_inst_func *) routed_event_args_new, NULL, NULL, NULL }, 
	{ Type::ROWDEFINITION, Type::DEPENDENCY_OBJECT, false, "RowDefinition", "ROWDEFINITION", 0, 1, NULL, (create_inst_func *) row_definition_new, NULL, NULL, NULL }, 
	{ Type::ROWDEFINITION_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "RowDefinitionCollection", "ROWDEFINITION_COLLECTION", 0, 1, NULL, (create_inst_func *) row_definition_collection_new, NULL, NULL, NULL }, 
	{ Type::RUN, Type::INLINE, false, "Run", "RUN", 0, 1, NULL, (create_inst_func *) run_new, "Text", NULL, NULL }, 
	{ Type::SCALETRANSFORM, Type::TRANSFORM, false, "ScaleTransform", "SCALETRANSFORM", 0, 1, NULL, (create_inst_func *) scale_transform_new, NULL, NULL, NULL }, 
	{ Type::SELECTIONCHANGEDEVENTARGS, Type::ROUTEDEVENTARGS, false, "SelectionChangedEventArgs", "SELECTIONCHANGEDEVENTARGS", 0, 1, NULL, (create_inst_func *) selection_changed_event_args_new, NULL, NULL, NULL }, 
	{ Type::SETTER, Type::SETTERBASE, false, "Setter", "SETTER", 0, 1, NULL, (create_inst_func *) setter_new, NULL, NULL, NULL }, 
	{ Type::SETTERBASE, Type::DEPENDENCY_OBJECT, false, "SetterBase", "SETTERBASE", 0, 1, NULL, (create_inst_func *) setter_base_new, NULL, NULL, NULL }, 
	{ Type::SETTERBASE_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "SetterBaseCollection", "SETTERBASE_COLLECTION", 0, 1, NULL, (create_inst_func *) setter_base_collection_new, NULL, NULL, NULL }, 
	{ Type::SHAPE, Type::FRAMEWORKELEMENT, false, "Shape", "SHAPE", 0, 16, NULL, (create_inst_func *) shape_new, NULL, NULL, NULL }, 
	{ Type::SIZE, Type::OBJECT, true, "Size", "SIZE", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::SIZECHANGEDEVENTARGS, Type::ROUTEDEVENTARGS, false, "SizeChangedEventArgs", "SIZECHANGEDEVENTARGS", 0, 1, NULL, (create_inst_func *) size_changed_event_args_new, NULL, NULL, NULL }, 
	{ Type::SKEWTRANSFORM, Type::TRANSFORM, false, "SkewTransform", "SKEWTRANSFORM", 0, 1, NULL, (create_inst_func *) skew_transform_new, NULL, NULL, NULL }, 
	{ Type::SOLIDCOLORBRUSH, Type::BRUSH, false, "SolidColorBrush", "SOLIDCOLORBRUSH", 0, 1, NULL, (create_inst_func *) solid_color_brush_new, NULL, NULL, NULL }, 
	{ Type::SPLINECOLORKEYFRAME, Type::COLORKEYFRAME, false, "SplineColorKeyFrame", "SPLINECOLORKEYFRAME", 0, 1, NULL, (create_inst_func *) spline_color_key_frame_new, NULL, NULL, NULL }, 
	{ Type::SPLINEDOUBLEKEYFRAME, Type::DOUBLEKEYFRAME, false, "SplineDoubleKeyFrame", "SPLINEDOUBLEKEYFRAME", 0, 1, NULL, (create_inst_func *) spline_double_key_frame_new, NULL, NULL, NULL }, 
	{ Type::SPLINEPOINTKEYFRAME, Type::POINTKEYFRAME, false, "SplinePointKeyFrame", "SPLINEPOINTKEYFRAME", 0, 1, NULL, (create_inst_func *) spline_point_key_frame_new, NULL, NULL, NULL }, 
	{ Type::STACKPANEL, Type::PANEL, false, "StackPanel", "STACKPANEL", 0, 16, NULL, (create_inst_func *) stack_panel_new, NULL, NULL, NULL }, 
	{ Type::STORYBOARD, Type::PARALLELTIMELINE, false, "Storyboard", "STORYBOARD", 1, 2, Storyboard_Events, (create_inst_func *) storyboard_new, "Children", NULL, NULL }, 
	{ Type::STRING, Type::OBJECT, false, "char*", "STRING", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::STROKE, Type::DEPENDENCY_OBJECT, false, "Stroke", "STROKE", 0, 1, NULL, (create_inst_func *) stroke_new, NULL, NULL, NULL }, 
	{ Type::STROKE_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "StrokeCollection", "STROKE_COLLECTION", 0, 1, NULL, (create_inst_func *) stroke_collection_new, NULL, NULL, NULL }, 
	{ Type::STYLE, Type::DEPENDENCY_OBJECT, false, "Style", "STYLE", 0, 1, NULL, (create_inst_func *) style_new, "Setters", NULL, NULL }, 
	{ Type::STYLUSINFO, Type::DEPENDENCY_OBJECT, false, "StylusInfo", "STYLUSINFO", 0, 1, NULL, (create_inst_func *) stylus_info_new, NULL, NULL, NULL }, 
	{ Type::STYLUSPOINT, Type::DEPENDENCY_OBJECT, false, "StylusPoint", "STYLUSPOINT", 0, 1, NULL, (create_inst_func *) stylus_point_new, NULL, NULL, NULL }, 
	{ Type::STYLUSPOINT_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "StylusPointCollection", "STYLUSPOINT_COLLECTION", 0, 1, NULL, (create_inst_func *) stylus_point_collection_new, NULL, NULL, NULL }, 
	{ Type::SURFACE, Type::EVENTOBJECT, false, "Surface", "SURFACE", 4, 5, Surface_Events, NULL, NULL, NULL, NULL }, 
	{ Type::SYSTEMTIMESOURCE, Type::TIMESOURCE, false, "SystemTimeSource", "SYSTEMTIMESOURCE", 0, 2, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::TEXTBLOCK, Type::FRAMEWORKELEMENT, false, "TextBlock", "TEXTBLOCK", 0, 16, NULL, (create_inst_func *) text_block_new, "Inlines", NULL, NULL }, 
	{ Type::TEXTBOX, Type::CONTROL, false, "TextBox", "TEXTBOX", 2, 18, TextBox_Events, (create_inst_func *) text_box_new, NULL, NULL, NULL }, 
	{ Type::TEXTCHANGEDEVENTARGS, Type::ROUTEDEVENTARGS, false, "TextChangedEventArgs", "TEXTCHANGEDEVENTARGS", 0, 1, NULL, (create_inst_func *) text_changed_event_args_new, NULL, NULL, NULL }, 
	{ Type::THICKNESS, Type::OBJECT, true, "Thickness", "THICKNESS", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::TILEBRUSH, Type::BRUSH, false, "TileBrush", "TILEBRUSH", 0, 1, NULL, (create_inst_func *) tile_brush_new, NULL, NULL, NULL }, 
	{ Type::TIMELINE, Type::DEPENDENCY_OBJECT, false, "Timeline", "TIMELINE", 0, 1, NULL, (create_inst_func *) timeline_new, NULL, NULL, NULL }, 
	{ Type::TIMELINE_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "TimelineCollection", "TIMELINE_COLLECTION", 0, 1, NULL, (create_inst_func *) timeline_collection_new, NULL, NULL, NULL }, 
	{ Type::TIMELINEGROUP, Type::TIMELINE, false, "TimelineGroup", "TIMELINEGROUP", 0, 1, NULL, (create_inst_func *) timeline_group_new, NULL, NULL, NULL }, 
	{ Type::TIMELINEMARKER, Type::DEPENDENCY_OBJECT, false, "TimelineMarker", "TIMELINEMARKER", 0, 1, NULL, (create_inst_func *) timeline_marker_new, NULL, NULL, NULL }, 
	{ Type::TIMELINEMARKER_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "TimelineMarkerCollection", "TIMELINEMARKER_COLLECTION", 0, 1, NULL, (create_inst_func *) timeline_marker_collection_new, NULL, NULL, NULL }, 
	{ Type::TIMEMANAGER, Type::EVENTOBJECT, false, "TimeManager", "TIMEMANAGER", 2, 3, TimeManager_Events, NULL, NULL, NULL, NULL }, 
	{ Type::TIMESOURCE, Type::EVENTOBJECT, false, "TimeSource", "TIMESOURCE", 1, 2, TimeSource_Events, NULL, NULL, NULL, NULL }, 
	{ Type::TIMESPAN, Type::OBJECT, false, "TimeSpan", "TIMESPAN", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::TRANSFORM, Type::GENERALTRANSFORM, false, "Transform", "TRANSFORM", 0, 1, NULL, (create_inst_func *) transform_new, NULL, NULL, NULL }, 
	{ Type::TRANSFORM_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "TransformCollection", "TRANSFORM_COLLECTION", 0, 1, NULL, (create_inst_func *) transform_collection_new, NULL, NULL, NULL }, 
	{ Type::TRANSFORMGROUP, Type::TRANSFORM, false, "TransformGroup", "TRANSFORMGROUP", 0, 1, NULL, (create_inst_func *) transform_group_new, "Children", NULL, NULL }, 
	{ Type::TRANSLATETRANSFORM, Type::TRANSFORM, false, "TranslateTransform", "TRANSLATETRANSFORM", 0, 1, NULL, (create_inst_func *) translate_transform_new, NULL, NULL, NULL }, 
	{ Type::TRIGGER_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "TriggerCollection", "TRIGGER_COLLECTION", 0, 1, NULL, (create_inst_func *) trigger_collection_new, NULL, NULL, NULL }, 
	{ Type::TRIGGERACTION, Type::DEPENDENCY_OBJECT, false, "TriggerAction", "TRIGGERACTION", 0, 1, NULL, (create_inst_func *) trigger_action_new, NULL, NULL, NULL }, 
	{ Type::TRIGGERACTION_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "TriggerActionCollection", "TRIGGERACTION_COLLECTION", 0, 1, NULL, (create_inst_func *) trigger_action_collection_new, NULL, NULL, NULL }, 
	{ Type::TRIGGERBASE, Type::DEPENDENCY_OBJECT, false, "TriggerBase", "TRIGGERBASE", 0, 1, NULL, (create_inst_func *) trigger_base_new, NULL, NULL, NULL }, 
	{ Type::UIELEMENT, Type::DEPENDENCY_OBJECT, false, "UIElement", "UIELEMENT", 12, 13, UIElement_Events, NULL, NULL, NULL, NULL }, 
	{ Type::UIELEMENT_COLLECTION, Type::DEPENDENCY_OBJECT_COLLECTION, false, "UIElementCollection", "UIELEMENT_COLLECTION", 0, 1, NULL, (create_inst_func *) uielement_collection_new, NULL, NULL, NULL }, 
	{ Type::UINT32, Type::OBJECT, false, "guint32", "UINT32", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::UINT64, Type::OBJECT, false, "guint64", "UINT64", 0, 0, NULL, NULL, NULL, NULL, NULL }, 
	{ Type::USERCONTROL, Type::CONTROL, false, "UserControl", "USERCONTROL", 0, 16, NULL, (create_inst_func *) user_control_new, "Content", NULL, NULL }, 
	{ Type::VIDEOBRUSH, Type::TILEBRUSH, false, "VideoBrush", "VIDEOBRUSH", 0, 1, NULL, (create_inst_func *) video_brush_new, NULL, NULL, NULL }, 
	{ Type::VISUALBRUSH, Type::TILEBRUSH, false, "VisualBrush", "VISUALBRUSH", 0, 1, NULL, (create_inst_func *) visual_brush_new, NULL, NULL, NULL }, 
	{ Type::LASTTYPE, Type::INVALID, false, NULL, NULL, 0, 0, NULL, NULL, NULL, NULL, NULL }
};

