#ifndef INCLUDED_com_haxepunk_graphics_Image
#define INCLUDED_com_haxepunk_graphics_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Image_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(::com::haxepunk::ds::Either source,::flash::geom::Rectangle clipRect);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Image_obj > __new(::com::haxepunk::ds::Either source,::flash::geom::Rectangle clipRect);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Image"); }

		Float angle;
		virtual Float get_scale( );
		Dynamic get_scale_dyn();

		virtual Float set_scale( Float value);
		Dynamic set_scale_dyn();

		Float scaleX;
		Float scaleY;
		Float originX;
		Float originY;
		::flash::display::BlendMode blend;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void createBuffer( );
		Dynamic createBuffer_dyn();

		virtual Void render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera);

		virtual Void renderAtlas( int layer,::flash::geom::Point point,::flash::geom::Point camera);

		virtual Void updateBuffer( hx::Null< bool >  clearBefore);
		Dynamic updateBuffer_dyn();

		virtual Void updateColorTransform( );
		Dynamic updateColorTransform_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual bool get_flipped( );
		Dynamic get_flipped_dyn();

		virtual bool set_flipped( bool value);
		Dynamic set_flipped_dyn();

		virtual Void centerOrigin( );
		Dynamic centerOrigin_dyn();

		virtual Void centerOO( );
		Dynamic centerOO_dyn();

		bool smooth;
		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual Float get_scaledWidth( );
		Dynamic get_scaledWidth_dyn();

		virtual Float set_scaledWidth( Float w);
		Dynamic set_scaledWidth_dyn();

		virtual Float get_scaledHeight( );
		Dynamic get_scaledHeight_dyn();

		virtual Float set_scaledHeight( Float h);
		Dynamic set_scaledHeight_dyn();

		::flash::geom::Rectangle clipRect;
		virtual ::flash::geom::Rectangle get_clipRect( );
		Dynamic get_clipRect_dyn();

		::flash::display::BitmapData _source;
		::flash::geom::Rectangle _sourceRect;
		::flash::display::BitmapData _buffer;
		::flash::geom::Rectangle _bufferRect;
		::flash::display::Bitmap _bitmap;
		::com::haxepunk::graphics::atlas::AtlasRegion _region;
		Float _alpha;
		int _color;
		::flash::geom::ColorTransform _tint;
		::flash::geom::ColorTransform _colorTransform;
		::flash::geom::Matrix _matrix;
		Float _red;
		Float _green;
		Float _blue;
		bool _flipped;
		::flash::display::BitmapData _flip;
		Float _scale;
		static ::com::haxepunk::graphics::Image createRect( int width,int height,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic createRect_dyn();

		static ::com::haxepunk::graphics::Image createCircle( int radius,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic createCircle_dyn();

		static ::haxe::ds::ObjectMap _flips;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Image */ 
