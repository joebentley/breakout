#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void AtlasRegion_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData parent,int tileIndex,::flash::geom::Rectangle rect)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","new",0x043c55c4,"com.haxepunk.graphics.atlas.AtlasRegion.new","com/haxepunk/graphics/atlas/AtlasRegion.hx",34,0x9abdf08e)

HX_STACK_ARG(parent,"parent")

HX_STACK_ARG(tileIndex,"tileIndex")

HX_STACK_ARG(rect,"rect")
{
	HX_STACK_LINE(35)
	this->_parent = parent;
	HX_STACK_LINE(36)
	this->tileIndex = tileIndex;
	HX_STACK_LINE(37)
	this->_rect = rect;
	HX_STACK_LINE(38)
	this->rotated = false;
}
;
	return null();
}

//AtlasRegion_obj::~AtlasRegion_obj() { }

Dynamic AtlasRegion_obj::__CreateEmpty() { return  new AtlasRegion_obj; }
hx::ObjectPtr< AtlasRegion_obj > AtlasRegion_obj::__new(::com::haxepunk::graphics::atlas::AtlasData parent,int tileIndex,::flash::geom::Rectangle rect)
{  hx::ObjectPtr< AtlasRegion_obj > result = new AtlasRegion_obj();
	result->__construct(parent,tileIndex,rect);
	return result;}

Dynamic AtlasRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasRegion_obj > result = new AtlasRegion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::com::haxepunk::graphics::atlas::AtlasRegion AtlasRegion_obj::clip( ::flash::geom::Rectangle clipRect,::flash::geom::Point center){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","clip",0xa94ea0ec,"com.haxepunk.graphics.atlas.AtlasRegion.clip","com/haxepunk/graphics/atlas/AtlasRegion.hx",48,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(50)
	::flash::geom::Rectangle clipRectCopy = ::flash::geom::Rectangle_obj::__new(clipRect->x,clipRect->y,clipRect->width,clipRect->height);		HX_STACK_VAR(clipRectCopy,"clipRectCopy");
	HX_STACK_LINE(53)
	if ((((clipRectCopy->x + clipRectCopy->width) > this->_rect->width))){
		HX_STACK_LINE(54)
		clipRectCopy->width = (this->_rect->width - clipRectCopy->x);
	}
	HX_STACK_LINE(55)
	if ((((clipRectCopy->y + clipRectCopy->height) > this->_rect->height))){
		HX_STACK_LINE(56)
		clipRectCopy->height = (this->_rect->height - clipRectCopy->y);
	}
	HX_STACK_LINE(59)
	if (((clipRectCopy->width < (int)0))){
		HX_STACK_LINE(59)
		clipRectCopy->width = (int)0;
	}
	HX_STACK_LINE(60)
	if (((clipRectCopy->height < (int)0))){
		HX_STACK_LINE(60)
		clipRectCopy->height = (int)0;
	}
	HX_STACK_LINE(63)
	hx::AddEq(clipRectCopy->x,this->_rect->x);
	HX_STACK_LINE(64)
	hx::AddEq(clipRectCopy->y,this->_rect->y);
	HX_STACK_LINE(65)
	::com::haxepunk::graphics::atlas::AtlasData _this = this->_parent;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(65)
	::flash::geom::Rectangle r = clipRectCopy->clone();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(65)
	_this->_rects->push(r);
	HX_STACK_LINE(65)
	int tileIndex = _this->_tilesheet->addTileRect(r,null());		HX_STACK_VAR(tileIndex,"tileIndex");
	HX_STACK_LINE(65)
	return ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(_this,tileIndex,r);
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasRegion_obj,clip,return )

Void AtlasRegion_obj::draw( Float x,Float y,int layer,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_angle,hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha){
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float angle = __o_angle.Default(0);
Float red = __o_red.Default(1);
Float green = __o_green.Default(1);
Float blue = __o_blue.Default(1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","draw",0xa9fc5e20,"com.haxepunk.graphics.atlas.AtlasRegion.draw","com/haxepunk/graphics/atlas/AtlasRegion.hx",84,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(85)
		if ((this->rotated)){
			HX_STACK_LINE(85)
			angle = (angle + (int)90);
		}
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::com::haxepunk::graphics::atlas::AtlasData _this = this->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this))){
					HX_STACK_LINE(86)
					if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
						HX_STACK_LINE(86)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(86)
						if (((_this1->_dataIndex != (int)0))){
							HX_STACK_LINE(86)
							::flash::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(86)
							_this1->_tilesheet->drawTiles(_g,_this1->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags,_this1->_dataIndex);
							HX_STACK_LINE(86)
							_this1->_dataIndex = (int)0;
						}
					}
					HX_STACK_LINE(86)
					::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
				}
				HX_STACK_LINE(86)
				_this;
			}
			HX_STACK_LINE(86)
			int _g1 = (_this->_dataIndex)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			_this->_data[_g1] = x;
			HX_STACK_LINE(86)
			int _g2 = (_this->_dataIndex)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(86)
			_this->_data[_g2] = y;
			HX_STACK_LINE(86)
			int _g3 = (_this->_dataIndex)++;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(86)
			_this->_data[_g3] = this->tileIndex;
			HX_STACK_LINE(86)
			if (((angle == (int)0))){
				HX_STACK_LINE(86)
				int _g4 = (_this->_dataIndex)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(86)
				_this->_data[_g4] = scaleX;
				HX_STACK_LINE(86)
				int _g5 = (_this->_dataIndex)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(86)
				_this->_data[_g5] = (int)0;
				HX_STACK_LINE(86)
				int _g6 = (_this->_dataIndex)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(86)
				_this->_data[_g6] = (int)0;
				HX_STACK_LINE(86)
				int _g7 = (_this->_dataIndex)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(86)
				_this->_data[_g7] = scaleY;
			}
			else{
				HX_STACK_LINE(86)
				Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(86)
				Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(86)
				int _g8 = (_this->_dataIndex)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(86)
				_this->_data[_g8] = (cos * scaleX);
				HX_STACK_LINE(86)
				int _g9 = (_this->_dataIndex)++;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(86)
				_this->_data[_g9] = (-(sin) * scaleY);
				HX_STACK_LINE(86)
				int _g10 = (_this->_dataIndex)++;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(86)
				_this->_data[_g10] = (sin * scaleX);
				HX_STACK_LINE(86)
				int _g11 = (_this->_dataIndex)++;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(86)
				_this->_data[_g11] = (cos * scaleY);
			}
			HX_STACK_LINE(86)
			if ((_this->_flagRGB)){
				HX_STACK_LINE(86)
				int _g12 = (_this->_dataIndex)++;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(86)
				_this->_data[_g12] = red;
				HX_STACK_LINE(86)
				int _g13 = (_this->_dataIndex)++;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(86)
				_this->_data[_g13] = green;
				HX_STACK_LINE(86)
				int _g14 = (_this->_dataIndex)++;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(86)
				_this->_data[_g14] = blue;
			}
			HX_STACK_LINE(86)
			if ((_this->_flagAlpha)){
				HX_STACK_LINE(86)
				int _g15 = (_this->_dataIndex)++;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(86)
				_this->_data[_g15] = alpha;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(AtlasRegion_obj,draw,(void))

Void AtlasRegion_obj::drawMatrix( Float tx,Float ty,Float a,Float b,Float c,Float d,int layer,hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha){
Float red = __o_red.Default(1);
Float green = __o_green.Default(1);
Float blue = __o_blue.Default(1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","drawMatrix",0x53a26081,"com.haxepunk.graphics.atlas.AtlasRegion.drawMatrix","com/haxepunk/graphics/atlas/AtlasRegion.hx",106,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(106)
		if ((this->rotated)){
			HX_STACK_LINE(108)
			::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(a,b,c,d,tx,ty);		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(109)
			matrix->rotate(((int)90 * ((Float(::Math_obj::PI) / Float((int)-180)))));
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				::com::haxepunk::graphics::atlas::AtlasData _this = this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this))){
						HX_STACK_LINE(110)
						if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
							HX_STACK_LINE(110)
							::com::haxepunk::graphics::atlas::AtlasData _this1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(110)
							if (((_this1->_dataIndex != (int)0))){
								HX_STACK_LINE(110)
								::flash::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(110)
								_this1->_tilesheet->drawTiles(_g,_this1->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags,_this1->_dataIndex);
								HX_STACK_LINE(110)
								_this1->_dataIndex = (int)0;
							}
						}
						HX_STACK_LINE(110)
						::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
					}
					HX_STACK_LINE(110)
					_this;
				}
				HX_STACK_LINE(110)
				int _g1 = (_this->_dataIndex)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(110)
				_this->_data[_g1] = matrix->tx;
				HX_STACK_LINE(110)
				int _g2 = (_this->_dataIndex)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(110)
				_this->_data[_g2] = matrix->ty;
				HX_STACK_LINE(110)
				int _g3 = (_this->_dataIndex)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(110)
				_this->_data[_g3] = this->tileIndex;
				HX_STACK_LINE(110)
				int _g4 = (_this->_dataIndex)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(110)
				_this->_data[_g4] = matrix->a;
				HX_STACK_LINE(110)
				int _g5 = (_this->_dataIndex)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(110)
				_this->_data[_g5] = matrix->b;
				HX_STACK_LINE(110)
				int _g6 = (_this->_dataIndex)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(110)
				_this->_data[_g6] = matrix->c;
				HX_STACK_LINE(110)
				int _g7 = (_this->_dataIndex)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(110)
				_this->_data[_g7] = matrix->d;
				HX_STACK_LINE(110)
				if ((_this->_flagRGB)){
					HX_STACK_LINE(110)
					int _g8 = (_this->_dataIndex)++;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(110)
					_this->_data[_g8] = red;
					HX_STACK_LINE(110)
					int _g9 = (_this->_dataIndex)++;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(110)
					_this->_data[_g9] = green;
					HX_STACK_LINE(110)
					int _g10 = (_this->_dataIndex)++;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(110)
					_this->_data[_g10] = blue;
				}
				HX_STACK_LINE(110)
				if ((_this->_flagAlpha)){
					HX_STACK_LINE(110)
					int _g11 = (_this->_dataIndex)++;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(110)
					_this->_data[_g11] = alpha;
				}
			}
		}
		else{
			HX_STACK_LINE(116)
			::com::haxepunk::graphics::atlas::AtlasData _this = this->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this))){
					HX_STACK_LINE(116)
					if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
						HX_STACK_LINE(116)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(116)
						if (((_this1->_dataIndex != (int)0))){
							HX_STACK_LINE(116)
							::flash::display::Graphics _g12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(116)
							_this1->_tilesheet->drawTiles(_g12,_this1->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags,_this1->_dataIndex);
							HX_STACK_LINE(116)
							_this1->_dataIndex = (int)0;
						}
					}
					HX_STACK_LINE(116)
					::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
				}
				HX_STACK_LINE(116)
				_this;
			}
			HX_STACK_LINE(116)
			int _g13 = (_this->_dataIndex)++;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(116)
			_this->_data[_g13] = tx;
			HX_STACK_LINE(116)
			int _g14 = (_this->_dataIndex)++;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(116)
			_this->_data[_g14] = ty;
			HX_STACK_LINE(116)
			int _g15 = (_this->_dataIndex)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(116)
			_this->_data[_g15] = this->tileIndex;
			HX_STACK_LINE(116)
			int _g16 = (_this->_dataIndex)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(116)
			_this->_data[_g16] = a;
			HX_STACK_LINE(116)
			int _g17 = (_this->_dataIndex)++;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(116)
			_this->_data[_g17] = b;
			HX_STACK_LINE(116)
			int _g18 = (_this->_dataIndex)++;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(116)
			_this->_data[_g18] = c;
			HX_STACK_LINE(116)
			int _g19 = (_this->_dataIndex)++;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(116)
			_this->_data[_g19] = d;
			HX_STACK_LINE(116)
			if ((_this->_flagRGB)){
				HX_STACK_LINE(116)
				int _g20 = (_this->_dataIndex)++;		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(116)
				_this->_data[_g20] = red;
				HX_STACK_LINE(116)
				int _g21 = (_this->_dataIndex)++;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(116)
				_this->_data[_g21] = green;
				HX_STACK_LINE(116)
				int _g22 = (_this->_dataIndex)++;		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(116)
				_this->_data[_g22] = blue;
			}
			HX_STACK_LINE(116)
			if ((_this->_flagAlpha)){
				HX_STACK_LINE(116)
				int _g23 = (_this->_dataIndex)++;		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(116)
				_this->_data[_g23] = alpha;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(AtlasRegion_obj,drawMatrix,(void))

Void AtlasRegion_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","destroy",0x1ba7345e,"com.haxepunk.graphics.atlas.AtlasRegion.destroy","com/haxepunk/graphics/atlas/AtlasRegion.hx",122,0x9abdf08e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		if (((this->_parent != null()))){
			HX_STACK_LINE(124)
			this->_parent->destroy();
			HX_STACK_LINE(125)
			this->_parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,destroy,(void))

::String AtlasRegion_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","toString",0x7e3440c8,"com.haxepunk.graphics.atlas.AtlasRegion.toString","com/haxepunk/graphics/atlas/AtlasRegion.hx",136,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	return ((((((HX_CSTRING("[AtlasRegion ") + this->_rect->width) + HX_CSTRING(", ")) + this->_rect->height) + HX_CSTRING(" ")) + this->tileIndex) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,toString,return )

Float AtlasRegion_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","get_width",0xd508bac1,"com.haxepunk.graphics.atlas.AtlasRegion.get_width","com/haxepunk/graphics/atlas/AtlasRegion.hx",139,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	return this->_rect->width;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,get_width,return )

Float AtlasRegion_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","get_height",0x48ea26cc,"com.haxepunk.graphics.atlas.AtlasRegion.get_height","com/haxepunk/graphics/atlas/AtlasRegion.hx",140,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	return this->_rect->height;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,get_height,return )


AtlasRegion_obj::AtlasRegion_obj()
{
}

void AtlasRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasRegion);
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_MEMBER_NAME(tileIndex,"tileIndex");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_END_CLASS();
}

void AtlasRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
	HX_VISIT_MEMBER_NAME(tileIndex,"tileIndex");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
}

Dynamic AtlasRegion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileIndex") ) { return tileIndex; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawMatrix") ) { return drawMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileIndex") ) { tileIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rotated"));
	outFields->push(HX_CSTRING("tileIndex"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(AtlasRegion_obj,rotated),HX_CSTRING("rotated")},
	{hx::fsInt,(int)offsetof(AtlasRegion_obj,tileIndex),HX_CSTRING("tileIndex")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(AtlasRegion_obj,_rect),HX_CSTRING("_rect")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasData*/ ,(int)offsetof(AtlasRegion_obj,_parent),HX_CSTRING("_parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("rotated"),
	HX_CSTRING("tileIndex"),
	HX_CSTRING("clip"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawMatrix"),
	HX_CSTRING("destroy"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

#endif

Class AtlasRegion_obj::__mClass;

void AtlasRegion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.AtlasRegion"), hx::TCanCast< AtlasRegion_obj> ,sStaticFields,sMemberFields,
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

void AtlasRegion_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
