#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
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
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Draw_obj::__construct()
{
	return null();
}

//Draw_obj::~Draw_obj() { }

Dynamic Draw_obj::__CreateEmpty() { return  new Draw_obj; }
hx::ObjectPtr< Draw_obj > Draw_obj::__new()
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct();
	return result;}

Dynamic Draw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct();
	return result;}

::flash::display::BlendMode Draw_obj::blend;

Void Draw_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","init",0x3d2b4324,"com.haxepunk.utils.Draw.init","com/haxepunk/utils/Draw.hx",31,0x1df70463)
		HX_STACK_LINE(32)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(34)
			::flash::display::Sprite sprite = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(35)
			::com::haxepunk::HXP_obj::stage->addChild(sprite);
			HX_STACK_LINE(36)
			::flash::display::Graphics _g = sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			::com::haxepunk::utils::Draw_obj::_graphics = _g;
		}
		else{
			HX_STACK_LINE(40)
			::flash::display::Graphics _g1 = ::com::haxepunk::HXP_obj::sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			::com::haxepunk::utils::Draw_obj::_graphics = _g1;
		}
		HX_STACK_LINE(42)
		::com::haxepunk::utils::Draw_obj::_rect = ::com::haxepunk::HXP_obj::rect;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,init,(void))

Void Draw_obj::setTarget( ::flash::display::BitmapData target,::flash::geom::Point camera,::flash::display::BlendMode blend){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","setTarget",0xd32a97ff,"com.haxepunk.utils.Draw.setTarget","com/haxepunk/utils/Draw.hx",52,0x1df70463)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_ARG(blend,"blend")
		HX_STACK_LINE(53)
		::com::haxepunk::utils::Draw_obj::_target = target;
		HX_STACK_LINE(54)
		if (((camera != null()))){
			HX_STACK_LINE(54)
			::com::haxepunk::utils::Draw_obj::_camera = camera;
		}
		else{
			HX_STACK_LINE(54)
			::com::haxepunk::utils::Draw_obj::_camera = ::com::haxepunk::HXP_obj::zero;
		}
		HX_STACK_LINE(55)
		::com::haxepunk::utils::Draw_obj::blend = blend;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Draw_obj,setTarget,(void))

Void Draw_obj::resetTarget( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","resetTarget",0x091358ec,"com.haxepunk.utils.Draw.resetTarget","com/haxepunk/utils/Draw.hx",62,0x1df70463)
		HX_STACK_LINE(63)
		::com::haxepunk::utils::Draw_obj::_target = ::com::haxepunk::HXP_obj::buffer;
		HX_STACK_LINE(64)
		::com::haxepunk::utils::Draw_obj::_camera = ::com::haxepunk::HXP_obj::camera;
		HX_STACK_LINE(65)
		::com::haxepunk::utils::Draw_obj::blend = null();
		HX_STACK_LINE(66)
		::com::haxepunk::utils::Draw_obj::_graphics->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,resetTarget,(void))

Void Draw_obj::drawToScreen( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","drawToScreen",0x3223ab7f,"com.haxepunk.utils.Draw.drawToScreen","com/haxepunk/utils/Draw.hx",71,0x1df70463)
		HX_STACK_LINE(71)
		if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
			HX_STACK_LINE(73)
			::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(77)
			::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,drawToScreen,(void))

Void Draw_obj::line( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","line",0x3f232008,"com.haxepunk.utils.Draw.line","com/haxepunk/utils/Draw.hx",91,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(91)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(93)
			color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
			HX_STACK_LINE(96)
			::flash::display::BitmapData screen = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(screen,"screen");
			HX_STACK_LINE(97)
			Float X = ::Math_obj::abs((x2 - x1));		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(98)
			Float Y = ::Math_obj::abs((y2 - y1));		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(96)
			int xx;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(96)
			int yy;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(103)
			int _g = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			hx::SubEq(x1,_g);
			HX_STACK_LINE(104)
			int _g1 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			hx::SubEq(y1,_g1);
			HX_STACK_LINE(105)
			int _g2 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->x);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(105)
			hx::SubEq(x2,_g2);
			HX_STACK_LINE(106)
			int _g3 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->y);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(106)
			hx::SubEq(y2,_g3);
			HX_STACK_LINE(109)
			if (((X == (int)0))){
				HX_STACK_LINE(111)
				if (((Y == (int)0))){
					HX_STACK_LINE(113)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(114)
					return null();
				}
				HX_STACK_LINE(117)
				if (((y2 > y1))){
					HX_STACK_LINE(117)
					yy = (int)1;
				}
				else{
					HX_STACK_LINE(117)
					yy = (int)-1;
				}
				HX_STACK_LINE(118)
				while((true)){
					HX_STACK_LINE(118)
					if ((!(((y1 != y2))))){
						HX_STACK_LINE(118)
						break;
					}
					HX_STACK_LINE(120)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(121)
					hx::AddEq(y1,yy);
				}
				HX_STACK_LINE(123)
				screen->setPixel32(x2,y2,color);
				HX_STACK_LINE(124)
				return null();
			}
			HX_STACK_LINE(127)
			if (((Y == (int)0))){
				HX_STACK_LINE(130)
				if (((x2 > x1))){
					HX_STACK_LINE(130)
					xx = (int)1;
				}
				else{
					HX_STACK_LINE(130)
					xx = (int)-1;
				}
				HX_STACK_LINE(131)
				while((true)){
					HX_STACK_LINE(131)
					if ((!(((x1 != x2))))){
						HX_STACK_LINE(131)
						break;
					}
					HX_STACK_LINE(133)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(134)
					hx::AddEq(x1,xx);
				}
				HX_STACK_LINE(136)
				screen->setPixel32(x2,y2,color);
				HX_STACK_LINE(137)
				return null();
			}
			HX_STACK_LINE(140)
			if (((x2 > x1))){
				HX_STACK_LINE(140)
				xx = (int)1;
			}
			else{
				HX_STACK_LINE(140)
				xx = (int)-1;
			}
			HX_STACK_LINE(141)
			if (((y2 > y1))){
				HX_STACK_LINE(141)
				yy = (int)1;
			}
			else{
				HX_STACK_LINE(141)
				yy = (int)-1;
			}
			HX_STACK_LINE(142)
			Float c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(142)
			Float slope;		HX_STACK_VAR(slope,"slope");
			HX_STACK_LINE(145)
			if (((X > Y))){
				HX_STACK_LINE(147)
				slope = (Float(Y) / Float(X));
				HX_STACK_LINE(148)
				c = .5;
				HX_STACK_LINE(149)
				while((true)){
					HX_STACK_LINE(149)
					if ((!(((x1 != x2))))){
						HX_STACK_LINE(149)
						break;
					}
					HX_STACK_LINE(151)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(152)
					hx::AddEq(x1,xx);
					HX_STACK_LINE(153)
					hx::AddEq(c,slope);
					HX_STACK_LINE(154)
					if (((c >= (int)1))){
						HX_STACK_LINE(156)
						hx::AddEq(y1,yy);
						HX_STACK_LINE(157)
						hx::SubEq(c,(int)1);
					}
				}
				HX_STACK_LINE(160)
				screen->setPixel32(x2,y2,color);
			}
			else{
				HX_STACK_LINE(164)
				slope = (Float(X) / Float(Y));
				HX_STACK_LINE(165)
				c = .5;
				HX_STACK_LINE(166)
				while((true)){
					HX_STACK_LINE(166)
					if ((!(((y1 != y2))))){
						HX_STACK_LINE(166)
						break;
					}
					HX_STACK_LINE(168)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(169)
					hx::AddEq(y1,yy);
					HX_STACK_LINE(170)
					hx::AddEq(c,slope);
					HX_STACK_LINE(171)
					if (((c >= (int)1))){
						HX_STACK_LINE(173)
						hx::AddEq(x1,xx);
						HX_STACK_LINE(174)
						hx::SubEq(c,(int)1);
					}
				}
				HX_STACK_LINE(177)
				screen->setPixel32(x2,y2,color);
			}
		}
		else{
			HX_STACK_LINE(182)
			::com::haxepunk::utils::Draw_obj::linePlus(x1,y1,x2,y2,color,null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Draw_obj,line,(void))

Void Draw_obj::linePlus( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_thick){
int color = __o_color.Default(-16777216);
Float alpha = __o_alpha.Default(1);
Float thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","linePlus",0xaf9b2f82,"com.haxepunk.utils.Draw.linePlus","com/haxepunk/utils/Draw.hx",198,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(198)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(200)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(201)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,false,::flash::display::LineScaleMode_obj::NONE,null(),null(),null());
			HX_STACK_LINE(202)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(203)
			::com::haxepunk::utils::Draw_obj::_graphics->lineTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(204)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(204)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(204)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(208)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,false,::flash::display::LineScaleMode_obj::NONE,null(),null(),null());
			HX_STACK_LINE(209)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(210)
			::com::haxepunk::utils::Draw_obj::_graphics->lineTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(211)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,linePlus,(void))

Void Draw_obj::rect( int x,int y,int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","rect",0x43175538,"com.haxepunk.utils.Draw.rect","com/haxepunk/utils/Draw.hx",226,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(226)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(228)
			if (((bool((alpha >= (int)1)) && bool((::com::haxepunk::utils::Draw_obj::blend == null()))))){
				HX_STACK_LINE(230)
				color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
				HX_STACK_LINE(231)
				::com::haxepunk::utils::Draw_obj::_rect->x = (x - ::com::haxepunk::utils::Draw_obj::_camera->x);
				HX_STACK_LINE(232)
				::com::haxepunk::utils::Draw_obj::_rect->y = (y - ::com::haxepunk::utils::Draw_obj::_camera->y);
				HX_STACK_LINE(233)
				::com::haxepunk::utils::Draw_obj::_rect->width = width;
				HX_STACK_LINE(234)
				::com::haxepunk::utils::Draw_obj::_rect->height = height;
				HX_STACK_LINE(235)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(236)
				return null();
			}
			HX_STACK_LINE(238)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(239)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(240)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),width,height);
			HX_STACK_LINE(241)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(241)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(241)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(245)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(246)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),width,height);
			HX_STACK_LINE(247)
			::com::haxepunk::utils::Draw_obj::_graphics->endFill();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Draw_obj,rect,(void))

Void Draw_obj::rectPlus( Float x,Float y,Float width,Float height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< Float >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
Float thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","rectPlus",0x9d89bcb2,"com.haxepunk.utils.Draw.rectPlus","com/haxepunk/utils/Draw.hx",263,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(264)
		color = (int((int)16777215) & int(color));
		HX_STACK_LINE(266)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(266)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
		}
		HX_STACK_LINE(268)
		if ((fill)){
			HX_STACK_LINE(270)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
		}
		else{
			HX_STACK_LINE(274)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(277)
		::com::haxepunk::utils::Draw_obj::_graphics->drawRect((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),width,height);
		HX_STACK_LINE(278)
		::com::haxepunk::utils::Draw_obj::_graphics->endFill();
		HX_STACK_LINE(280)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(280)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(280)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(280)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(280)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Draw_obj,rectPlus,(void))

Void Draw_obj::circle( int x,int y,int radius,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","circle",0x0f9ea724,"com.haxepunk.utils.Draw.circle","com/haxepunk/utils/Draw.hx",292,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(292)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(294)
			color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
			HX_STACK_LINE(295)
			int _g = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(295)
			hx::SubEq(x,_g);
			HX_STACK_LINE(296)
			int _g1 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(296)
			hx::SubEq(y,_g1);
			HX_STACK_LINE(297)
			int f = ((int)1 - radius);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(298)
			int fx = (int)1;		HX_STACK_VAR(fx,"fx");
			HX_STACK_LINE(299)
			int fy = ((int)-2 * radius);		HX_STACK_VAR(fy,"fy");
			HX_STACK_LINE(300)
			int xx = (int)0;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(301)
			int yy = radius;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(302)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32(x,(y + radius),color);
			HX_STACK_LINE(303)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32(x,(y - radius),color);
			HX_STACK_LINE(304)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + radius),y,color);
			HX_STACK_LINE(305)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - radius),y,color);
			HX_STACK_LINE(306)
			while((true)){
				HX_STACK_LINE(306)
				if ((!(((xx < yy))))){
					HX_STACK_LINE(306)
					break;
				}
				HX_STACK_LINE(308)
				if (((f >= (int)0))){
					HX_STACK_LINE(310)
					(yy)--;
					HX_STACK_LINE(311)
					hx::AddEq(fy,(int)2);
					HX_STACK_LINE(312)
					hx::AddEq(f,fy);
				}
				HX_STACK_LINE(314)
				(xx)++;
				HX_STACK_LINE(315)
				hx::AddEq(fx,(int)2);
				HX_STACK_LINE(316)
				hx::AddEq(f,fx);
				HX_STACK_LINE(317)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + xx),(y + yy),color);
				HX_STACK_LINE(318)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - xx),(y + yy),color);
				HX_STACK_LINE(319)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + xx),(y - yy),color);
				HX_STACK_LINE(320)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - xx),(y - yy),color);
				HX_STACK_LINE(321)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + yy),(y + xx),color);
				HX_STACK_LINE(322)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - yy),(y + xx),color);
				HX_STACK_LINE(323)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + yy),(y - xx),color);
				HX_STACK_LINE(324)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - yy),(y - xx),color);
			}
		}
		else{
			HX_STACK_LINE(329)
			::com::haxepunk::utils::Draw_obj::circlePlus(x,y,radius,color,1.0,false,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,circle,(void))

Void Draw_obj::circlePlus( int x,int y,Float radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< int >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
int thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","circlePlus",0x111e749e,"com.haxepunk.utils.Draw.circlePlus","com/haxepunk/utils/Draw.hx",345,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(345)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(347)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(348)
			if ((fill)){
				HX_STACK_LINE(350)
				::com::haxepunk::utils::Draw_obj::_graphics->beginFill((int(color) & int((int)16777215)),alpha);
				HX_STACK_LINE(351)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
				HX_STACK_LINE(352)
				::com::haxepunk::utils::Draw_obj::_graphics->endFill();
			}
			else{
				HX_STACK_LINE(356)
				::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,(int(color) & int((int)16777215)),alpha,null(),null(),null(),null(),null());
				HX_STACK_LINE(357)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
			}
			HX_STACK_LINE(359)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(359)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(359)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(363)
			if ((fill)){
				HX_STACK_LINE(365)
				::com::haxepunk::utils::Draw_obj::_graphics->beginFill((int(color) & int((int)16777215)),alpha);
				HX_STACK_LINE(366)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
				HX_STACK_LINE(367)
				::com::haxepunk::utils::Draw_obj::_graphics->endFill();
			}
			else{
				HX_STACK_LINE(371)
				::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,(int(color) & int((int)16777215)),alpha,null(),null(),null(),null(),null());
				HX_STACK_LINE(372)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
				HX_STACK_LINE(373)
				::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,circlePlus,(void))

Void Draw_obj::hitbox( ::com::haxepunk::Entity e,hx::Null< bool >  __o_outline,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
bool outline = __o_outline.Default(true);
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","hitbox",0x10b922ac,"com.haxepunk.utils.Draw.hitbox","com/haxepunk/utils/Draw.hx",387,0x1df70463)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(outline,"outline")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(387)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(389)
			if ((outline)){
				HX_STACK_LINE(391)
				color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
				HX_STACK_LINE(392)
				int x = ::Std_obj::_int(((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(393)
				int y = ::Std_obj::_int(((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(394)
				::com::haxepunk::utils::Draw_obj::_rect->x = x;
				HX_STACK_LINE(395)
				::com::haxepunk::utils::Draw_obj::_rect->y = y;
				HX_STACK_LINE(396)
				::com::haxepunk::utils::Draw_obj::_rect->width = e->width;
				HX_STACK_LINE(397)
				::com::haxepunk::utils::Draw_obj::_rect->height = (int)1;
				HX_STACK_LINE(398)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(399)
				hx::AddEq(::com::haxepunk::utils::Draw_obj::_rect->y,(e->height - (int)1));
				HX_STACK_LINE(400)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(401)
				::com::haxepunk::utils::Draw_obj::_rect->y = y;
				HX_STACK_LINE(402)
				::com::haxepunk::utils::Draw_obj::_rect->width = (int)1;
				HX_STACK_LINE(403)
				::com::haxepunk::utils::Draw_obj::_rect->height = e->height;
				HX_STACK_LINE(404)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(405)
				hx::AddEq(::com::haxepunk::utils::Draw_obj::_rect->x,(e->width - (int)1));
				HX_STACK_LINE(406)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(407)
				return null();
			}
			HX_STACK_LINE(409)
			if (((bool((alpha >= (int)1)) && bool((::com::haxepunk::utils::Draw_obj::blend == null()))))){
				HX_STACK_LINE(411)
				color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
				HX_STACK_LINE(412)
				::com::haxepunk::utils::Draw_obj::_rect->x = ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x);
				HX_STACK_LINE(413)
				::com::haxepunk::utils::Draw_obj::_rect->y = ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y);
				HX_STACK_LINE(414)
				::com::haxepunk::utils::Draw_obj::_rect->width = e->width;
				HX_STACK_LINE(415)
				::com::haxepunk::utils::Draw_obj::_rect->height = e->height;
				HX_STACK_LINE(416)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(417)
				return null();
			}
			HX_STACK_LINE(420)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(421)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(422)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect(((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x),((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y),e->width,e->height);
			HX_STACK_LINE(423)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(423)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(423)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(427)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(428)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect(((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x),((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y),e->width,e->height);
			HX_STACK_LINE(429)
			::com::haxepunk::utils::Draw_obj::_graphics->endFill();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,hitbox,(void))

Void Draw_obj::curve( int x1,int y1,int x2,int y2,int x3,int y3,hx::Null< Float >  __o_thick,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
Float thick = __o_thick.Default(1);
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","curve",0xd8ef561b,"com.haxepunk.utils.Draw.curve","com/haxepunk/utils/Draw.hx",447,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_ARG(thick,"thick")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(447)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(449)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(450)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,null(),null(),null(),null(),null());
			HX_STACK_LINE(451)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(452)
			::com::haxepunk::utils::Draw_obj::_graphics->curveTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y),(x3 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y3 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(453)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(453)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(453)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(457)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,null(),null(),null(),null(),null());
			HX_STACK_LINE(458)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(459)
			::com::haxepunk::utils::Draw_obj::_graphics->curveTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y),(x3 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y3 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(460)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Draw_obj,curve,(void))

Void Draw_obj::graphic( ::com::haxepunk::Graphic g,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","graphic",0x19849714,"com.haxepunk.utils.Draw.graphic","com/haxepunk/utils/Draw.hx",472,0x1df70463)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(472)
		if ((g->get_visible())){
			HX_STACK_LINE(474)
			if ((g->relative)){
				HX_STACK_LINE(476)
				::com::haxepunk::HXP_obj::point->x = x;
				HX_STACK_LINE(477)
				::com::haxepunk::HXP_obj::point->y = y;
			}
			else{
				HX_STACK_LINE(479)
				Float _g = ::com::haxepunk::HXP_obj::point->y = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(479)
				::com::haxepunk::HXP_obj::point->x = _g;
			}
			HX_STACK_LINE(480)
			::com::haxepunk::HXP_obj::point2->x = ::com::haxepunk::HXP_obj::camera->x;
			HX_STACK_LINE(481)
			::com::haxepunk::HXP_obj::point2->y = ::com::haxepunk::HXP_obj::camera->y;
			HX_STACK_LINE(482)
			g->render(::com::haxepunk::utils::Draw_obj::_target,::com::haxepunk::HXP_obj::point,::com::haxepunk::HXP_obj::point2);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Draw_obj,graphic,(void))

Void Draw_obj::entity( ::com::haxepunk::Entity e,Dynamic __o_x,Dynamic __o_y,Dynamic __o_addEntityPosition){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
Dynamic addEntityPosition = __o_addEntityPosition.Default(false);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","entity",0xbead4837,"com.haxepunk.utils.Draw.entity","com/haxepunk/utils/Draw.hx",495,0x1df70463)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(addEntityPosition,"addEntityPosition")
{
		HX_STACK_LINE(495)
		if (((bool(e->visible) && bool((e->_graphic != null()))))){
			HX_STACK_LINE(497)
			if ((addEntityPosition)){
				HX_STACK_LINE(497)
				int _g = ::Std_obj::_int((x + ((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ))));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(497)
				int _g1 = ::Std_obj::_int((y + ((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ))));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(497)
				::com::haxepunk::utils::Draw_obj::graphic(e->_graphic,_g,_g1);
			}
			else{
				HX_STACK_LINE(498)
				::com::haxepunk::utils::Draw_obj::graphic(e->_graphic,x,y);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,entity,(void))

Void Draw_obj::text( ::String text,Dynamic __o_x,Dynamic __o_y,Dynamic options){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","text",0x4469d4c1,"com.haxepunk.utils.Draw.text","com/haxepunk/utils/Draw.hx",510,0x1df70463)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(options,"options")
{
		HX_STACK_LINE(511)
		::com::haxepunk::graphics::Text textGfx = ::com::haxepunk::graphics::Text_obj::__new(text,x,y,(int)0,(int)0,options);		HX_STACK_VAR(textGfx,"textGfx");
		HX_STACK_LINE(512)
		textGfx->render(::com::haxepunk::utils::Draw_obj::_target,::com::haxepunk::HXP_obj::zero,::com::haxepunk::utils::Draw_obj::_camera);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,text,(void))

::flash::display::BitmapData Draw_obj::_target;

::flash::geom::Point Draw_obj::_camera;

::flash::display::Graphics Draw_obj::_graphics;

::flash::geom::Rectangle Draw_obj::_rect;

::flash::geom::Matrix Draw_obj::_matrix;


Draw_obj::Draw_obj()
{
}

Dynamic Draw_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"curve") ) { return curve_dyn(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle_dyn(); }
		if (HX_FIELD_EQ(inName,"hitbox") ) { return hitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"linePlus") ) { return linePlus_dyn(); }
		if (HX_FIELD_EQ(inName,"rectPlus") ) { return rectPlus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTarget") ) { return setTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"circlePlus") ) { return circlePlus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetTarget") ) { return resetTarget_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawToScreen") ) { return drawToScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Draw_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Draw_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("blend"),
	HX_CSTRING("init"),
	HX_CSTRING("setTarget"),
	HX_CSTRING("resetTarget"),
	HX_CSTRING("drawToScreen"),
	HX_CSTRING("line"),
	HX_CSTRING("linePlus"),
	HX_CSTRING("rect"),
	HX_CSTRING("rectPlus"),
	HX_CSTRING("circle"),
	HX_CSTRING("circlePlus"),
	HX_CSTRING("hitbox"),
	HX_CSTRING("curve"),
	HX_CSTRING("graphic"),
	HX_CSTRING("entity"),
	HX_CSTRING("text"),
	HX_CSTRING("_target"),
	HX_CSTRING("_camera"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_matrix"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_MARK_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_MARK_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_MARK_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_MARK_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_VISIT_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_VISIT_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_VISIT_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_VISIT_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

#endif

Class Draw_obj::__mClass;

void Draw_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Draw"), hx::TCanCast< Draw_obj> ,sStaticFields,sMemberFields,
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

void Draw_obj::__boot()
{
	_matrix= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
