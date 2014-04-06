#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
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
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
#ifndef INCLUDED_entities_Ball
#include <entities/Ball.h>
#endif
#ifndef INCLUDED_entities_Brick
#include <entities/Brick.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_utils_Vector2
#include <utils/Vector2.h>
#endif
namespace entities{

Void Ball_obj::__construct(int x,int y)
{
HX_STACK_FRAME("entities.Ball","new",0x4c81a25e,"entities.Ball.new","entities/Ball.hx",12,0x2a9dc4f1)

HX_STACK_ARG(x,"x")

HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(47)
	this->slowmotionLeft = (int)100;
	HX_STACK_LINE(46)
	this->slowmotion = false;
	HX_STACK_LINE(44)
	this->pauseCounter = (int)60;
	HX_STACK_LINE(43)
	this->pause = true;
	HX_STACK_LINE(19)
	this->speed = (int)7;
	HX_STACK_LINE(18)
	this->velocity = ::utils::Vector2_obj::__new();
	HX_STACK_LINE(23)
	super::__construct(x,y,null(),null());
	HX_STACK_LINE(25)
	this->set_type(HX_CSTRING("ball"));
	HX_STACK_LINE(27)
	::com::haxepunk::Sfx _g = ::com::haxepunk::Sfx_obj::__new(HX_CSTRING("audio/tink.wav"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->collisionSfx = _g;
	HX_STACK_LINE(28)
	::com::haxepunk::Sfx _g1 = ::com::haxepunk::Sfx_obj::__new(HX_CSTRING("audio/death.wav"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(28)
	this->death = _g1;
	HX_STACK_LINE(30)
	::com::haxepunk::ds::Either _g7;		HX_STACK_VAR(_g7,"_g7");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Ball.hx",30,0x2a9dc4f1)
			{
				HX_STACK_LINE(30)
				::com::haxepunk::graphics::atlas::AtlasData _g4;		HX_STACK_VAR(_g4,"_g4");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Ball.hx",30,0x2a9dc4f1)
						{
							HX_STACK_LINE(30)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(30)
							{
								HX_STACK_LINE(30)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(30)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/ball.png")))){
									HX_STACK_LINE(30)
									::com::haxepunk::graphics::atlas::AtlasData _g2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/ball.png"));		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(30)
									data1 = _g2;
								}
								else{
									HX_STACK_LINE(30)
									::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ball.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(30)
									if (((bitmap != null()))){
										HX_STACK_LINE(30)
										::com::haxepunk::graphics::atlas::AtlasData _g3 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/ball.png"),null());		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(30)
										data1 = _g3;
									}
								}
								HX_STACK_LINE(30)
								data = data1;
							}
							HX_STACK_LINE(30)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(30)
				_g4 = _Function_2_1::Block();
				HX_STACK_LINE(30)
				::com::haxepunk::graphics::atlas::AtlasRegion _g5 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(30)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g5);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(30)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Ball.hx",30,0x2a9dc4f1)
			{
				HX_STACK_LINE(30)
				::flash::display::BitmapData _g6 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ball.png"));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(30)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g6);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(30)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(30)
	_g7 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(30)
	::com::haxepunk::graphics::Image _g8 = ::com::haxepunk::graphics::Image_obj::__new(_g7,null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(30)
	this->g = _g8;
	HX_STACK_LINE(31)
	this->g->set_scale((int)4);
	HX_STACK_LINE(33)
	this->set_graphic(this->g);
	HX_STACK_LINE(36)
	this->velocity->x = (Float(this->speed) / Float((int)2));
	HX_STACK_LINE(37)
	this->velocity->y = (Float(this->speed) / Float((int)2));
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		int width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(39)
		width = hx::TCast< Int >::cast(this->g->get_scaledWidth());
		HX_STACK_LINE(39)
		int height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(39)
		height = hx::TCast< Int >::cast(this->g->get_scaledHeight());
		HX_STACK_LINE(39)
		this->width = width;
		HX_STACK_LINE(39)
		this->height = height;
		HX_STACK_LINE(39)
		this->originX = (int)0;
		HX_STACK_LINE(39)
		this->originY = (int)0;
	}
}
;
	return null();
}

//Ball_obj::~Ball_obj() { }

Dynamic Ball_obj::__CreateEmpty() { return  new Ball_obj; }
hx::ObjectPtr< Ball_obj > Ball_obj::__new(int x,int y)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(x,y);
	return result;}

Dynamic Ball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Ball_obj::update( ){
{
		HX_STACK_FRAME("entities.Ball","update",0x227486cb,"entities.Ball.update","entities/Ball.hx",50,0x2a9dc4f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		if ((this->pause)){
			HX_STACK_LINE(53)
			(this->pauseCounter)--;
		}
		HX_STACK_LINE(55)
		if (((bool((this->pauseCounter == (int)0)) && bool(this->pause)))){
			HX_STACK_LINE(56)
			this->pause = false;
		}
		HX_STACK_LINE(60)
		if ((!(this->pause))){
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				::entities::Ball _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(61)
				_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + this->velocity->x);
			}
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				::entities::Ball _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + this->velocity->y);
			}
		}
		HX_STACK_LINE(66)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		if (((  ((::com::haxepunk::utils::Input_obj::pressed(_g))) ? bool((this->slowmotionLeft > (int)0)) : bool(false) ))){
			HX_STACK_LINE(67)
			this->slowmotion = true;
			HX_STACK_LINE(69)
			hx::DivEq(this->velocity->x,(int)3);
			HX_STACK_LINE(70)
			hx::DivEq(this->velocity->y,(int)3);
		}
		HX_STACK_LINE(73)
		::com::haxepunk::ds::Either _g1 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		if (((  (((  ((!(::com::haxepunk::utils::Input_obj::released(_g1)))) ? bool((this->slowmotionLeft <= (int)0)) : bool(true) ))) ? bool(this->slowmotion) : bool(false) ))){
			HX_STACK_LINE(74)
			this->slowmotion = false;
			HX_STACK_LINE(76)
			hx::MultEq(this->velocity->x,(int)3);
			HX_STACK_LINE(77)
			hx::MultEq(this->velocity->y,(int)3);
		}
		HX_STACK_LINE(80)
		if ((this->slowmotion)){
			HX_STACK_LINE(81)
			(this->slowmotionLeft)--;
			HX_STACK_LINE(82)
			::haxe::Log_obj::trace(this->slowmotionLeft,hx::SourceInfo(HX_CSTRING("Ball.hx"),82,HX_CSTRING("entities.Ball"),HX_CSTRING("update")));
		}
		HX_STACK_LINE(86)
		if (((bool(!(this->slowmotion)) && bool((this->slowmotionLeft < (int)100))))){
			HX_STACK_LINE(87)
			hx::AddEq(this->slowmotionLeft,0.1);
		}
		HX_STACK_LINE(93)
		if (((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) < (int)0))){
			HX_STACK_LINE(94)
			this->x = (int)0;
			HX_STACK_LINE(95)
			this->velocity->x = -(this->velocity->x);
		}
		else{
			HX_STACK_LINE(97)
			Float _g2 = this->g->get_scaledWidth();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(97)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(97)
			_g3 = (((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + _g2);
			HX_STACK_LINE(97)
			if (((_g3 > ::com::haxepunk::HXP_obj::width))){
				HX_STACK_LINE(98)
				{
					HX_STACK_LINE(98)
					Float _g4 = this->g->get_scaledWidth();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(98)
					Float v = (::com::haxepunk::HXP_obj::width - _g4);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(98)
					this->x = v;
				}
				HX_STACK_LINE(99)
				this->velocity->x = -(this->velocity->x);
			}
		}
		HX_STACK_LINE(102)
		if (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) < (int)0))){
			HX_STACK_LINE(103)
			this->y = (int)0;
			HX_STACK_LINE(104)
			this->velocity->y = -(this->velocity->y);
		}
		HX_STACK_LINE(108)
		Float _g5 = this->g->get_scaledHeight();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(108)
		Float _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(108)
		_g6 = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + _g5);
		HX_STACK_LINE(108)
		if (((_g6 > ::com::haxepunk::HXP_obj::height))){
			HX_STACK_LINE(109)
			this->death->play(0.2,null(),null());
			HX_STACK_LINE(110)
			this->_scene->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(115)
		::com::haxepunk::Entity e = this->collide(HX_CSTRING("player"),(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(117)
		if (((e != null()))){
			HX_STACK_LINE(118)
			::entities::Player p;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(118)
			p = hx::TCast< entities::Player >::cast(e);
			HX_STACK_LINE(121)
			Float _g7 = this->g->get_scaledHeight();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(121)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(121)
			_g8 = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + _g7);
			HX_STACK_LINE(121)
			if (((_g8 > ((  ((p->followCamera)) ? Float((p->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(p->y) ))))){
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					Float _g9 = this->g->get_scaledHeight();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(122)
					Float v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(122)
					v = (((  ((p->followCamera)) ? Float((p->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(p->y) )) - _g9);
					HX_STACK_LINE(122)
					this->y = v;
				}
				HX_STACK_LINE(125)
				this->velocity->x = (Float(((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - ((((  ((p->followCamera)) ? Float((p->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(p->x) )) + (Float(p->width) / Float((int)2))))))) / Float((int)6));
				HX_STACK_LINE(128)
				Float _g10 = ::Math_obj::abs(this->velocity->x);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(128)
				if (((_g10 > this->speed))){
					HX_STACK_LINE(129)
					this->velocity->x = (((  (((this->velocity->x < (int)0))) ? int((int)-1) : int((int)1) )) * ((this->speed - (int)1)));
				}
				HX_STACK_LINE(133)
				Float _g11 = ::Math_obj::pow(this->speed,(int)2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(133)
				Float _g12 = ::Math_obj::pow(this->velocity->x,(int)2);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(133)
				Float _g13 = (_g11 - _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(133)
				Float _g14 = -(::Math_obj::sqrt(_g13));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(133)
				this->velocity->y = _g14;
				HX_STACK_LINE(135)
				::haxe::Log_obj::trace(this->velocity->x,hx::SourceInfo(HX_CSTRING("Ball.hx"),135,HX_CSTRING("entities.Ball"),HX_CSTRING("update")));
				HX_STACK_LINE(136)
				::haxe::Log_obj::trace(this->velocity->y,hx::SourceInfo(HX_CSTRING("Ball.hx"),136,HX_CSTRING("entities.Ball"),HX_CSTRING("update")));
				HX_STACK_LINE(138)
				this->collisionSfx->play(null(),null(),null());
			}
		}
		HX_STACK_LINE(144)
		::com::haxepunk::Entity _g15 = this->collide(HX_CSTRING("brick"),(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(144)
		e = _g15;
		HX_STACK_LINE(146)
		if (((e != null()))){
			HX_STACK_LINE(147)
			::entities::Brick b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(147)
			b = hx::TCast< entities::Brick >::cast(e);
			HX_STACK_LINE(152)
			Float _g16 = this->g->get_scaledWidth();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(152)
			Float _g17 = b->g->get_scaledWidth();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(152)
			Float _g18 = (_g16 + _g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(152)
			Float w = (Float(_g18) / Float((int)2));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(153)
			Float _g19 = this->g->get_scaledHeight();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(153)
			Float _g20 = b->g->get_scaledHeight();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(153)
			Float _g21 = (_g19 + _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(153)
			Float h = (Float(_g21) / Float((int)2));		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(154)
			Float dx;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(154)
			dx = (((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) + (Float(this->width) / Float((int)2))) - (((((  ((b->followCamera)) ? Float((b->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(b->x) )) - b->originX) + (Float(b->width) / Float((int)2)))));
			HX_STACK_LINE(155)
			Float dy;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(155)
			dy = (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) + (Float(this->height) / Float((int)2))) - (((((  ((b->followCamera)) ? Float((b->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(b->y) )) - b->originY) + (Float(b->height) / Float((int)2)))));
			HX_STACK_LINE(157)
			Float wy = (w * dy);		HX_STACK_VAR(wy,"wy");
			HX_STACK_LINE(158)
			Float hx = (h * dx);		HX_STACK_VAR(hx,"hx");
			HX_STACK_LINE(160)
			if (((wy > hx))){
				HX_STACK_LINE(161)
				if (((wy > -(hx)))){
					HX_STACK_LINE(162)
					this->velocity->y = -(this->velocity->y);
				}
				else{
					HX_STACK_LINE(164)
					this->velocity->x = -(this->velocity->x);
				}
			}
			else{
				HX_STACK_LINE(167)
				if (((wy > -(hx)))){
					HX_STACK_LINE(168)
					this->velocity->x = -(this->velocity->x);
				}
				else{
					HX_STACK_LINE(170)
					this->velocity->y = -(this->velocity->y);
				}
			}
			HX_STACK_LINE(174)
			this->collisionSfx->play(null(),null(),null());
			HX_STACK_LINE(176)
			b->destroy();
		}
		HX_STACK_LINE(179)
		this->super::update();
	}
return null();
}



Ball_obj::Ball_obj()
{
}

void Ball_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ball);
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(collisionSfx,"collisionSfx");
	HX_MARK_MEMBER_NAME(death,"death");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(pauseCounter,"pauseCounter");
	HX_MARK_MEMBER_NAME(slowmotion,"slowmotion");
	HX_MARK_MEMBER_NAME(slowmotionLeft,"slowmotionLeft");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ball_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(collisionSfx,"collisionSfx");
	HX_VISIT_MEMBER_NAME(death,"death");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(pauseCounter,"pauseCounter");
	HX_VISIT_MEMBER_NAME(slowmotion,"slowmotion");
	HX_VISIT_MEMBER_NAME(slowmotionLeft,"slowmotionLeft");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"death") ) { return death; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"slowmotion") ) { return slowmotion; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collisionSfx") ) { return collisionSfx; }
		if (HX_FIELD_EQ(inName,"pauseCounter") ) { return pauseCounter; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"slowmotionLeft") ) { return slowmotionLeft; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"death") ) { death=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::utils::Vector2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"slowmotion") ) { slowmotion=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collisionSfx") ) { collisionSfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseCounter") ) { pauseCounter=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"slowmotionLeft") ) { slowmotionLeft=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("collisionSfx"));
	outFields->push(HX_CSTRING("death"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("pause"));
	outFields->push(HX_CSTRING("pauseCounter"));
	outFields->push(HX_CSTRING("slowmotion"));
	outFields->push(HX_CSTRING("slowmotionLeft"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Ball_obj,g),HX_CSTRING("g")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Ball_obj,collisionSfx),HX_CSTRING("collisionSfx")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Ball_obj,death),HX_CSTRING("death")},
	{hx::fsObject /*::utils::Vector2*/ ,(int)offsetof(Ball_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsFloat,(int)offsetof(Ball_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(Ball_obj,pause),HX_CSTRING("pause")},
	{hx::fsInt,(int)offsetof(Ball_obj,pauseCounter),HX_CSTRING("pauseCounter")},
	{hx::fsBool,(int)offsetof(Ball_obj,slowmotion),HX_CSTRING("slowmotion")},
	{hx::fsFloat,(int)offsetof(Ball_obj,slowmotionLeft),HX_CSTRING("slowmotionLeft")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("g"),
	HX_CSTRING("collisionSfx"),
	HX_CSTRING("death"),
	HX_CSTRING("velocity"),
	HX_CSTRING("speed"),
	HX_CSTRING("pause"),
	HX_CSTRING("pauseCounter"),
	HX_CSTRING("slowmotion"),
	HX_CSTRING("slowmotionLeft"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#endif

Class Ball_obj::__mClass;

void Ball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Ball"), hx::TCanCast< Ball_obj> ,sStaticFields,sMemberFields,
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

void Ball_obj::__boot()
{
}

} // end namespace entities
