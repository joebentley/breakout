#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Polygon_obj::__construct(Array< ::Dynamic > points,::flash::geom::Point origin)
{
HX_STACK_FRAME("com.haxepunk.masks.Polygon","new",0x4d8c772c,"com.haxepunk.masks.Polygon.new","com/haxepunk/masks/Polygon.hx",31,0xc83634e5)

HX_STACK_ARG(points,"points")

HX_STACK_ARG(origin,"origin")
{
	HX_STACK_LINE(32)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(33)
	if (((points->length < (int)3))){
		HX_STACK_LINE(33)
		HX_STACK_DO_THROW(HX_CSTRING("The polygon needs at least 3 sides."));
	}
	HX_STACK_LINE(34)
	this->_points = points;
	HX_STACK_LINE(36)
	::com::haxepunk::Entity _g = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->_fakeEntity = _g;
	HX_STACK_LINE(37)
	::com::haxepunk::masks::Hitbox _g1 = ::com::haxepunk::masks::Hitbox_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	this->_fakeTileHitbox = _g1;
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(39)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(40)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(41)
		this->_check->set(key,this->collideGrid_dyn());
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(42)
		this->_check->set(key,this->collideCircle_dyn());
	}
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(43)
		this->_check->set(key,this->collidePolygon_dyn());
	}
	HX_STACK_LINE(45)
	::flash::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(45)
	if (((origin != null()))){
		HX_STACK_LINE(45)
		_g2 = origin;
	}
	else{
		HX_STACK_LINE(45)
		_g2 = ::flash::geom::Point_obj::__new(null(),null());
	}
	HX_STACK_LINE(45)
	this->origin = _g2;
	HX_STACK_LINE(46)
	this->_angle = (int)0;
	HX_STACK_LINE(48)
	this->updateAxes();
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::Dynamic > points,::flash::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(points,origin);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideMask",0xa1c20656,"com.haxepunk.masks.Polygon.collideMask","com/haxepunk/masks/Polygon.hx",55,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(56)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(57)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",57,0xc83634e5)
			{
				HX_STACK_LINE(57)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(57)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",57,0xc83634e5)
			{
				HX_STACK_LINE(57)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(57)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(57)
	offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other));
	HX_STACK_LINE(58)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",58,0xc83634e5)
			{
				HX_STACK_LINE(58)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(58)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",58,0xc83634e5)
			{
				HX_STACK_LINE(58)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(58)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(58)
	offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other));
	HX_STACK_LINE(61)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(62)
	other->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(64)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(65)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",68,0xc83634e5)
			{
				HX_STACK_LINE(68)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(68)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(70)
		return false;
	}
	HX_STACK_LINE(74)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(75)
	other->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(77)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(78)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",81,0xc83634e5)
			{
				HX_STACK_LINE(81)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(81)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(81)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(81)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(83)
		return false;
	}
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(88)
			++(_g);
			HX_STACK_LINE(90)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(91)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(93)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(94)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(95)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",98,0xc83634e5)
					{
						HX_STACK_LINE(98)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(98)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(98)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(98)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(100)
				return false;
			}
		}
	}
	HX_STACK_LINE(103)
	return true;
}


bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideHitbox",0xb71f6182,"com.haxepunk.masks.Polygon.collideHitbox","com/haxepunk/masks/Polygon.hx",110,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hitbox,"hitbox")
	HX_STACK_LINE(111)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(112)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",112,0xc83634e5)
			{
				HX_STACK_LINE(112)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(112)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",112,0xc83634e5)
			{
				HX_STACK_LINE(112)
				::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(112)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(112)
	offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(hitbox));
	HX_STACK_LINE(113)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",113,0xc83634e5)
			{
				HX_STACK_LINE(113)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(113)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",113,0xc83634e5)
			{
				HX_STACK_LINE(113)
				::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(113)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(113)
	offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(hitbox));
	HX_STACK_LINE(116)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(117)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(119)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(120)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",123,0xc83634e5)
			{
				HX_STACK_LINE(123)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(123)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(123)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(125)
		return false;
	}
	HX_STACK_LINE(129)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(130)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(132)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(133)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",136,0xc83634e5)
			{
				HX_STACK_LINE(136)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(136)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(136)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(136)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(138)
		return false;
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(145)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(146)
			hitbox->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(148)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(149)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(150)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",153,0xc83634e5)
					{
						HX_STACK_LINE(153)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(153)
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(153)
						return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(153)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(155)
				return false;
			}
		}
	}
	HX_STACK_LINE(158)
	return true;
}


bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideGrid",0x9dd79c30,"com.haxepunk.masks.Polygon.collideGrid","com/haxepunk/masks/Polygon.hx",168,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_LINE(169)
	int tileW = ::Std_obj::_int(grid->_tile->width);		HX_STACK_VAR(tileW,"tileW");
	HX_STACK_LINE(170)
	int tileH = ::Std_obj::_int(grid->_tile->height);		HX_STACK_VAR(tileH,"tileH");
	HX_STACK_LINE(171)
	bool solidTile;		HX_STACK_VAR(solidTile,"solidTile");
	HX_STACK_LINE(173)
	this->_fakeEntity->width = tileW;
	HX_STACK_LINE(174)
	this->_fakeEntity->height = tileH;
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		::com::haxepunk::Entity _this = this->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(175)
		if ((_this->followCamera)){
			HX_STACK_LINE(175)
			this->_fakeEntity->x = (_this->x + ::com::haxepunk::HXP_obj::camera->x);
		}
		else{
			HX_STACK_LINE(175)
			this->_fakeEntity->x = _this->x;
		}
	}
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		::com::haxepunk::Entity _this = this->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(176)
		if ((_this->followCamera)){
			HX_STACK_LINE(176)
			this->_fakeEntity->y = (_this->y + ::com::haxepunk::HXP_obj::camera->y);
		}
		else{
			HX_STACK_LINE(176)
			this->_fakeEntity->y = _this->y;
		}
	}
	HX_STACK_LINE(177)
	this->_fakeEntity->originX = (grid->_parent->originX + grid->_x);
	HX_STACK_LINE(178)
	this->_fakeEntity->originY = (grid->_parent->originY + grid->_y);
	HX_STACK_LINE(180)
	this->_fakeTileHitbox->_width = tileW;
	HX_STACK_LINE(181)
	this->_fakeTileHitbox->_height = tileH;
	HX_STACK_LINE(182)
	this->_fakeTileHitbox->set_parent(this->_fakeEntity);
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		int _g = grid->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while((true)){
			HX_STACK_LINE(184)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(184)
			int r = (_g1)++;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(186)
				int _g2 = grid->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(186)
				while((true)){
					HX_STACK_LINE(186)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(186)
						break;
					}
					HX_STACK_LINE(186)
					int c = (_g3)++;		HX_STACK_VAR(c,"c");
					struct _Function_5_1{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",188,0xc83634e5)
							{
								HX_STACK_LINE(188)
								::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
							}
							return null();
						}
					};
					HX_STACK_LINE(188)
					this->_fakeEntity->x = ((_Function_5_1::Block(grid) + grid->_x) + (c * tileW));
					struct _Function_5_2{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",189,0xc83634e5)
							{
								HX_STACK_LINE(189)
								::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(189)
								return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(189)
					this->_fakeEntity->y = ((_Function_5_2::Block(grid) + grid->_y) + (r * tileH));
					HX_STACK_LINE(190)
					bool _g4 = grid->getTile(c,r);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(190)
					solidTile = _g4;
					HX_STACK_LINE(192)
					if (((  ((solidTile)) ? bool(this->collideHitbox(this->_fakeTileHitbox)) : bool(false) ))){
						HX_STACK_LINE(192)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(195)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideCircle",0xb604e5fa,"com.haxepunk.masks.Polygon.collideCircle","com/haxepunk/masks/Polygon.hx",202,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_LINE(203)
	int edgesCrossed = (int)0;		HX_STACK_VAR(edgesCrossed,"edgesCrossed");
	HX_STACK_LINE(204)
	::flash::geom::Point p1;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(204)
	::flash::geom::Point p2;		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(205)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(205)
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(206)
	int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
	HX_STACK_LINE(207)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",207,0xc83634e5)
			{
				HX_STACK_LINE(207)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(207)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(207)
	offsetX = (_Function_1_1::Block(this) + this->_x);
	HX_STACK_LINE(208)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",208,0xc83634e5)
			{
				HX_STACK_LINE(208)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(208)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(208)
	offsetY = (_Function_1_2::Block(this) + this->_y);
	HX_STACK_LINE(212)
	i = (int)0;
	HX_STACK_LINE(213)
	j = (nPoints - (int)1);
	HX_STACK_LINE(214)
	while((true)){
		HX_STACK_LINE(214)
		if ((!(((i < nPoints))))){
			HX_STACK_LINE(214)
			break;
		}
		HX_STACK_LINE(216)
		p1 = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(217)
		p2 = this->_points->__get(j).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(219)
		Float distFromCenter;		HX_STACK_VAR(distFromCenter,"distFromCenter");
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",219,0xc83634e5)
				{
					HX_STACK_LINE(219)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(219)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(219)
		distFromCenter = (((Float((((p2->x - p1->x)) * ((((circle->_y + _Function_2_1::Block(circle)) - p1->y) - offsetY)))) / Float(((p2->y - p1->y)))) + p1->x) + offsetX);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",221,0xc83634e5)
				{
					HX_STACK_LINE(221)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(221)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",221,0xc83634e5)
				{
					HX_STACK_LINE(221)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(221)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",222,0xc83634e5)
				{
					HX_STACK_LINE(222)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(222)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(221)
		if (((bool((((p1->y + offsetY) > (circle->_y + _Function_2_2::Block(circle))) != ((p2->y + offsetY) > (circle->_y + _Function_2_3::Block(circle))))) && bool(((circle->_x + _Function_2_4::Block(circle)) < distFromCenter))))){
			HX_STACK_LINE(224)
			(edgesCrossed)++;
		}
		HX_STACK_LINE(226)
		j = i;
		HX_STACK_LINE(227)
		(i)++;
	}
	HX_STACK_LINE(230)
	if (((((int(edgesCrossed) & int((int)1))) > (int)0))){
		HX_STACK_LINE(230)
		return true;
	}
	HX_STACK_LINE(233)
	Float radiusSqr = (circle->_radius * circle->_radius);		HX_STACK_VAR(radiusSqr,"radiusSqr");
	HX_STACK_LINE(234)
	Float cx;		HX_STACK_VAR(cx,"cx");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",234,0xc83634e5)
			{
				HX_STACK_LINE(234)
				::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(234)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(234)
	cx = (circle->_x + _Function_1_3::Block(circle));
	HX_STACK_LINE(235)
	Float cy;		HX_STACK_VAR(cy,"cy");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",235,0xc83634e5)
			{
				HX_STACK_LINE(235)
				::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(235)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(235)
	cy = (circle->_y + _Function_1_4::Block(circle));
	HX_STACK_LINE(236)
	Float minDistanceSqr = (int)0;		HX_STACK_VAR(minDistanceSqr,"minDistanceSqr");
	HX_STACK_LINE(237)
	Float closestX;		HX_STACK_VAR(closestX,"closestX");
	HX_STACK_LINE(238)
	Float closestY;		HX_STACK_VAR(closestY,"closestY");
	HX_STACK_LINE(240)
	i = (int)0;
	HX_STACK_LINE(241)
	j = (nPoints - (int)1);
	HX_STACK_LINE(242)
	while((true)){
		HX_STACK_LINE(242)
		if ((!(((i < nPoints))))){
			HX_STACK_LINE(242)
			break;
		}
		HX_STACK_LINE(244)
		p1 = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(245)
		p2 = this->_points->__get(j).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(247)
		Float segmentLenSqr = ((((p1->x - p2->x)) * ((p1->x - p2->x))) + (((p1->y - p2->y)) * ((p1->y - p2->y))));		HX_STACK_VAR(segmentLenSqr,"segmentLenSqr");
		HX_STACK_LINE(250)
		Float t = (Float(((((((cx - p1->x) - offsetX)) * ((p2->x - p1->x))) + ((((cy - p1->y) - offsetY)) * ((p2->y - p1->y)))))) / Float(segmentLenSqr));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(252)
		if (((t < (int)0))){
			HX_STACK_LINE(254)
			closestX = p1->x;
			HX_STACK_LINE(255)
			closestY = p1->y;
		}
		else{
			HX_STACK_LINE(257)
			if (((t > (int)1))){
				HX_STACK_LINE(259)
				closestX = p2->x;
				HX_STACK_LINE(260)
				closestY = p2->y;
			}
			else{
				HX_STACK_LINE(264)
				closestX = (p1->x + (t * ((p2->x - p1->x))));
				HX_STACK_LINE(265)
				closestY = (p1->y + (t * ((p2->y - p1->y))));
			}
		}
		HX_STACK_LINE(267)
		hx::AddEq(closestX,offsetX);
		HX_STACK_LINE(268)
		hx::AddEq(closestY,offsetY);
		HX_STACK_LINE(270)
		minDistanceSqr = ((((cx - closestX)) * ((cx - closestX))) + (((cy - closestY)) * ((cy - closestY))));
		HX_STACK_LINE(272)
		if (((minDistanceSqr <= radiusSqr))){
			HX_STACK_LINE(272)
			return true;
		}
		HX_STACK_LINE(274)
		j = i;
		HX_STACK_LINE(275)
		(i)++;
	}
	HX_STACK_LINE(278)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collidePolygon",0xab1efb50,"com.haxepunk.masks.Polygon.collidePolygon","com/haxepunk/masks/Polygon.hx",285,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(286)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(287)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",287,0xc83634e5)
			{
				HX_STACK_LINE(287)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",287,0xc83634e5)
			{
				HX_STACK_LINE(287)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(287)
	offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other));
	HX_STACK_LINE(288)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",288,0xc83634e5)
			{
				HX_STACK_LINE(288)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(288)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",288,0xc83634e5)
			{
				HX_STACK_LINE(288)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(288)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(288)
	offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other));
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(292)
		while((true)){
			HX_STACK_LINE(292)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(292)
				break;
			}
			HX_STACK_LINE(292)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(292)
			++(_g);
			HX_STACK_LINE(294)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(295)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(298)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(299)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(300)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",303,0xc83634e5)
					{
						HX_STACK_LINE(303)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(303)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(303)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(303)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(305)
				return false;
			}
		}
	}
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		Array< ::Dynamic > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(313)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(314)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(317)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(318)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(319)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",322,0xc83634e5)
					{
						HX_STACK_LINE(322)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(322)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(322)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(322)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(324)
				return false;
			}
		}
	}
	HX_STACK_LINE(327)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

Void Polygon_obj::project( ::flash::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","project",0x392d0fa5,"com.haxepunk.masks.Polygon.project","com/haxepunk/masks/Polygon.hx",332,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(333)
		::flash::geom::Point p = this->_points->__get((int)0).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(335)
		Float min = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(336)
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(338)
		{
			HX_STACK_LINE(338)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(338)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(338)
			while((true)){
				HX_STACK_LINE(338)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(338)
					break;
				}
				HX_STACK_LINE(338)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(340)
				p = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
				HX_STACK_LINE(341)
				Float cur = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(343)
				if (((cur < min))){
					HX_STACK_LINE(345)
					min = cur;
				}
				else{
					HX_STACK_LINE(347)
					if (((cur > max))){
						HX_STACK_LINE(349)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(352)
		projection->min = min;
		HX_STACK_LINE(353)
		projection->max = max;
	}
return null();
}


Void Polygon_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","debugDraw",0x3b0f97c3,"com.haxepunk.masks.Polygon.debugDraw","com/haxepunk/masks/Polygon.hx",357,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(358)
		Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
		struct _Function_1_1{
			inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",358,0xc83634e5)
				{
					HX_STACK_LINE(358)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(358)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(358)
		offsetX = ((_Function_1_1::Block(this) + this->_x) - ::com::haxepunk::HXP_obj::camera->x);
		HX_STACK_LINE(359)
		Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
		struct _Function_1_2{
			inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",359,0xc83634e5)
				{
					HX_STACK_LINE(359)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(359)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(359)
		offsetY = ((_Function_1_2::Block(this) + this->_y) - ::com::haxepunk::HXP_obj::camera->y);
		HX_STACK_LINE(361)
		graphics->beginFill((int)255,.3);
		HX_STACK_LINE(363)
		graphics->moveTo((((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(364)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(364)
			while((true)){
				HX_STACK_LINE(364)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(364)
					break;
				}
				HX_STACK_LINE(364)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(366)
				graphics->lineTo((((this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
			}
		}
		HX_STACK_LINE(369)
		graphics->endFill();
		HX_STACK_LINE(372)
		graphics->drawCircle((((offsetX + this->origin->x)) * scaleX),(((offsetY + this->origin->y)) * scaleY),(int)2);
	}
return null();
}


Float Polygon_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_angle",0x7bdf67f6,"com.haxepunk.masks.Polygon.get_angle","com/haxepunk/masks/Polygon.hx",379,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(379)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_angle,return )

Float Polygon_obj::set_angle( Float value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_angle",0x5f305402,"com.haxepunk.masks.Polygon.set_angle","com/haxepunk/masks/Polygon.hx",381,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(382)
	if (((value != this->_angle))){
		HX_STACK_LINE(384)
		this->rotate((value - this->_angle));
		HX_STACK_LINE(385)
		if (((bool((this->list != null())) || bool((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))))){
			HX_STACK_LINE(385)
			this->update();
		}
	}
	HX_STACK_LINE(387)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_angle,return )

Array< ::Dynamic > Polygon_obj::get_points( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_points",0x7bb08ca0,"com.haxepunk.masks.Polygon.get_points","com/haxepunk/masks/Polygon.hx",397,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(397)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_points,return )

Array< ::Dynamic > Polygon_obj::set_points( Array< ::Dynamic > value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_points",0x7f2e2b14,"com.haxepunk.masks.Polygon.set_points","com/haxepunk/masks/Polygon.hx",399,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(400)
	if (((this->_points != value))){
		HX_STACK_LINE(402)
		this->_points = value;
		HX_STACK_LINE(403)
		if (((bool((this->list != null())) || bool((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))))){
			HX_STACK_LINE(403)
			this->updateAxes();
		}
	}
	HX_STACK_LINE(405)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_points,return )

Void Polygon_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","update",0x8d1026bd,"com.haxepunk.masks.Polygon.update","com/haxepunk/masks/Polygon.hx",410,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(411)
		this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
		HX_STACK_LINE(412)
		int projX = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::firstProj->min);		HX_STACK_VAR(projX,"projX");
		HX_STACK_LINE(413)
		int _g = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::firstProj->max - ::com::haxepunk::masks::Polygon_obj::firstProj->min));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(413)
		this->_width = _g;
		HX_STACK_LINE(414)
		this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
		HX_STACK_LINE(415)
		int projY = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::secondProj->min);		HX_STACK_VAR(projY,"projY");
		HX_STACK_LINE(416)
		int _g1 = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::secondProj->max - ::com::haxepunk::masks::Polygon_obj::secondProj->min));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(416)
		this->_height = _g1;
		HX_STACK_LINE(418)
		if (((this->list != null()))){
			HX_STACK_LINE(421)
			this->list->update();
		}
		else{
			HX_STACK_LINE(423)
			if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
				HX_STACK_LINE(425)
				this->_parent->originX = (-(this->_x) - projX);
				HX_STACK_LINE(426)
				this->_parent->originY = (-(this->_y) - projY);
				HX_STACK_LINE(427)
				this->_parent->width = this->_width;
				HX_STACK_LINE(428)
				this->_parent->height = this->_height;
			}
		}
	}
return null();
}


Void Polygon_obj::rotate( Float angleDelta){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","rotate",0xd12ae70f,"com.haxepunk.masks.Polygon.rotate","com/haxepunk/masks/Polygon.hx",485,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angleDelta,"angleDelta")
		HX_STACK_LINE(486)
		hx::AddEq(this->_angle,angleDelta);
		HX_STACK_LINE(488)
		hx::MultEq(angleDelta,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(490)
		::flash::geom::Point p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(492)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(492)
			while((true)){
				HX_STACK_LINE(492)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(492)
					break;
				}
				HX_STACK_LINE(492)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(494)
				p = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
				HX_STACK_LINE(495)
				Float dx = (p->x - this->origin->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(496)
				Float dy = (p->y - this->origin->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(498)
				Float pointAngle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(499)
				Float length = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					Float _g2 = ::Math_obj::cos((pointAngle + angleDelta));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(501)
					Float _g11 = (_g2 * length);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(501)
					Float value = (_g11 + this->origin->x);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(501)
					p->x = value;
				}
				HX_STACK_LINE(502)
				{
					HX_STACK_LINE(502)
					Float _g2 = ::Math_obj::sin((pointAngle + angleDelta));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(502)
					Float _g3 = (_g2 * length);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(502)
					Float value = (_g3 + this->origin->y);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(502)
					p->y = value;
				}
			}
		}
		HX_STACK_LINE(505)
		{
			HX_STACK_LINE(505)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(505)
			Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(505)
			while((true)){
				HX_STACK_LINE(505)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(505)
					break;
				}
				HX_STACK_LINE(505)
				::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(505)
				++(_g);
				HX_STACK_LINE(507)
				Float axisAngle = ::Math_obj::atan2(a->y,a->x);		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(509)
				{
					HX_STACK_LINE(509)
					Float value = ::Math_obj::cos((axisAngle + angleDelta));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(509)
					a->x = value;
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					Float value = ::Math_obj::sin((axisAngle + angleDelta));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(510)
					a->y = value;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","generateAxes",0xe42702ae,"com.haxepunk.masks.Polygon.generateAxes","com/haxepunk/masks/Polygon.hx",515,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(516)
		this->_axes = _g;
		HX_STACK_LINE(517)
		Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(517)
		this->_indicesToRemove = _g1;
		HX_STACK_LINE(519)
		Float temp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(520)
		int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
		HX_STACK_LINE(521)
		::flash::geom::Point edge;		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(522)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(522)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(524)
		i = (int)0;
		HX_STACK_LINE(525)
		j = (nPoints - (int)1);
		HX_STACK_LINE(526)
		while((true)){
			HX_STACK_LINE(526)
			if ((!(((i < nPoints))))){
				HX_STACK_LINE(526)
				break;
			}
			HX_STACK_LINE(528)
			::flash::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(528)
			{
				HX_STACK_LINE(528)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(528)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(528)
				_g2 = ::flash::geom::Point_obj::__new(x,y);
			}
			HX_STACK_LINE(528)
			edge = _g2;
			HX_STACK_LINE(529)
			edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get(j).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(530)
			edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get(j).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(533)
			temp = edge->y;
			HX_STACK_LINE(534)
			edge->y = -(edge->x);
			HX_STACK_LINE(535)
			edge->x = temp;
			HX_STACK_LINE(536)
			::com::haxepunk::math::_Vector::Vector_Impl__obj::normalize(edge,(int)1);
			HX_STACK_LINE(538)
			this->_axes->push(edge);
			HX_STACK_LINE(540)
			j = i;
			HX_STACK_LINE(541)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","removeDuplicateAxes",0xfab0e038,"com.haxepunk.masks.Polygon.removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",546,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(547)
		int nAxes = this->_axes->length;		HX_STACK_VAR(nAxes,"nAxes");
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			Dynamic array = this->_indicesToRemove;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(548)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(550)
			while((true)){
				HX_STACK_LINE(550)
				if ((!(((_g < nAxes))))){
					HX_STACK_LINE(550)
					break;
				}
				HX_STACK_LINE(550)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(552)
					while((true)){
						HX_STACK_LINE(552)
						if ((!(((_g1 < nAxes))))){
							HX_STACK_LINE(552)
							break;
						}
						HX_STACK_LINE(552)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						struct _Function_5_1{
							inline static bool Block( int &i,int &j,int &nAxes){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",554,0xc83634e5)
								{
									HX_STACK_LINE(554)
									Float _g2 = ::Math_obj::max(i,j);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(554)
									return (_g2 >= nAxes);
								}
								return null();
							}
						};
						HX_STACK_LINE(554)
						if (((  ((!(((i == j))))) ? bool(_Function_5_1::Block(i,j,nAxes)) : bool(true) ))){
							HX_STACK_LINE(554)
							continue;
						}
						HX_STACK_LINE(559)
						if (((bool((bool((this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->x == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->x)) && bool((this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->y == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->y)))) || bool((bool((-(this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->x) == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->x)) && bool((-(this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->y) == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->y))))))){
							HX_STACK_LINE(562)
							this->_indicesToRemove->push(j);
						}
					}
				}
			}
		}
		HX_STACK_LINE(568)
		Dynamic indexToRemove;		HX_STACK_VAR(indexToRemove,"indexToRemove");
		HX_STACK_LINE(569)
		while((true)){
			HX_STACK_LINE(569)
			Dynamic _g1 = this->_indicesToRemove->pop();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(569)
			Dynamic _g2 = indexToRemove = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(569)
			if ((!(((_g2 != null()))))){
				HX_STACK_LINE(569)
				break;
			}
			HX_STACK_LINE(569)
			this->_axes->splice(indexToRemove,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","updateAxes",0x8d290e82,"com.haxepunk.masks.Polygon.updateAxes","com/haxepunk/masks/Polygon.hx",573,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(574)
		this->generateAxes();
		HX_STACK_LINE(575)
		this->removeDuplicateAxes();
		HX_STACK_LINE(576)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createPolygon",0xe8d578aa,"com.haxepunk.masks.Polygon.createPolygon","com/haxepunk/masks/Polygon.hx",440,0xc83634e5)
	HX_STACK_ARG(sides,"sides")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(angle,"angle")
{
		HX_STACK_LINE(441)
		if (((sides < (int)3))){
			HX_STACK_LINE(441)
			HX_STACK_DO_THROW(HX_CSTRING("The polygon needs at least 3 sides."));
		}
		HX_STACK_LINE(444)
		Float rotationAngle = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(447)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(449)
			while((true)){
				HX_STACK_LINE(449)
				if ((!(((_g < sides))))){
					HX_STACK_LINE(449)
					break;
				}
				HX_STACK_LINE(449)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(451)
				Float tempAngle = (::Math_obj::PI + (i * rotationAngle));		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(452)
				::flash::geom::Point p;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(452)
					Float x = (int)0;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(452)
					Float y = (int)0;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(452)
					p = ::flash::geom::Point_obj::__new(x,y);
				}
				HX_STACK_LINE(453)
				{
					HX_STACK_LINE(453)
					Float _g1 = ::Math_obj::cos(tempAngle);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(453)
					Float _g11 = (_g1 * radius);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(453)
					Float value = (_g11 + radius);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(453)
					p->x = value;
				}
				HX_STACK_LINE(454)
				{
					HX_STACK_LINE(454)
					Float _g2 = ::Math_obj::sin(tempAngle);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(454)
					Float _g3 = (_g2 * radius);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(454)
					Float value = (_g3 + radius);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(454)
					p->y = value;
				}
				HX_STACK_LINE(455)
				points->push(p);
			}
		}
		HX_STACK_LINE(459)
		::com::haxepunk::masks::Polygon poly = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(460)
		poly->origin->x = radius;
		HX_STACK_LINE(461)
		poly->origin->y = radius;
		HX_STACK_LINE(462)
		poly->set_angle(angle);
		HX_STACK_LINE(463)
		return poly;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createFromArray",0x230ab9ff,"com.haxepunk.masks.Polygon.createFromArray","com/haxepunk/masks/Polygon.hx",473,0xc83634e5)
	HX_STACK_ARG(points,"points")
	HX_STACK_LINE(474)
	Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(476)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(477)
	while((true)){
		HX_STACK_LINE(477)
		if ((!(((i < points->length))))){
			HX_STACK_LINE(477)
			break;
		}
		HX_STACK_LINE(479)
		::flash::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(479)
			Float x = points->__get(_g);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(479)
			int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(479)
			Float y = points->__get(_g1);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(479)
			_g2 = ::flash::geom::Point_obj::__new(x,y);
		}
		HX_STACK_LINE(479)
		p->push(_g2);
	}
	HX_STACK_LINE(481)
	return ::com::haxepunk::masks::Polygon_obj::__new(p,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::flash::geom::Point Polygon_obj::vertical;

::flash::geom::Point Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_MARK_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	HX_MARK_MEMBER_NAME(_indicesToRemove,"_indicesToRemove");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_VISIT_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	HX_VISIT_MEMBER_NAME(_indicesToRemove,"_indicesToRemove");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"points") ) { return get_points(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { return firstProj; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { return secondProj; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"get_points") ) { return get_points_dyn(); }
		if (HX_FIELD_EQ(inName,"set_points") ) { return set_points_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { return _fakeEntity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { return createFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { return _fakeTileHitbox; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indicesToRemove") ) { return _indicesToRemove; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { return set_points(inValue); }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { _fakeEntity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { _fakeTileHitbox=inValue.Cast< ::com::haxepunk::masks::Hitbox >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indicesToRemove") ) { _indicesToRemove=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("_axes"));
	outFields->push(HX_CSTRING("_fakeEntity"));
	outFields->push(HX_CSTRING("_fakeTileHitbox"));
	outFields->push(HX_CSTRING("_indicesToRemove"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createPolygon"),
	HX_CSTRING("createFromArray"),
	HX_CSTRING("firstProj"),
	HX_CSTRING("secondProj"),
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Polygon_obj,origin),HX_CSTRING("origin")},
	{hx::fsFloat,(int)offsetof(Polygon_obj,_angle),HX_CSTRING("_angle")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_points),HX_CSTRING("_points")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_axes),HX_CSTRING("_axes")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Polygon_obj,_fakeEntity),HX_CSTRING("_fakeEntity")},
	{hx::fsObject /*::com::haxepunk::masks::Hitbox*/ ,(int)offsetof(Polygon_obj,_fakeTileHitbox),HX_CSTRING("_fakeTileHitbox")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Polygon_obj,_indicesToRemove),HX_CSTRING("_indicesToRemove")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collidePolygon"),
	HX_CSTRING("project"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_points"),
	HX_CSTRING("set_points"),
	HX_CSTRING("update"),
	HX_CSTRING("rotate"),
	HX_CSTRING("generateAxes"),
	HX_CSTRING("removeDuplicateAxes"),
	HX_CSTRING("updateAxes"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_points"),
	HX_CSTRING("_axes"),
	HX_CSTRING("_fakeEntity"),
	HX_CSTRING("_fakeTileHitbox"),
	HX_CSTRING("_indicesToRemove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#endif

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
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

void Polygon_obj::__boot()
{
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
	vertical= ::flash::geom::Point_obj::__new((int)0,(int)1);
	horizontal= ::flash::geom::Point_obj::__new((int)1,(int)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
