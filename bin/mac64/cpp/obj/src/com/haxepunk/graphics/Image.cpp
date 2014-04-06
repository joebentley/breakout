#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Image_obj::__construct(::com::haxepunk::ds::Either source,::flash::geom::Rectangle clipRect)
{
HX_STACK_FRAME("com.haxepunk.graphics.Image","new",0xf94e7ea3,"com.haxepunk.graphics.Image.new","com/haxepunk/graphics/Image.hx",22,0xdb117b4e)

HX_STACK_ARG(source,"source")

HX_STACK_ARG(clipRect,"clipRect")
{
	HX_STACK_LINE(427)
	this->smooth = false;
	HX_STACK_LINE(72)
	super::__construct();
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		this->angle = (int)0;
		HX_STACK_LINE(73)
		Float _g = this->scaleY = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		Float _g1 = this->scaleX = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		this->set_scale(_g1);
		HX_STACK_LINE(73)
		Float _g2 = this->originY = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(73)
		this->originX = _g2;
		HX_STACK_LINE(73)
		this->_alpha = (int)1;
		HX_STACK_LINE(73)
		this->_flipped = false;
		HX_STACK_LINE(73)
		this->_color = (int)16777215;
		HX_STACK_LINE(73)
		Float _g3 = this->_blue = (int)1;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(73)
		Float _g4 = this->_green = _g3;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(73)
		this->_red = _g4;
		HX_STACK_LINE(73)
		this->_matrix = ::com::haxepunk::HXP_obj::matrix;
	}
	HX_STACK_LINE(76)
	if (((source != null()))){
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::com::haxepunk::ds::Either _g = source;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(78)
					::flash::display::BitmapData bitmap = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(81)
						this->blit = true;
						HX_STACK_LINE(82)
						this->_source = bitmap;
						HX_STACK_LINE(83)
						::flash::geom::Rectangle _g5 = bitmap->get_rect();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(83)
						this->_sourceRect = _g5;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(78)
					::com::haxepunk::graphics::atlas::AtlasRegion region = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(region,"region");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						this->blit = false;
						HX_STACK_LINE(86)
						this->_region = region;
						HX_STACK_LINE(87)
						::flash::geom::Rectangle _g6 = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_region->_rect->width,this->_region->_rect->height);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(87)
						this->_sourceRect = _g6;
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(91)
	if (((clipRect != null()))){
		HX_STACK_LINE(93)
		if (((clipRect->width == (int)0))){
			HX_STACK_LINE(93)
			clipRect->width = this->_sourceRect->width;
		}
		HX_STACK_LINE(94)
		if (((clipRect->height == (int)0))){
			HX_STACK_LINE(94)
			clipRect->height = this->_sourceRect->height;
		}
		HX_STACK_LINE(95)
		if ((!(this->blit))){
			HX_STACK_LINE(97)
			::com::haxepunk::graphics::atlas::AtlasRegion _g7 = this->_region->clip(clipRect,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(97)
			this->_region = _g7;
		}
		HX_STACK_LINE(99)
		this->_sourceRect = clipRect;
	}
	HX_STACK_LINE(102)
	if ((this->blit)){
		HX_STACK_LINE(104)
		::flash::display::Bitmap _g8 = ::flash::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(104)
		this->_bitmap = _g8;
		HX_STACK_LINE(105)
		::flash::geom::ColorTransform _g9 = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(105)
		this->_colorTransform = _g9;
		HX_STACK_LINE(107)
		this->createBuffer();
		HX_STACK_LINE(108)
		this->updateBuffer(null());
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::com::haxepunk::ds::Either source,::flash::geom::Rectangle clipRect)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(source,clipRect);
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float Image_obj::get_scale( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scale",0x25c76d64,"com.haxepunk.graphics.Image.get_scale","com/haxepunk/graphics/Image.hx",34,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return this->_scale;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scale,return )

Float Image_obj::set_scale( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scale",0x09185970,"com.haxepunk.graphics.Image.set_scale","com/haxepunk/graphics/Image.hx",35,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(35)
	return this->_scale = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scale,return )

Void Image_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","init",0x2819076d,"com.haxepunk.graphics.Image.init","com/haxepunk/graphics/Image.hx",114,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->angle = (int)0;
		HX_STACK_LINE(116)
		Float _g = this->scaleY = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		Float _g1 = this->scaleX = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		this->set_scale(_g1);
		HX_STACK_LINE(117)
		Float _g2 = this->originY = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(117)
		this->originX = _g2;
		HX_STACK_LINE(119)
		this->_alpha = (int)1;
		HX_STACK_LINE(120)
		this->_flipped = false;
		HX_STACK_LINE(121)
		this->_color = (int)16777215;
		HX_STACK_LINE(122)
		Float _g3 = this->_blue = (int)1;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(122)
		Float _g4 = this->_green = _g3;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(122)
		this->_red = _g4;
		HX_STACK_LINE(123)
		this->_matrix = ::com::haxepunk::HXP_obj::matrix;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,init,(void))

Void Image_obj::createBuffer( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","createBuffer",0xfba6ee79,"com.haxepunk.graphics.Image.createBuffer","com/haxepunk/graphics/Image.hx",128,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		int _g = ::Std_obj::_int(this->_sourceRect->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		int _g1 = ::Std_obj::_int(this->_sourceRect->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		::flash::display::BitmapData _g2 = ::com::haxepunk::HXP_obj::createBitmap(_g,_g1,true,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(129)
		this->_buffer = _g2;
		HX_STACK_LINE(130)
		::flash::geom::Rectangle _g3 = this->_buffer->get_rect();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(130)
		this->_bufferRect = _g3;
		HX_STACK_LINE(131)
		this->_bitmap->set_bitmapData(this->_buffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,createBuffer,(void))

Void Image_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","render",0x93d8c8f3,"com.haxepunk.graphics.Image.render","com/haxepunk/graphics/Image.hx",136,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(137)
		Float _g = this->get_scale();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		Float sx = (_g * this->scaleX);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(138)
		Float _g1 = this->get_scale();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		Float sy = (_g1 * this->scaleY);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(141)
		this->_point->x = (((point->x + this->x) - this->originX) - (camera->x * this->scrollX));
		HX_STACK_LINE(142)
		this->_point->y = (((point->y + this->y) - this->originY) - (camera->y * this->scrollY));
		HX_STACK_LINE(145)
		if (((this->_buffer != null()))){
			HX_STACK_LINE(147)
			if (((bool((bool((bool((this->angle == (int)0)) && bool((sx == (int)1)))) && bool((sy == (int)1)))) && bool((this->blend == null()))))){
				HX_STACK_LINE(150)
				target->copyPixels(this->_buffer,this->_bufferRect,this->_point,null(),null(),true);
			}
			else{
				HX_STACK_LINE(155)
				Float _g2 = this->_matrix->c = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(155)
				this->_matrix->b = _g2;
				HX_STACK_LINE(156)
				this->_matrix->a = sx;
				HX_STACK_LINE(157)
				this->_matrix->d = sy;
				HX_STACK_LINE(158)
				this->_matrix->tx = (-(this->originX) * sx);
				HX_STACK_LINE(159)
				this->_matrix->ty = (-(this->originY) * sy);
				HX_STACK_LINE(160)
				if (((this->angle != (int)0))){
					HX_STACK_LINE(160)
					this->_matrix->rotate((this->angle * ((Float(::Math_obj::PI) / Float((int)-180)))));
				}
				HX_STACK_LINE(161)
				hx::AddEq(this->_matrix->tx,(this->originX + this->_point->x));
				HX_STACK_LINE(162)
				hx::AddEq(this->_matrix->ty,(this->originY + this->_point->y));
				HX_STACK_LINE(163)
				target->draw(this->_bitmap,this->_matrix,null(),this->blend,null(),this->_bitmap->smoothing);
			}
		}
	}
return null();
}


Void Image_obj::renderAtlas( int layer,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","renderAtlas",0xc015a358,"com.haxepunk.graphics.Image.renderAtlas","com/haxepunk/graphics/Image.hx",169,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(170)
		Float _g = this->get_scale();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		Float sx = (_g * this->scaleX);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(171)
		Float _g1 = this->get_scale();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		Float sy = (_g1 * this->scaleY);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(172)
		Float fsx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(fsx,"fsx");
		HX_STACK_LINE(173)
		Float fsy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(fsy,"fsy");
		HX_STACK_LINE(176)
		this->_point->x = (((point->x + this->x) - this->originX) - (camera->x * this->scrollX));
		HX_STACK_LINE(177)
		this->_point->y = (((point->y + this->y) - this->originY) - (camera->y * this->scrollY));
		HX_STACK_LINE(179)
		if (((this->angle == (int)0))){
			HX_STACK_LINE(182)
			if ((!(((bool((sx == (int)1)) && bool((sy == (int)1))))))){
				HX_STACK_LINE(184)
				this->_point->x = (((point->x + this->x) - (this->originX * sx)) - (camera->x * this->scrollX));
				HX_STACK_LINE(185)
				this->_point->y = (((point->y + this->y) - (this->originY * sy)) - (camera->y * this->scrollY));
			}
			HX_STACK_LINE(188)
			if ((this->_flipped)){
				HX_STACK_LINE(188)
				hx::AddEq(this->_point->x,(this->_sourceRect->width * sx));
			}
			HX_STACK_LINE(190)
			int _g2 = ::Math_obj::floor((this->_point->x * fsx));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(190)
			this->_point->x = _g2;
			HX_STACK_LINE(191)
			int _g3 = ::Math_obj::floor((this->_point->y * fsy));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(191)
			this->_point->y = _g3;
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_region;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(195)
				Float scaleX;		HX_STACK_VAR(scaleX,"scaleX");
				HX_STACK_LINE(195)
				scaleX = ((sx * fsx) * ((  ((this->_flipped)) ? int((int)-1) : int((int)1) )));
				HX_STACK_LINE(195)
				Float scaleY = (sy * fsy);		HX_STACK_VAR(scaleY,"scaleY");
				HX_STACK_LINE(195)
				Float angle = this->angle;		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(194)
				if ((_this->rotated)){
					HX_STACK_LINE(194)
					angle = (angle + (int)90);
				}
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(194)
					{
						HX_STACK_LINE(194)
						if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this1))){
							HX_STACK_LINE(194)
							if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
								HX_STACK_LINE(194)
								::com::haxepunk::graphics::atlas::AtlasData _this2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(194)
								if (((_this2->_dataIndex != (int)0))){
									HX_STACK_LINE(194)
									::flash::display::Graphics _g4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(194)
									_this2->_tilesheet->drawTiles(_g4,_this2->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this2->_renderFlags,_this2->_dataIndex);
									HX_STACK_LINE(194)
									_this2->_dataIndex = (int)0;
								}
							}
							HX_STACK_LINE(194)
							::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
						}
						HX_STACK_LINE(194)
						_this1;
					}
					HX_STACK_LINE(194)
					int _g5 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(194)
					_this1->_data[_g5] = this->_point->x;
					HX_STACK_LINE(194)
					int _g6 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(194)
					_this1->_data[_g6] = this->_point->y;
					HX_STACK_LINE(194)
					int _g7 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(194)
					_this1->_data[_g7] = _this->tileIndex;
					HX_STACK_LINE(194)
					if (((angle == (int)0))){
						HX_STACK_LINE(194)
						int _g8 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(194)
						_this1->_data[_g8] = scaleX;
						HX_STACK_LINE(194)
						int _g9 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(194)
						_this1->_data[_g9] = (int)0;
						HX_STACK_LINE(194)
						int _g10 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(194)
						_this1->_data[_g10] = (int)0;
						HX_STACK_LINE(194)
						int _g11 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(194)
						_this1->_data[_g11] = scaleY;
					}
					else{
						HX_STACK_LINE(194)
						Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(194)
						Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(194)
						int _g12 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(194)
						_this1->_data[_g12] = (cos * scaleX);
						HX_STACK_LINE(194)
						int _g13 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(194)
						_this1->_data[_g13] = (-(sin) * scaleY);
						HX_STACK_LINE(194)
						int _g14 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(194)
						_this1->_data[_g14] = (sin * scaleX);
						HX_STACK_LINE(194)
						int _g15 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(194)
						_this1->_data[_g15] = (cos * scaleY);
					}
					HX_STACK_LINE(194)
					if ((_this1->_flagRGB)){
						HX_STACK_LINE(194)
						int _g16 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(194)
						_this1->_data[_g16] = this->_red;
						HX_STACK_LINE(194)
						int _g17 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(194)
						_this1->_data[_g17] = this->_green;
						HX_STACK_LINE(194)
						int _g18 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(194)
						_this1->_data[_g18] = this->_blue;
					}
					HX_STACK_LINE(194)
					if ((_this1->_flagAlpha)){
						HX_STACK_LINE(194)
						int _g19 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(194)
						_this1->_data[_g19] = this->_alpha;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(200)
			Float theta = (this->angle * ((Float(::Math_obj::PI) / Float((int)-180))));		HX_STACK_VAR(theta,"theta");
			HX_STACK_LINE(201)
			Float cos = ::Math_obj::cos(theta);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(202)
			Float sin = ::Math_obj::sin(theta);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(204)
			if ((this->get_flipped())){
				HX_STACK_LINE(204)
				hx::MultEq(sx,(int)-1);
			}
			HX_STACK_LINE(207)
			Float b = ((sx * fsx) * sin);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(208)
			Float a = ((sx * fsx) * cos);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(210)
			Float d = ((sy * fsy) * cos);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(211)
			Float c = ((sy * fsy) * -(sin));		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(213)
			Float tx = (-(this->originX) * sx);		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(214)
			Float ty = (-(this->originY) * sy);		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(215)
			Float tx1 = ((tx * cos) - (ty * sin));		HX_STACK_VAR(tx1,"tx1");
			HX_STACK_LINE(216)
			ty = ((((((tx * sin) + (ty * cos)) + this->originY) + this->_point->y)) * fsy);
			HX_STACK_LINE(217)
			tx = ((((tx1 + this->originX) + this->_point->x)) * fsx);
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_region;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(219)
				Float tx2 = ::Std_obj::_int(tx);		HX_STACK_VAR(tx2,"tx2");
				HX_STACK_LINE(219)
				Float ty1 = ::Std_obj::_int(ty);		HX_STACK_VAR(ty1,"ty1");
				HX_STACK_LINE(219)
				Float red = this->_red;		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(219)
				Float green = this->_green;		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(219)
				Float blue = this->_blue;		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(219)
				Float alpha = this->_alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(219)
				if ((_this->rotated)){
					HX_STACK_LINE(219)
					::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(a,b,c,d,tx2,ty1);		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(219)
					matrix->rotate(((int)90 * ((Float(::Math_obj::PI) / Float((int)-180)))));
					HX_STACK_LINE(219)
					{
						HX_STACK_LINE(219)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(219)
						{
							HX_STACK_LINE(219)
							if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this1))){
								HX_STACK_LINE(219)
								if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
									HX_STACK_LINE(219)
									::com::haxepunk::graphics::atlas::AtlasData _this2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(219)
									if (((_this2->_dataIndex != (int)0))){
										HX_STACK_LINE(219)
										::flash::display::Graphics _g20 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g20,"_g20");
										HX_STACK_LINE(219)
										_this2->_tilesheet->drawTiles(_g20,_this2->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this2->_renderFlags,_this2->_dataIndex);
										HX_STACK_LINE(219)
										_this2->_dataIndex = (int)0;
									}
								}
								HX_STACK_LINE(219)
								::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
							}
							HX_STACK_LINE(219)
							_this1;
						}
						HX_STACK_LINE(219)
						int _g21 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(219)
						_this1->_data[_g21] = matrix->tx;
						HX_STACK_LINE(219)
						int _g22 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(219)
						_this1->_data[_g22] = matrix->ty;
						HX_STACK_LINE(219)
						int _g23 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(219)
						_this1->_data[_g23] = _this->tileIndex;
						HX_STACK_LINE(219)
						int _g24 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(219)
						_this1->_data[_g24] = matrix->a;
						HX_STACK_LINE(219)
						int _g25 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(219)
						_this1->_data[_g25] = matrix->b;
						HX_STACK_LINE(219)
						int _g26 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(219)
						_this1->_data[_g26] = matrix->c;
						HX_STACK_LINE(219)
						int _g27 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(219)
						_this1->_data[_g27] = matrix->d;
						HX_STACK_LINE(219)
						if ((_this1->_flagRGB)){
							HX_STACK_LINE(219)
							int _g28 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g28,"_g28");
							HX_STACK_LINE(219)
							_this1->_data[_g28] = red;
							HX_STACK_LINE(219)
							int _g29 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(219)
							_this1->_data[_g29] = green;
							HX_STACK_LINE(219)
							int _g30 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g30,"_g30");
							HX_STACK_LINE(219)
							_this1->_data[_g30] = blue;
						}
						HX_STACK_LINE(219)
						if ((_this1->_flagAlpha)){
							HX_STACK_LINE(219)
							int _g31 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(219)
							_this1->_data[_g31] = alpha;
						}
					}
				}
				else{
					HX_STACK_LINE(219)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(219)
					{
						HX_STACK_LINE(219)
						if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this1))){
							HX_STACK_LINE(219)
							if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
								HX_STACK_LINE(219)
								::com::haxepunk::graphics::atlas::AtlasData _this2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(219)
								if (((_this2->_dataIndex != (int)0))){
									HX_STACK_LINE(219)
									::flash::display::Graphics _g32 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g32,"_g32");
									HX_STACK_LINE(219)
									_this2->_tilesheet->drawTiles(_g32,_this2->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this2->_renderFlags,_this2->_dataIndex);
									HX_STACK_LINE(219)
									_this2->_dataIndex = (int)0;
								}
							}
							HX_STACK_LINE(219)
							::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
						}
						HX_STACK_LINE(219)
						_this1;
					}
					HX_STACK_LINE(219)
					int _g33 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(219)
					_this1->_data[_g33] = tx2;
					HX_STACK_LINE(219)
					int _g34 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(219)
					_this1->_data[_g34] = ty1;
					HX_STACK_LINE(219)
					int _g35 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g35,"_g35");
					HX_STACK_LINE(219)
					_this1->_data[_g35] = _this->tileIndex;
					HX_STACK_LINE(219)
					int _g36 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(219)
					_this1->_data[_g36] = a;
					HX_STACK_LINE(219)
					int _g37 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(219)
					_this1->_data[_g37] = b;
					HX_STACK_LINE(219)
					int _g38 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(219)
					_this1->_data[_g38] = c;
					HX_STACK_LINE(219)
					int _g39 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g39,"_g39");
					HX_STACK_LINE(219)
					_this1->_data[_g39] = d;
					HX_STACK_LINE(219)
					if ((_this1->_flagRGB)){
						HX_STACK_LINE(219)
						int _g40 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(219)
						_this1->_data[_g40] = red;
						HX_STACK_LINE(219)
						int _g41 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(219)
						_this1->_data[_g41] = green;
						HX_STACK_LINE(219)
						int _g42 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g42,"_g42");
						HX_STACK_LINE(219)
						_this1->_data[_g42] = blue;
					}
					HX_STACK_LINE(219)
					if ((_this1->_flagAlpha)){
						HX_STACK_LINE(219)
						int _g43 = (_this1->_dataIndex)++;		HX_STACK_VAR(_g43,"_g43");
						HX_STACK_LINE(219)
						_this1->_data[_g43] = alpha;
					}
				}
			}
		}
	}
return null();
}


Void Image_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","updateBuffer",0xd9155546,"com.haxepunk.graphics.Image.updateBuffer","com/haxepunk/graphics/Image.hx",291,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clearBefore,"clearBefore")
{
		HX_STACK_LINE(292)
		if (((this->_source == null()))){
			HX_STACK_LINE(292)
			return null();
		}
		HX_STACK_LINE(293)
		if ((clearBefore)){
			HX_STACK_LINE(293)
			this->_buffer->fillRect(this->_bufferRect,(int)0);
		}
		HX_STACK_LINE(294)
		this->_buffer->copyPixels(this->_source,this->_sourceRect,::com::haxepunk::HXP_obj::zero,null(),null(),null());
		HX_STACK_LINE(295)
		if (((this->_tint != null()))){
			HX_STACK_LINE(295)
			this->_buffer->colorTransform(this->_bufferRect,this->_tint);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,updateBuffer,(void))

Void Image_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","updateColorTransform",0x3a1b25cf,"com.haxepunk.graphics.Image.updateColorTransform","com/haxepunk/graphics/Image.hx",299,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
			HX_STACK_LINE(302)
			this->_tint = null();
		}
		else{
			HX_STACK_LINE(306)
			this->_tint = this->_colorTransform;
			HX_STACK_LINE(307)
			this->_tint->redMultiplier = this->_red;
			HX_STACK_LINE(308)
			this->_tint->greenMultiplier = this->_green;
			HX_STACK_LINE(309)
			this->_tint->blueMultiplier = this->_blue;
			HX_STACK_LINE(310)
			this->_tint->alphaMultiplier = this->_alpha;
		}
		HX_STACK_LINE(312)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,updateColorTransform,(void))

Void Image_obj::clear( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","clear",0x78107690,"com.haxepunk.graphics.Image.clear","com/haxepunk/graphics/Image.hx",319,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		if (((this->_buffer == null()))){
			HX_STACK_LINE(320)
			return null();
		}
		HX_STACK_LINE(321)
		this->_buffer->fillRect(this->_bufferRect,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clear,(void))

Float Image_obj::get_alpha( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_alpha",0xce8f4638,"com.haxepunk.graphics.Image.get_alpha","com/haxepunk/graphics/Image.hx",328,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_alpha,return )

Float Image_obj::set_alpha( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_alpha",0xb1e03244,"com.haxepunk.graphics.Image.set_alpha","com/haxepunk/graphics/Image.hx",330,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(331)
	if (((value < (int)0))){
		HX_STACK_LINE(331)
		value = (int)0;
	}
	else{
		HX_STACK_LINE(331)
		if (((value > (int)1))){
			HX_STACK_LINE(331)
			value = (int)1;
		}
		else{
			HX_STACK_LINE(331)
			value = value;
		}
	}
	HX_STACK_LINE(332)
	if (((this->_alpha == value))){
		HX_STACK_LINE(332)
		return value;
	}
	HX_STACK_LINE(333)
	this->_alpha = value;
	HX_STACK_LINE(334)
	if ((this->blit)){
		HX_STACK_LINE(334)
		this->updateColorTransform();
	}
	HX_STACK_LINE(335)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_alpha,return )

int Image_obj::get_color( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_color",0xf755103d,"com.haxepunk.graphics.Image.get_color","com/haxepunk/graphics/Image.hx",342,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(342)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_color,return )

int Image_obj::set_color( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_color",0xdaa5fc49,"com.haxepunk.graphics.Image.set_color","com/haxepunk/graphics/Image.hx",344,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(345)
	hx::AndEq(value,(int)16777215);
	HX_STACK_LINE(346)
	if (((this->_color == value))){
		HX_STACK_LINE(346)
		return value;
	}
	HX_STACK_LINE(347)
	this->_color = value;
	HX_STACK_LINE(349)
	this->_red = (Float(((int((int(this->_color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(350)
	this->_green = (Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(351)
	this->_blue = (Float(((int(this->_color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(352)
	if ((this->blit)){
		HX_STACK_LINE(352)
		this->updateColorTransform();
	}
	HX_STACK_LINE(353)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_color,return )

bool Image_obj::get_flipped( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_flipped",0xd309f59c,"com.haxepunk.graphics.Image.get_flipped","com/haxepunk/graphics/Image.hx",361,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(361)
	return this->_flipped;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_flipped,return )

bool Image_obj::set_flipped( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_flipped",0xdd76fca8,"com.haxepunk.graphics.Image.set_flipped","com/haxepunk/graphics/Image.hx",363,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(364)
	if (((this->_flipped == value))){
		HX_STACK_LINE(364)
		return value;
	}
	HX_STACK_LINE(366)
	if ((this->blit)){
		HX_STACK_LINE(368)
		::flash::display::BitmapData temp = this->_source;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(369)
		if (((bool(!(value)) || bool((this->_flip != null()))))){
			HX_STACK_LINE(371)
			this->_source = this->_flip;
		}
		else{
			HX_STACK_LINE(373)
			int _g = ::__hxcpp_obj_id(temp);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(373)
			if ((::com::haxepunk::graphics::Image_obj::_flips->__Internal->exists(_g))){
				HX_STACK_LINE(375)
				::flash::display::BitmapData _g1 = ::com::haxepunk::graphics::Image_obj::_flips->get(temp);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(375)
				this->_source = _g1;
			}
			else{
				HX_STACK_LINE(379)
				int _g2 = this->_source->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(379)
				int _g3 = this->_source->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(379)
				::flash::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::createBitmap(_g2,_g3,true,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(379)
				this->_source = _g4;
				HX_STACK_LINE(380)
				::com::haxepunk::graphics::Image_obj::_flips->set(temp,this->_source);
				HX_STACK_LINE(381)
				::com::haxepunk::HXP_obj::matrix->identity();
				HX_STACK_LINE(382)
				::com::haxepunk::HXP_obj::matrix->a = (int)-1;
				HX_STACK_LINE(383)
				int _g5 = this->_source->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(383)
				::com::haxepunk::HXP_obj::matrix->tx = _g5;
				HX_STACK_LINE(384)
				this->_source->draw(temp,::com::haxepunk::HXP_obj::matrix,null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(386)
		this->_flip = temp;
		HX_STACK_LINE(387)
		this->updateBuffer(null());
	}
	HX_STACK_LINE(389)
	this->_flipped = value;
	HX_STACK_LINE(390)
	return this->_flipped;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_flipped,return )

Void Image_obj::centerOrigin( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","centerOrigin",0x17f332f8,"com.haxepunk.graphics.Image.centerOrigin","com/haxepunk/graphics/Image.hx",397,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(398)
		this->originX = _g2;
		HX_STACK_LINE(399)
		int _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(399)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(399)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(399)
		this->originY = _g5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOrigin,(void))

Void Image_obj::centerOO( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","centerOO",0xaec80912,"com.haxepunk.graphics.Image.centerOO","com/haxepunk/graphics/Image.hx",406,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			_g->x = (_g->x + this->originX);
		}
		HX_STACK_LINE(408)
		{
			HX_STACK_LINE(408)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(408)
			_g->y = (_g->y + this->originY);
		}
		HX_STACK_LINE(409)
		this->centerOrigin();
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(410)
			_g->x = (_g->x - this->originX);
		}
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(411)
			_g->y = (_g->y - this->originY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOO,(void))

int Image_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_width",0x775b54e0,"com.haxepunk.graphics.Image.get_width","com/haxepunk/graphics/Image.hx",434,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(434)
	return ::Std_obj::_int((  ((this->blit)) ? Float(this->_bufferRect->width) : Float((  ((!(this->_region->rotated))) ? Float(this->_region->_rect->width) : Float(this->_region->_rect->height) )) ));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_width,return )

int Image_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_height",0xaede67cd,"com.haxepunk.graphics.Image.get_height","com/haxepunk/graphics/Image.hx",440,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(440)
	return ::Std_obj::_int((  ((this->blit)) ? Float(this->_bufferRect->height) : Float((  ((!(this->_region->rotated))) ? Float(this->_region->_rect->height) : Float(this->_region->_rect->width) )) ));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_height,return )

Float Image_obj::get_scaledWidth( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scaledWidth",0x7039cb66,"com.haxepunk.graphics.Image.get_scaledWidth","com/haxepunk/graphics/Image.hx",446,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(446)
	int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(446)
	Float _g1 = (_g * this->scaleX);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(446)
	Float _g2 = this->get_scale();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(446)
	return (_g1 * _g2);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledWidth,return )

Float Image_obj::set_scaledWidth( Float w){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scaledWidth",0x6c054872,"com.haxepunk.graphics.Image.set_scaledWidth","com/haxepunk/graphics/Image.hx",447,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(448)
	Float _g = this->get_scale();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(448)
	Float _g1 = (Float(w) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(448)
	int _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(448)
	Float _g3 = (Float(_g1) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(448)
	this->scaleX = _g3;
	HX_STACK_LINE(449)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledWidth,return )

Float Image_obj::get_scaledHeight( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scaledHeight",0x78a7a687,"com.haxepunk.graphics.Image.get_scaledHeight","com/haxepunk/graphics/Image.hx",456,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(456)
	int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(456)
	Float _g1 = (_g * this->scaleY);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(456)
	Float _g2 = this->get_scale();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(456)
	return (_g1 * _g2);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledHeight,return )

Float Image_obj::set_scaledHeight( Float h){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scaledHeight",0xcee993fb,"com.haxepunk.graphics.Image.set_scaledHeight","com/haxepunk/graphics/Image.hx",457,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(458)
	Float _g = this->get_scale();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(458)
	Float _g1 = (Float(h) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(458)
	int _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(458)
	Float _g3 = (Float(_g1) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(458)
	this->scaleY = _g3;
	HX_STACK_LINE(459)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledHeight,return )

::flash::geom::Rectangle Image_obj::get_clipRect( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_clipRect",0x1641357a,"com.haxepunk.graphics.Image.get_clipRect","com/haxepunk/graphics/Image.hx",466,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(466)
	return this->_sourceRect;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_clipRect,return )

::com::haxepunk::graphics::Image Image_obj::createRect( int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createRect",0x1a3ffe5d,"com.haxepunk.graphics.Image.createRect","com/haxepunk/graphics/Image.hx",232,0xdb117b4e)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(233)
		if (((bool((width == (int)0)) || bool((height == (int)0))))){
			HX_STACK_LINE(234)
			HX_STACK_DO_THROW(HX_CSTRING("Illegal rect, sizes cannot be 0."));
		}
		HX_STACK_LINE(236)
		::flash::display::BitmapData source = ::com::haxepunk::HXP_obj::createBitmap(width,height,true,(int)-1);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(237)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(238)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(240)
			::com::haxepunk::ds::Either _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::flash::display::BitmapData &source){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",240,0xdb117b4e)
						{
							HX_STACK_LINE(240)
							::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(240)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(240)
				_g = _Function_3_1::Block(source);
				HX_STACK_LINE(240)
				::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(region);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(240)
					_g1 = e;
				}
			}
			HX_STACK_LINE(240)
			::com::haxepunk::graphics::Image _g2 = ::com::haxepunk::graphics::Image_obj::__new(_g1,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(240)
			image = _g2;
		}
		else{
			HX_STACK_LINE(244)
			::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static ::com::haxepunk::ds::Either Block( ::flash::display::BitmapData &source){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",244,0xdb117b4e)
					{
						HX_STACK_LINE(244)
						::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
						struct _Function_3_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::flash::display::BitmapData &source){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",244,0xdb117b4e)
								{
									HX_STACK_LINE(244)
									::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(244)
									return data;
								}
								return null();
							}
						};
						HX_STACK_LINE(244)
						_g3 = _Function_3_1::Block(source);
						HX_STACK_LINE(244)
						::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(244)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(244)
						return e;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::com::haxepunk::ds::Either Block( ::flash::display::BitmapData &source){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",244,0xdb117b4e)
					{
						HX_STACK_LINE(244)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(source);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(244)
						return e;
					}
					return null();
				}
			};
			HX_STACK_LINE(244)
			_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block(source)) : ::com::haxepunk::ds::Either(_Function_2_2::Block(source)) );
			HX_STACK_LINE(244)
			::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(244)
			image = _g6;
		}
		HX_STACK_LINE(247)
		image->set_color(color);
		HX_STACK_LINE(248)
		image->set_alpha(alpha);
		HX_STACK_LINE(250)
		return image;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Image_obj,createRect,return )

::com::haxepunk::graphics::Image Image_obj::createCircle( int radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createCircle",0x811fa389,"com.haxepunk.graphics.Image.createCircle","com/haxepunk/graphics/Image.hx",261,0xdb117b4e)
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(262)
		if (((radius == (int)0))){
			HX_STACK_LINE(263)
			HX_STACK_DO_THROW(HX_CSTRING("Illegal circle, radius cannot be 0."));
		}
		HX_STACK_LINE(265)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->clear();
		HX_STACK_LINE(266)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->beginFill((int)16777215,null());
		HX_STACK_LINE(267)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->drawCircle(radius,radius,radius);
		HX_STACK_LINE(268)
		::flash::display::BitmapData data = ::com::haxepunk::HXP_obj::createBitmap((radius * (int)2),(radius * (int)2),true,(int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(269)
		data->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(271)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(272)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(274)
			::com::haxepunk::ds::Either _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::flash::display::BitmapData &data){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",274,0xdb117b4e)
						{
							HX_STACK_LINE(274)
							::com::haxepunk::graphics::atlas::AtlasData data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
							HX_STACK_LINE(274)
							return data1;
						}
						return null();
					}
				};
				HX_STACK_LINE(274)
				_g = _Function_3_1::Block(data);
				HX_STACK_LINE(274)
				::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(274)
				{
					HX_STACK_LINE(274)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(region);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(274)
					_g1 = e;
				}
			}
			HX_STACK_LINE(274)
			::com::haxepunk::graphics::Image _g2 = ::com::haxepunk::graphics::Image_obj::__new(_g1,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(274)
			image = _g2;
		}
		else{
			HX_STACK_LINE(278)
			::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static ::com::haxepunk::ds::Either Block( ::flash::display::BitmapData &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",278,0xdb117b4e)
					{
						HX_STACK_LINE(278)
						::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
						struct _Function_3_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::flash::display::BitmapData &data){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",278,0xdb117b4e)
								{
									HX_STACK_LINE(278)
									::com::haxepunk::graphics::atlas::AtlasData data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
									HX_STACK_LINE(278)
									return data1;
								}
								return null();
							}
						};
						HX_STACK_LINE(278)
						_g3 = _Function_3_1::Block(data);
						HX_STACK_LINE(278)
						::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(278)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(278)
						return e;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::com::haxepunk::ds::Either Block( ::flash::display::BitmapData &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",278,0xdb117b4e)
					{
						HX_STACK_LINE(278)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(data);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(278)
						return e;
					}
					return null();
				}
			};
			HX_STACK_LINE(278)
			_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block(data)) : ::com::haxepunk::ds::Either(_Function_2_2::Block(data)) );
			HX_STACK_LINE(278)
			::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(278)
			image = _g6;
		}
		HX_STACK_LINE(281)
		image->set_color(color);
		HX_STACK_LINE(282)
		image->set_alpha(alpha);
		HX_STACK_LINE(284)
		return image;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,createCircle,return )

::haxe::ds::ObjectMap Image_obj::_flips;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(_source,"_source");
	HX_MARK_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_MARK_MEMBER_NAME(_buffer,"_buffer");
	HX_MARK_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_flipped,"_flipped");
	HX_MARK_MEMBER_NAME(_flip,"_flip");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(_source,"_source");
	HX_VISIT_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_VISIT_MEMBER_NAME(_buffer,"_buffer");
	HX_VISIT_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_flipped,"_flipped");
	HX_VISIT_MEMBER_NAME(_flip,"_flip");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_flip") ) { return _flip; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { return _flips; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return get_flipped(); }
		if (HX_FIELD_EQ(inName,"_source") ) { return _source; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { return _buffer; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centerOO") ) { return centerOO_dyn(); }
		if (HX_FIELD_EQ(inName,"clipRect") ) { return inCallProp ? get_clipRect() : clipRect; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { return _flipped; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRect") ) { return createRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_flipped") ) { return get_flipped_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipped") ) { return set_flipped_dyn(); }
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { return get_scaledWidth(); }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { return _sourceRect; }
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { return _bufferRect; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCircle") ) { return createCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { return get_scaledHeight(); }
		if (HX_FIELD_EQ(inName,"get_clipRect") ) { return get_clipRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_scaledWidth") ) { return get_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaledWidth") ) { return set_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_scaledHeight") ) { return get_scaledHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaledHeight") ) { return set_scaledHeight_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flip") ) { _flip=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { _flips=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return set_flipped(inValue); }
		if (HX_FIELD_EQ(inName,"_source") ) { _source=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { _buffer=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasRegion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { _flipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { return set_scaledWidth(inValue); }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { _sourceRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { _bufferRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { return set_scaledHeight(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("smooth"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("scaledWidth"));
	outFields->push(HX_CSTRING("scaledHeight"));
	outFields->push(HX_CSTRING("clipRect"));
	outFields->push(HX_CSTRING("_source"));
	outFields->push(HX_CSTRING("_sourceRect"));
	outFields->push(HX_CSTRING("_buffer"));
	outFields->push(HX_CSTRING("_bufferRect"));
	outFields->push(HX_CSTRING("_bitmap"));
	outFields->push(HX_CSTRING("_region"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_tint"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_flipped"));
	outFields->push(HX_CSTRING("_flip"));
	outFields->push(HX_CSTRING("_scale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createRect"),
	HX_CSTRING("createCircle"),
	HX_CSTRING("_flips"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Image_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(Image_obj,scaleX),HX_CSTRING("scaleX")},
	{hx::fsFloat,(int)offsetof(Image_obj,scaleY),HX_CSTRING("scaleY")},
	{hx::fsFloat,(int)offsetof(Image_obj,originX),HX_CSTRING("originX")},
	{hx::fsFloat,(int)offsetof(Image_obj,originY),HX_CSTRING("originY")},
	{hx::fsObject /*::flash::display::BlendMode*/ ,(int)offsetof(Image_obj,blend),HX_CSTRING("blend")},
	{hx::fsBool,(int)offsetof(Image_obj,smooth),HX_CSTRING("smooth")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Image_obj,clipRect),HX_CSTRING("clipRect")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(Image_obj,_source),HX_CSTRING("_source")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Image_obj,_sourceRect),HX_CSTRING("_sourceRect")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(Image_obj,_buffer),HX_CSTRING("_buffer")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Image_obj,_bufferRect),HX_CSTRING("_bufferRect")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Image_obj,_bitmap),HX_CSTRING("_bitmap")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasRegion*/ ,(int)offsetof(Image_obj,_region),HX_CSTRING("_region")},
	{hx::fsFloat,(int)offsetof(Image_obj,_alpha),HX_CSTRING("_alpha")},
	{hx::fsInt,(int)offsetof(Image_obj,_color),HX_CSTRING("_color")},
	{hx::fsObject /*::flash::geom::ColorTransform*/ ,(int)offsetof(Image_obj,_tint),HX_CSTRING("_tint")},
	{hx::fsObject /*::flash::geom::ColorTransform*/ ,(int)offsetof(Image_obj,_colorTransform),HX_CSTRING("_colorTransform")},
	{hx::fsObject /*::flash::geom::Matrix*/ ,(int)offsetof(Image_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsFloat,(int)offsetof(Image_obj,_red),HX_CSTRING("_red")},
	{hx::fsFloat,(int)offsetof(Image_obj,_green),HX_CSTRING("_green")},
	{hx::fsFloat,(int)offsetof(Image_obj,_blue),HX_CSTRING("_blue")},
	{hx::fsBool,(int)offsetof(Image_obj,_flipped),HX_CSTRING("_flipped")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(Image_obj,_flip),HX_CSTRING("_flip")},
	{hx::fsFloat,(int)offsetof(Image_obj,_scale),HX_CSTRING("_scale")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("angle"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("originX"),
	HX_CSTRING("originY"),
	HX_CSTRING("blend"),
	HX_CSTRING("init"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("render"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_flipped"),
	HX_CSTRING("set_flipped"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("centerOO"),
	HX_CSTRING("smooth"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_scaledWidth"),
	HX_CSTRING("set_scaledWidth"),
	HX_CSTRING("get_scaledHeight"),
	HX_CSTRING("set_scaledHeight"),
	HX_CSTRING("clipRect"),
	HX_CSTRING("get_clipRect"),
	HX_CSTRING("_source"),
	HX_CSTRING("_sourceRect"),
	HX_CSTRING("_buffer"),
	HX_CSTRING("_bufferRect"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_region"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_color"),
	HX_CSTRING("_tint"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_red"),
	HX_CSTRING("_green"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_flipped"),
	HX_CSTRING("_flip"),
	HX_CSTRING("_scale"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::_flips,"_flips");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::_flips,"_flips");
};

#endif

Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Image_obj::__boot()
{
	_flips= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
