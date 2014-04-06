#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#include <com/haxepunk/utils/JoyButtonState.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

::String Input_obj::keyString;

int Input_obj::lastKey;

bool Input_obj::mouseDown;

bool Input_obj::mouseUp;

bool Input_obj::mousePressed;

bool Input_obj::mouseReleased;

bool Input_obj::rightMouseDown;

bool Input_obj::rightMouseUp;

bool Input_obj::rightMousePressed;

bool Input_obj::rightMouseReleased;

bool Input_obj::middleMouseDown;

bool Input_obj::middleMouseUp;

bool Input_obj::middleMousePressed;

bool Input_obj::middleMouseReleased;

bool Input_obj::mouseWheel;

bool Input_obj::multiTouchSupported;

int Input_obj::get_mouseWheelDelta( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseWheelDelta",0x64ba5bff,"com.haxepunk.utils.Input.get_mouseWheelDelta","com/haxepunk/utils/Input.hx",111,0x987951ab)
	HX_STACK_LINE(112)
	if ((::com::haxepunk::utils::Input_obj::mouseWheel)){
		HX_STACK_LINE(114)
		::com::haxepunk::utils::Input_obj::mouseWheel = false;
		HX_STACK_LINE(115)
		return ::com::haxepunk::utils::Input_obj::_mouseWheelDelta;
	}
	HX_STACK_LINE(117)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseWheelDelta,return )

int Input_obj::get_mouseX( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseX",0x2da01216,"com.haxepunk.utils.Input.get_mouseX","com/haxepunk/utils/Input.hx",126,0x987951ab)
	HX_STACK_LINE(126)
	return ::com::haxepunk::HXP_obj::screen->get_mouseX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseX,return )

int Input_obj::get_mouseY( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseY",0x2da01217,"com.haxepunk.utils.Input.get_mouseY","com/haxepunk/utils/Input.hx",135,0x987951ab)
	HX_STACK_LINE(135)
	return ::com::haxepunk::HXP_obj::screen->get_mouseY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseY,return )

int Input_obj::get_mouseFlashX( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseFlashX",0xe408164a,"com.haxepunk.utils.Input.get_mouseFlashX","com/haxepunk/utils/Input.hx",143,0x987951ab)
	HX_STACK_LINE(144)
	Float _g = ::com::haxepunk::HXP_obj::stage->get_mouseX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(144)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashX,return )

int Input_obj::get_mouseFlashY( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseFlashY",0xe408164b,"com.haxepunk.utils.Input.get_mouseFlashY","com/haxepunk/utils/Input.hx",152,0x987951ab)
	HX_STACK_LINE(153)
	Float _g = ::com::haxepunk::HXP_obj::stage->get_mouseY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(153)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashY,return )

Void Input_obj::define( ::String name,Array< int > keys){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","define",0x0cc5eef5,"com.haxepunk.utils.Input.define","com/haxepunk/utils/Input.hx",163,0x987951ab)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(keys,"keys")
		HX_STACK_LINE(163)
		::com::haxepunk::utils::Input_obj::_control->set(name,keys);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,define,(void))

bool Input_obj::check( ::com::haxepunk::ds::Either input){
	HX_STACK_FRAME("com.haxepunk.utils.Input","check",0x2f7f5b4e,"com.haxepunk.utils.Input.check","com/haxepunk/utils/Input.hx",172,0x987951ab)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		::com::haxepunk::ds::Either _g = input;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(173)
				::String s = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(175)
				{
					HX_STACK_LINE(183)
					{
						HX_STACK_LINE(183)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(183)
						Array< int > _g2 = ::com::haxepunk::utils::Input_obj::_control->get(s);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(183)
						while((true)){
							HX_STACK_LINE(183)
							if ((!(((_g1 < _g2->length))))){
								HX_STACK_LINE(183)
								break;
							}
							HX_STACK_LINE(183)
							int key = _g2->__get(_g1);		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(183)
							++(_g1);
							HX_STACK_LINE(185)
							if (((key < (int)0))){
								HX_STACK_LINE(187)
								if (((::com::haxepunk::utils::Input_obj::_keyNum > (int)0))){
									HX_STACK_LINE(187)
									return true;
								}
								HX_STACK_LINE(188)
								continue;
							}
							HX_STACK_LINE(190)
							Dynamic _g3 = ::com::haxepunk::utils::Input_obj::_key->get(key);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(190)
							if (((_g3 == true))){
								HX_STACK_LINE(190)
								return true;
							}
						}
					}
					HX_STACK_LINE(192)
					return false;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(173)
				int i = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(194)
				if (((i < (int)0))){
					HX_STACK_LINE(194)
					return (::com::haxepunk::utils::Input_obj::_keyNum > (int)0);
				}
				else{
					HX_STACK_LINE(194)
					return ::com::haxepunk::utils::Input_obj::_key->get(i);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(197)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,check,return )

bool Input_obj::pressed( ::com::haxepunk::ds::Either input){
	HX_STACK_FRAME("com.haxepunk.utils.Input","pressed",0xb949c2a8,"com.haxepunk.utils.Input.pressed","com/haxepunk/utils/Input.hx",206,0x987951ab)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		::com::haxepunk::ds::Either _g = input;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(207)
				::String s = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(210)
				if ((::com::haxepunk::utils::Input_obj::_control->exists(s))){
					HX_STACK_LINE(212)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(212)
					Array< int > _g2 = ::com::haxepunk::utils::Input_obj::_control->get(s);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(212)
					while((true)){
						HX_STACK_LINE(212)
						if ((!(((_g1 < _g2->length))))){
							HX_STACK_LINE(212)
							break;
						}
						HX_STACK_LINE(212)
						int key = _g2->__get(_g1);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(212)
						++(_g1);
						struct _Function_5_1{
							inline static bool Block( int &key){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Input.hx",214,0x987951ab)
								{
									HX_STACK_LINE(214)
									int _g3 = ::com::haxepunk::utils::Input_obj::_press->indexOf(key,null());		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(214)
									return (_g3 >= (int)0);
								}
								return null();
							}
						};
						HX_STACK_LINE(214)
						if (((  (((key < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_pressNum != (int)0)) : bool(_Function_5_1::Block(key)) ))){
							HX_STACK_LINE(214)
							return true;
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(207)
				int i = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(218)
				if (((i < (int)0))){
					HX_STACK_LINE(218)
					return (::com::haxepunk::utils::Input_obj::_pressNum != (int)0);
				}
				else{
					HX_STACK_LINE(218)
					int _g1 = ::com::haxepunk::utils::Input_obj::_press->indexOf(i,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(218)
					return (_g1 >= (int)0);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(220)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressed,return )

bool Input_obj::released( ::com::haxepunk::ds::Either input){
	HX_STACK_FRAME("com.haxepunk.utils.Input","released",0x6e169df7,"com.haxepunk.utils.Input.released","com/haxepunk/utils/Input.hx",230,0x987951ab)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		::com::haxepunk::ds::Either _g = input;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(230)
				::String s = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(233)
						Array< int > _g2 = ::com::haxepunk::utils::Input_obj::_control->get(s);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(233)
						while((true)){
							HX_STACK_LINE(233)
							if ((!(((_g1 < _g2->length))))){
								HX_STACK_LINE(233)
								break;
							}
							HX_STACK_LINE(233)
							int key = _g2->__get(_g1);		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(233)
							++(_g1);
							struct _Function_6_1{
								inline static bool Block( int &key){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Input.hx",235,0x987951ab)
									{
										HX_STACK_LINE(235)
										int _g3 = ::com::haxepunk::utils::Input_obj::_release->indexOf(key,null());		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(235)
										return (_g3 >= (int)0);
									}
									return null();
								}
							};
							HX_STACK_LINE(235)
							if (((  (((key < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_releaseNum != (int)0)) : bool(_Function_6_1::Block(key)) ))){
								HX_STACK_LINE(235)
								return true;
							}
						}
					}
					HX_STACK_LINE(237)
					return false;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(230)
				int i = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(239)
				if (((i < (int)0))){
					HX_STACK_LINE(239)
					return (::com::haxepunk::utils::Input_obj::_releaseNum != (int)0);
				}
				else{
					HX_STACK_LINE(239)
					int _g1 = ::com::haxepunk::utils::Input_obj::_release->indexOf(i,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(239)
					return (_g1 >= (int)0);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(230)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,released,return )

Void Input_obj::touchPoints( Dynamic touchCallback){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","touchPoints",0xd466e248,"com.haxepunk.utils.Input.touchPoints","com/haxepunk/utils/Input.hx",245,0x987951ab)
		HX_STACK_ARG(touchCallback,"touchCallback")
		HX_STACK_LINE(245)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(::com::haxepunk::utils::Input_obj::_touches->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::Touch touch = __it->next();
			touchCallback(touch).Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,touchPoints,(void))

::haxe::ds::IntMap Input_obj::get_touches( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_touches",0xd6f4e90a,"com.haxepunk.utils.Input.get_touches","com/haxepunk/utils/Input.hx",252,0x987951ab)
	HX_STACK_LINE(252)
	return ::com::haxepunk::utils::Input_obj::_touches;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_touches,return )

::com::haxepunk::utils::Joystick Input_obj::joystick( int id){
	HX_STACK_FRAME("com.haxepunk.utils.Input","joystick",0x9320f5f6,"com.haxepunk.utils.Input.joystick","com/haxepunk/utils/Input.hx",260,0x987951ab)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(261)
	::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::_joysticks->get(id);		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(262)
	if (((joy == null()))){
		HX_STACK_LINE(264)
		::com::haxepunk::utils::Joystick _g = ::com::haxepunk::utils::Joystick_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(264)
		joy = _g;
		HX_STACK_LINE(265)
		::com::haxepunk::utils::Input_obj::_joysticks->set(id,joy);
	}
	HX_STACK_LINE(267)
	return joy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,joystick,return )

int Input_obj::get_joysticks( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_joysticks",0xe6ce5094,"com.haxepunk.utils.Input.get_joysticks","com/haxepunk/utils/Input.hx",275,0x987951ab)
	HX_STACK_LINE(276)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(277)
	for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(::com::haxepunk::utils::Input_obj::_joysticks->iterator());  __it->hasNext(); ){
		::com::haxepunk::utils::Joystick joystick = __it->next();
		if ((joystick->get_connected())){
			HX_STACK_LINE(281)
			hx::AddEq(count,(int)1);
		}
;
	}
	HX_STACK_LINE(284)
	return count;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_joysticks,return )

Void Input_obj::enable( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","enable",0x9e69213d,"com.haxepunk.utils.Input.enable","com/haxepunk/utils/Input.hx",292,0x987951ab)
		HX_STACK_LINE(292)
		if (((bool(!(::com::haxepunk::utils::Input_obj::_enabled)) && bool((::com::haxepunk::HXP_obj::stage != null()))))){
			HX_STACK_LINE(294)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,::com::haxepunk::utils::Input_obj::onKeyDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(295)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,::com::haxepunk::utils::Input_obj::onKeyUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(296)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onMouseDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(297)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,::com::haxepunk::utils::Input_obj::onMouseUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(298)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,::com::haxepunk::utils::Input_obj::onMouseWheel_dyn(),false,(int)2,null());
			HX_STACK_LINE(301)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onMiddleMouseDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(302)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_UP,::com::haxepunk::utils::Input_obj::onMiddleMouseUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(303)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onRightMouseDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(304)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_UP,::com::haxepunk::utils::Input_obj::onRightMouseUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(307)
			bool _g = ::flash::ui::Multitouch_obj::get_supportsTouchEvents();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			::com::haxepunk::utils::Input_obj::multiTouchSupported = _g;
			HX_STACK_LINE(308)
			if ((::com::haxepunk::utils::Input_obj::multiTouchSupported)){
				HX_STACK_LINE(310)
				::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
				HX_STACK_LINE(312)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,::com::haxepunk::utils::Input_obj::onTouchBegin_dyn(),null(),null(),null());
				HX_STACK_LINE(313)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,::com::haxepunk::utils::Input_obj::onTouchMove_dyn(),null(),null(),null());
				HX_STACK_LINE(314)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,::com::haxepunk::utils::Input_obj::onTouchEnd_dyn(),null(),null(),null());
			}
			HX_STACK_LINE(318)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("axisMove"),::com::haxepunk::utils::Input_obj::onJoyAxisMove_dyn(),null(),null(),null());
			HX_STACK_LINE(319)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("ballMove"),::com::haxepunk::utils::Input_obj::onJoyBallMove_dyn(),null(),null(),null());
			HX_STACK_LINE(320)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("buttonDown"),::com::haxepunk::utils::Input_obj::onJoyButtonDown_dyn(),null(),null(),null());
			HX_STACK_LINE(321)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("buttonUp"),::com::haxepunk::utils::Input_obj::onJoyButtonUp_dyn(),null(),null(),null());
			HX_STACK_LINE(322)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("hatMove"),::com::haxepunk::utils::Input_obj::onJoyHatMove_dyn(),null(),null(),null());
			HX_STACK_LINE(332)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_64"),(int)45);
			HX_STACK_LINE(333)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_65"),(int)35);
			HX_STACK_LINE(334)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_66"),(int)40);
			HX_STACK_LINE(335)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_67"),(int)34);
			HX_STACK_LINE(336)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_68"),(int)37);
			HX_STACK_LINE(337)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_69"),(int)-1);
			HX_STACK_LINE(338)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_70"),(int)39);
			HX_STACK_LINE(339)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_71"),(int)36);
			HX_STACK_LINE(340)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_72"),(int)38);
			HX_STACK_LINE(341)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_73"),(int)33);
			HX_STACK_LINE(342)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_266"),(int)46);
			HX_STACK_LINE(343)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("123_222"),(int)219);
			HX_STACK_LINE(344)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("125_187"),(int)221);
			HX_STACK_LINE(345)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("126_233"),(int)192);
			HX_STACK_LINE(347)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_80"),(int)112);
			HX_STACK_LINE(348)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_81"),(int)113);
			HX_STACK_LINE(349)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_82"),(int)114);
			HX_STACK_LINE(350)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_83"),(int)115);
			HX_STACK_LINE(351)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_84"),(int)116);
			HX_STACK_LINE(352)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_85"),(int)117);
			HX_STACK_LINE(353)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_86"),(int)118);
			HX_STACK_LINE(354)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_87"),(int)119);
			HX_STACK_LINE(355)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_88"),(int)120);
			HX_STACK_LINE(356)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_89"),(int)121);
			HX_STACK_LINE(357)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_90"),(int)122);
			HX_STACK_LINE(359)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("48_224"),(int)48);
			HX_STACK_LINE(360)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("49_38"),(int)49);
			HX_STACK_LINE(361)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("50_233"),(int)50);
			HX_STACK_LINE(362)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("51_34"),(int)51);
			HX_STACK_LINE(363)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("52_222"),(int)52);
			HX_STACK_LINE(364)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("53_40"),(int)53);
			HX_STACK_LINE(365)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("54_189"),(int)54);
			HX_STACK_LINE(366)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("55_232"),(int)55);
			HX_STACK_LINE(367)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("56_95"),(int)56);
			HX_STACK_LINE(368)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("57_231"),(int)57);
			HX_STACK_LINE(370)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("48_64"),(int)96);
			HX_STACK_LINE(371)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("49_65"),(int)97);
			HX_STACK_LINE(372)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("50_66"),(int)98);
			HX_STACK_LINE(373)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("51_67"),(int)99);
			HX_STACK_LINE(374)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("52_68"),(int)100);
			HX_STACK_LINE(375)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("53_69"),(int)101);
			HX_STACK_LINE(376)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("54_70"),(int)102);
			HX_STACK_LINE(377)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("55_71"),(int)103);
			HX_STACK_LINE(378)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("56_72"),(int)104);
			HX_STACK_LINE(379)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("57_73"),(int)105);
			HX_STACK_LINE(380)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("42_268"),(int)106);
			HX_STACK_LINE(381)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("43_270"),(int)107);
			HX_STACK_LINE(383)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("45_269"),(int)109);
			HX_STACK_LINE(384)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("46_266"),(int)110);
			HX_STACK_LINE(385)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("44_266"),(int)110);
			HX_STACK_LINE(386)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("47_267"),(int)111);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,enable,(void))

Void Input_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","update",0x2ce6f8c3,"com.haxepunk.utils.Input.update","com/haxepunk/utils/Input.hx",395,0x987951ab)
		HX_STACK_LINE(396)
		while((true)){
			HX_STACK_LINE(396)
			int _g = (::com::haxepunk::utils::Input_obj::_pressNum)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(396)
			if ((!(((_g > (int)-1))))){
				HX_STACK_LINE(396)
				break;
			}
			HX_STACK_LINE(396)
			::com::haxepunk::utils::Input_obj::_press[::com::haxepunk::utils::Input_obj::_pressNum] = (int)-1;
		}
		HX_STACK_LINE(397)
		::com::haxepunk::utils::Input_obj::_pressNum = (int)0;
		HX_STACK_LINE(398)
		while((true)){
			HX_STACK_LINE(398)
			int _g1 = (::com::haxepunk::utils::Input_obj::_releaseNum)--;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(398)
			if ((!(((_g1 > (int)-1))))){
				HX_STACK_LINE(398)
				break;
			}
			HX_STACK_LINE(398)
			::com::haxepunk::utils::Input_obj::_release[::com::haxepunk::utils::Input_obj::_releaseNum] = (int)-1;
		}
		HX_STACK_LINE(399)
		::com::haxepunk::utils::Input_obj::_releaseNum = (int)0;
		HX_STACK_LINE(400)
		if ((::com::haxepunk::utils::Input_obj::mousePressed)){
			HX_STACK_LINE(400)
			::com::haxepunk::utils::Input_obj::mousePressed = false;
		}
		HX_STACK_LINE(401)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(401)
			::com::haxepunk::utils::Input_obj::mouseReleased = false;
		}
		HX_STACK_LINE(404)
		if ((::com::haxepunk::utils::Input_obj::middleMousePressed)){
			HX_STACK_LINE(404)
			::com::haxepunk::utils::Input_obj::middleMousePressed = false;
		}
		HX_STACK_LINE(405)
		if ((::com::haxepunk::utils::Input_obj::middleMouseReleased)){
			HX_STACK_LINE(405)
			::com::haxepunk::utils::Input_obj::middleMouseReleased = false;
		}
		HX_STACK_LINE(406)
		if ((::com::haxepunk::utils::Input_obj::rightMousePressed)){
			HX_STACK_LINE(406)
			::com::haxepunk::utils::Input_obj::rightMousePressed = false;
		}
		HX_STACK_LINE(407)
		if ((::com::haxepunk::utils::Input_obj::rightMouseReleased)){
			HX_STACK_LINE(407)
			::com::haxepunk::utils::Input_obj::rightMouseReleased = false;
		}
		HX_STACK_LINE(411)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(::com::haxepunk::utils::Input_obj::_joysticks->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::Joystick joystick = __it->next();
			joystick->update();
		}
		HX_STACK_LINE(413)
		if ((::com::haxepunk::utils::Input_obj::multiTouchSupported)){
			HX_STACK_LINE(415)
			for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(::com::haxepunk::utils::Input_obj::_touches->iterator());  __it->hasNext(); ){
				::com::haxepunk::utils::Touch touch = __it->next();
				touch->update();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::onKeyDown( ::flash::events::KeyboardEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onKeyDown",0xc5f59fc8,"com.haxepunk.utils.Input.onKeyDown","com/haxepunk/utils/Input.hx",420,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(421)
		int code = ::com::haxepunk::utils::Input_obj::keyCode(e);		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(422)
		if (((code == (int)-1))){
			HX_STACK_LINE(423)
			return null();
		}
		HX_STACK_LINE(425)
		::com::haxepunk::utils::Input_obj::lastKey = code;
		HX_STACK_LINE(427)
		if (((code == (int)8))){
			HX_STACK_LINE(427)
			::String _g = ::com::haxepunk::utils::Input_obj::keyString.substr((int)0,(::com::haxepunk::utils::Input_obj::keyString.length - (int)1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(427)
			::com::haxepunk::utils::Input_obj::keyString = _g;
		}
		else{
			HX_STACK_LINE(428)
			if (((bool((bool((bool((code > (int)47)) && bool((code < (int)58)))) || bool((bool((code > (int)64)) && bool((code < (int)91)))))) || bool((code == (int)32))))){
				HX_STACK_LINE(430)
				if (((::com::haxepunk::utils::Input_obj::keyString.length > (int)100))){
					HX_STACK_LINE(430)
					::String _g1 = ::com::haxepunk::utils::Input_obj::keyString.substr((int)1,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(430)
					::com::haxepunk::utils::Input_obj::keyString = _g1;
				}
				HX_STACK_LINE(431)
				::String _char = ::String::fromCharCode(code);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(433)
				::com::haxepunk::ds::Either _g2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)20);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(433)
				bool _g3 = ::com::haxepunk::utils::Input_obj::check(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(433)
				if (((e->shiftKey != _g3))){
					HX_STACK_LINE(434)
					::String _g4 = _char.toUpperCase();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(434)
					_char = _g4;
				}
				else{
					HX_STACK_LINE(435)
					::String _g5 = _char.toLowerCase();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(435)
					_char = _g5;
				}
				HX_STACK_LINE(437)
				hx::AddEq(::com::haxepunk::utils::Input_obj::keyString,_char);
			}
		}
		HX_STACK_LINE(440)
		if ((!(::com::haxepunk::utils::Input_obj::_key->get(code)))){
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				::com::haxepunk::utils::Input_obj::_key->set(code,true);
				HX_STACK_LINE(442)
				true;
			}
			HX_STACK_LINE(443)
			(::com::haxepunk::utils::Input_obj::_keyNum)++;
			HX_STACK_LINE(444)
			int _g6 = (::com::haxepunk::utils::Input_obj::_pressNum)++;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(444)
			::com::haxepunk::utils::Input_obj::_press[_g6] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyDown,(void))

Void Input_obj::onKeyUp( ::flash::events::KeyboardEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onKeyUp",0xf49f4841,"com.haxepunk.utils.Input.onKeyUp","com/haxepunk/utils/Input.hx",449,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(450)
		int code = ::com::haxepunk::utils::Input_obj::keyCode(e);		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(451)
		if (((code == (int)-1))){
			HX_STACK_LINE(452)
			return null();
		}
		HX_STACK_LINE(454)
		if ((::com::haxepunk::utils::Input_obj::_key->get(code))){
			HX_STACK_LINE(456)
			{
				HX_STACK_LINE(456)
				::com::haxepunk::utils::Input_obj::_key->set(code,false);
				HX_STACK_LINE(456)
				false;
			}
			HX_STACK_LINE(457)
			(::com::haxepunk::utils::Input_obj::_keyNum)--;
			HX_STACK_LINE(458)
			int _g = (::com::haxepunk::utils::Input_obj::_releaseNum)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(458)
			::com::haxepunk::utils::Input_obj::_release[_g] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyUp,(void))

int Input_obj::keyCode( ::flash::events::KeyboardEvent e){
	HX_STACK_FRAME("com.haxepunk.utils.Input","keyCode",0x1b011272,"com.haxepunk.utils.Input.keyCode","com/haxepunk/utils/Input.hx",463,0x987951ab)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(467)
	Dynamic code = ::com::haxepunk::utils::Input_obj::_nativeCorrection->get(((e->charCode + HX_CSTRING("_")) + e->keyCode));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(469)
	if (((code == null()))){
		HX_STACK_LINE(470)
		return e->keyCode;
	}
	else{
		HX_STACK_LINE(472)
		return code;
	}
	HX_STACK_LINE(469)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyCode,return )

Void Input_obj::onMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMouseDown",0x8907ff0e,"com.haxepunk.utils.Input.onMouseDown","com/haxepunk/utils/Input.hx",478,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(478)
		if ((!(::com::haxepunk::utils::Input_obj::mouseDown))){
			HX_STACK_LINE(480)
			::com::haxepunk::utils::Input_obj::mouseDown = true;
			HX_STACK_LINE(481)
			::com::haxepunk::utils::Input_obj::mouseUp = false;
			HX_STACK_LINE(482)
			::com::haxepunk::utils::Input_obj::mousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseDown,(void))

Void Input_obj::onMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMouseUp",0xea212a07,"com.haxepunk.utils.Input.onMouseUp","com/haxepunk/utils/Input.hx",487,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(488)
		::com::haxepunk::utils::Input_obj::mouseDown = false;
		HX_STACK_LINE(489)
		::com::haxepunk::utils::Input_obj::mouseUp = true;
		HX_STACK_LINE(490)
		::com::haxepunk::utils::Input_obj::mouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseUp,(void))

Void Input_obj::onMouseWheel( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMouseWheel",0x49e6046f,"com.haxepunk.utils.Input.onMouseWheel","com/haxepunk/utils/Input.hx",494,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(495)
		::com::haxepunk::utils::Input_obj::mouseWheel = true;
		HX_STACK_LINE(496)
		::com::haxepunk::utils::Input_obj::_mouseWheelDelta = e->delta;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseWheel,(void))

Void Input_obj::onMiddleMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMiddleMouseDown",0x98996039,"com.haxepunk.utils.Input.onMiddleMouseDown","com/haxepunk/utils/Input.hx",502,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(502)
		if ((!(::com::haxepunk::utils::Input_obj::middleMouseDown))){
			HX_STACK_LINE(504)
			::com::haxepunk::utils::Input_obj::middleMouseDown = true;
			HX_STACK_LINE(505)
			::com::haxepunk::utils::Input_obj::middleMouseUp = false;
			HX_STACK_LINE(506)
			::com::haxepunk::utils::Input_obj::middleMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseDown,(void))

Void Input_obj::onMiddleMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMiddleMouseUp",0xb7f55a72,"com.haxepunk.utils.Input.onMiddleMouseUp","com/haxepunk/utils/Input.hx",511,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(512)
		::com::haxepunk::utils::Input_obj::middleMouseDown = false;
		HX_STACK_LINE(513)
		::com::haxepunk::utils::Input_obj::middleMouseUp = true;
		HX_STACK_LINE(514)
		::com::haxepunk::utils::Input_obj::middleMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseUp,(void))

Void Input_obj::onRightMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onRightMouseDown",0xb0ab1664,"com.haxepunk.utils.Input.onRightMouseDown","com/haxepunk/utils/Input.hx",519,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(519)
		if ((!(::com::haxepunk::utils::Input_obj::rightMouseDown))){
			HX_STACK_LINE(521)
			::com::haxepunk::utils::Input_obj::rightMouseDown = true;
			HX_STACK_LINE(522)
			::com::haxepunk::utils::Input_obj::rightMouseUp = false;
			HX_STACK_LINE(523)
			::com::haxepunk::utils::Input_obj::rightMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseDown,(void))

Void Input_obj::onRightMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onRightMouseUp",0x881a9fdd,"com.haxepunk.utils.Input.onRightMouseUp","com/haxepunk/utils/Input.hx",528,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(529)
		::com::haxepunk::utils::Input_obj::rightMouseDown = false;
		HX_STACK_LINE(530)
		::com::haxepunk::utils::Input_obj::rightMouseUp = true;
		HX_STACK_LINE(531)
		::com::haxepunk::utils::Input_obj::rightMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseUp,(void))

Void Input_obj::onTouchBegin( ::flash::events::TouchEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onTouchBegin",0x0c45aa23,"com.haxepunk.utils.Input.onTouchBegin","com/haxepunk/utils/Input.hx",536,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(537)
		::com::haxepunk::utils::Touch touchPoint = ::com::haxepunk::utils::Touch_obj::__new((Float(e->stageX) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)),(Float(e->stageY) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)),e->touchPointID);		HX_STACK_VAR(touchPoint,"touchPoint");
		HX_STACK_LINE(538)
		::com::haxepunk::utils::Input_obj::_touches->set(e->touchPointID,touchPoint);
		HX_STACK_LINE(539)
		hx::AddEq(::com::haxepunk::utils::Input_obj::_touchNum,(int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchBegin,(void))

Void Input_obj::onTouchMove( ::flash::events::TouchEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onTouchMove",0xa812c057,"com.haxepunk.utils.Input.onTouchMove","com/haxepunk/utils/Input.hx",543,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(544)
		::com::haxepunk::utils::Touch point = ::com::haxepunk::utils::Input_obj::_touches->get(e->touchPointID);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(545)
		point->x = (Float(e->stageX) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX));
		HX_STACK_LINE(546)
		point->y = (Float(e->stageY) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchMove,(void))

Void Input_obj::onTouchEnd( ::flash::events::TouchEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onTouchEnd",0x4ecaf155,"com.haxepunk.utils.Input.onTouchEnd","com/haxepunk/utils/Input.hx",550,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(551)
		::com::haxepunk::utils::Input_obj::_touches->remove(e->touchPointID);
		HX_STACK_LINE(552)
		hx::SubEq(::com::haxepunk::utils::Input_obj::_touchNum,(int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchEnd,(void))

Void Input_obj::onJoyAxisMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyAxisMove",0x8ac5262d,"com.haxepunk.utils.Input.onJoyAxisMove","com/haxepunk/utils/Input.hx",558,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(562)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(565)
		joy->set_connected(true);
		HX_STACK_LINE(566)
		joy->axis = e->axis;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyAxisMove,(void))

Void Input_obj::onJoyBallMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyBallMove",0x32cdf28b,"com.haxepunk.utils.Input.onJoyBallMove","com/haxepunk/utils/Input.hx",570,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(574)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(577)
		joy->set_connected(true);
		HX_STACK_LINE(578)
		Float _g = ::Math_obj::abs(e->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(578)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(578)
		if (((_g < 0.15))){
			HX_STACK_LINE(578)
			_g1 = (int)0;
		}
		else{
			HX_STACK_LINE(578)
			_g1 = e->x;
		}
		HX_STACK_LINE(578)
		joy->ball->x = _g1;
		HX_STACK_LINE(579)
		Float _g2 = ::Math_obj::abs(e->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(579)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(579)
		if (((_g2 < 0.15))){
			HX_STACK_LINE(579)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(579)
			_g3 = e->y;
		}
		HX_STACK_LINE(579)
		joy->ball->y = _g3;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyBallMove,(void))

Void Input_obj::onJoyButtonDown( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyButtonDown",0x6cea6a0f,"com.haxepunk.utils.Input.onJoyButtonDown","com/haxepunk/utils/Input.hx",583,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(587)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(589)
		joy->set_connected(true);
		HX_STACK_LINE(590)
		joy->buttons->set(e->id,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonDown,(void))

Void Input_obj::onJoyButtonUp( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyButtonUp",0x570322c8,"com.haxepunk.utils.Input.onJoyButtonUp","com/haxepunk/utils/Input.hx",594,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(598)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(600)
		joy->set_connected(true);
		HX_STACK_LINE(601)
		joy->buttons->set(e->id,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonUp,(void))

Void Input_obj::onJoyHatMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyHatMove",0xf915b691,"com.haxepunk.utils.Input.onJoyHatMove","com/haxepunk/utils/Input.hx",605,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(609)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(611)
		joy->set_connected(true);
		HX_STACK_LINE(612)
		Float _g = ::Math_obj::abs(e->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(612)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(612)
		if (((_g < 0.15))){
			HX_STACK_LINE(612)
			_g1 = (int)0;
		}
		else{
			HX_STACK_LINE(612)
			_g1 = e->x;
		}
		HX_STACK_LINE(612)
		joy->hat->x = _g1;
		HX_STACK_LINE(613)
		Float _g2 = ::Math_obj::abs(e->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(613)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(613)
		if (((_g2 < 0.15))){
			HX_STACK_LINE(613)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(613)
			_g3 = e->y;
		}
		HX_STACK_LINE(613)
		joy->hat->y = _g3;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyHatMove,(void))

int Input_obj::kKeyStringMax;

bool Input_obj::_enabled;

int Input_obj::_touchNum;

::haxe::ds::IntMap Input_obj::_key;

int Input_obj::_keyNum;

Array< int > Input_obj::_press;

int Input_obj::_pressNum;

Array< int > Input_obj::_release;

int Input_obj::_releaseNum;

int Input_obj::_mouseWheelDelta;

::haxe::ds::IntMap Input_obj::_touches;

::haxe::ds::IntMap Input_obj::_joysticks;

::haxe::ds::StringMap Input_obj::_control;

::haxe::ds::StringMap Input_obj::_nativeCorrection;


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { return _key; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { return get_mouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return get_mouseY(); }
		if (HX_FIELD_EQ(inName,"define") ) { return define_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_press") ) { return _press; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { return lastKey; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touches") ) { return get_touches(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { return _keyNum; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"joystick") ) { return joystick_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_release") ) { return _release; }
		if (HX_FIELD_EQ(inName,"_touches") ) { return _touches; }
		if (HX_FIELD_EQ(inName,"_control") ) { return _control; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { return keyString; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		if (HX_FIELD_EQ(inName,"joysticks") ) { return get_joysticks(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchNum") ) { return _touchNum; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { return _pressNum; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { return mouseWheel; }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { return _joysticks; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseFlashX") ) { return get_mouseFlashX(); }
		if (HX_FIELD_EQ(inName,"mouseFlashY") ) { return get_mouseFlashY(); }
		if (HX_FIELD_EQ(inName,"touchPoints") ) { return touchPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touches") ) { return get_touches_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { return _releaseNum; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { return mousePressed; }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { return rightMouseUp; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyHatMove") ) { return onJoyHatMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { return mouseReleased; }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { return middleMouseUp; }
		if (HX_FIELD_EQ(inName,"get_joysticks") ) { return get_joysticks_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyAxisMove") ) { return onJoyAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyBallMove") ) { return onJoyBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonUp") ) { return onJoyButtonUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { return rightMouseDown; }
		if (HX_FIELD_EQ(inName,"onRightMouseUp") ) { return onRightMouseUp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { return middleMouseDown; }
		if (HX_FIELD_EQ(inName,"mouseWheelDelta") ) { return get_mouseWheelDelta(); }
		if (HX_FIELD_EQ(inName,"get_mouseFlashX") ) { return get_mouseFlashX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseFlashY") ) { return get_mouseFlashY_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleMouseUp") ) { return onMiddleMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonDown") ) { return onJoyButtonDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onRightMouseDown") ) { return onRightMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { return _mouseWheelDelta; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightMousePressed") ) { return rightMousePressed; }
		if (HX_FIELD_EQ(inName,"onMiddleMouseDown") ) { return onMiddleMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return _nativeCorrection; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rightMouseReleased") ) { return rightMouseReleased; }
		if (HX_FIELD_EQ(inName,"middleMousePressed") ) { return middleMousePressed; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"middleMouseReleased") ) { return middleMouseReleased; }
		if (HX_FIELD_EQ(inName,"multiTouchSupported") ) { return multiTouchSupported; }
		if (HX_FIELD_EQ(inName,"get_mouseWheelDelta") ) { return get_mouseWheelDelta_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { _key=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_press") ) { _press=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { lastKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { mouseUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { _keyNum=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_release") ) { _release=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touches") ) { _touches=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_control") ) { _control=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { keyString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { mouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchNum") ) { _touchNum=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { _pressNum=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { mouseWheel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { _joysticks=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { _releaseNum=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { mousePressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { rightMouseUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { mouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { middleMouseUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { rightMouseDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { middleMouseDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { _mouseWheelDelta=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightMousePressed") ) { rightMousePressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rightMouseReleased") ) { rightMouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleMousePressed") ) { middleMousePressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"middleMouseReleased") ) { middleMouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiTouchSupported") ) { multiTouchSupported=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("keyString"),
	HX_CSTRING("lastKey"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mousePressed"),
	HX_CSTRING("mouseReleased"),
	HX_CSTRING("rightMouseDown"),
	HX_CSTRING("rightMouseUp"),
	HX_CSTRING("rightMousePressed"),
	HX_CSTRING("rightMouseReleased"),
	HX_CSTRING("middleMouseDown"),
	HX_CSTRING("middleMouseUp"),
	HX_CSTRING("middleMousePressed"),
	HX_CSTRING("middleMouseReleased"),
	HX_CSTRING("mouseWheel"),
	HX_CSTRING("multiTouchSupported"),
	HX_CSTRING("get_mouseWheelDelta"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_mouseFlashX"),
	HX_CSTRING("get_mouseFlashY"),
	HX_CSTRING("define"),
	HX_CSTRING("check"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("touchPoints"),
	HX_CSTRING("get_touches"),
	HX_CSTRING("joystick"),
	HX_CSTRING("get_joysticks"),
	HX_CSTRING("enable"),
	HX_CSTRING("update"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("keyCode"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMiddleMouseDown"),
	HX_CSTRING("onMiddleMouseUp"),
	HX_CSTRING("onRightMouseDown"),
	HX_CSTRING("onRightMouseUp"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onJoyAxisMove"),
	HX_CSTRING("onJoyBallMove"),
	HX_CSTRING("onJoyButtonDown"),
	HX_CSTRING("onJoyButtonUp"),
	HX_CSTRING("onJoyHatMove"),
	HX_CSTRING("kKeyStringMax"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_touchNum"),
	HX_CSTRING("_key"),
	HX_CSTRING("_keyNum"),
	HX_CSTRING("_press"),
	HX_CSTRING("_pressNum"),
	HX_CSTRING("_release"),
	HX_CSTRING("_releaseNum"),
	HX_CSTRING("_mouseWheelDelta"),
	HX_CSTRING("_touches"),
	HX_CSTRING("_joysticks"),
	HX_CSTRING("_control"),
	HX_CSTRING("_nativeCorrection"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_MARK_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_MARK_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_MARK_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_MARK_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_MARK_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(Input_obj::_touchNum,"_touchNum");
	HX_MARK_MEMBER_NAME(Input_obj::_key,"_key");
	HX_MARK_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_MARK_MEMBER_NAME(Input_obj::_press,"_press");
	HX_MARK_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_MARK_MEMBER_NAME(Input_obj::_release,"_release");
	HX_MARK_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_MARK_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_MARK_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_MARK_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_MARK_MEMBER_NAME(Input_obj::_control,"_control");
	HX_MARK_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_VISIT_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_VISIT_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_VISIT_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_VISIT_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(Input_obj::_touchNum,"_touchNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_key,"_key");
	HX_VISIT_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_press,"_press");
	HX_VISIT_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_release,"_release");
	HX_VISIT_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_VISIT_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_VISIT_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_VISIT_MEMBER_NAME(Input_obj::_control,"_control");
	HX_VISIT_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
};

#endif

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
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

void Input_obj::__boot()
{
	keyString= HX_CSTRING("");
	multiTouchSupported= false;
	kKeyStringMax= (int)100;
	_enabled= false;
	_touchNum= (int)0;
	_key= ::haxe::ds::IntMap_obj::__new();
	_keyNum= (int)0;
	_press= Array_obj< int >::__new();
	_pressNum= (int)0;
	_release= Array_obj< int >::__new();
	_releaseNum= (int)0;
	_mouseWheelDelta= (int)0;
	_touches= ::haxe::ds::IntMap_obj::__new();
	_joysticks= ::haxe::ds::IntMap_obj::__new();
	_control= ::haxe::ds::StringMap_obj::__new();
	_nativeCorrection= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
