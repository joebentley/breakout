#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
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
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#include <com/haxepunk/debug/TraceCapture.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
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
#ifndef INCLUDED_flash_system_System
#include <flash/system/System.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void Console_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.debug.Console","new",0xef2b98d5,"com.haxepunk.debug.Console.new","com/haxepunk/debug/Console.hx",32,0xfa4cbb5c)
{
	HX_STACK_LINE(408)
	this->debugDraw = true;
	HX_STACK_LINE(41)
	this->init();
	HX_STACK_LINE(43)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("_ARROWS"),Array_obj< int >::__new().Add((int)39).Add((int)37).Add((int)40).Add((int)38));
}
;
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new()
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

Void Console_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","init",0x53b2d8fb,"com.haxepunk.debug.Console.init","com/haxepunk/debug/Console.hx",48,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::flash::display::Sprite _g = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->_sprite = _g;
		HX_STACK_LINE(51)
		::flash::text::Font font = ::openfl::Assets_obj::getFont(HX_CSTRING("font/04B_03__.ttf"),null());		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(52)
		if (((font == null()))){
			HX_STACK_LINE(54)
			::flash::text::Font _g1 = ::openfl::Assets_obj::getFont(::com::haxepunk::HXP_obj::defaultFont,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			font = _g1;
		}
		HX_STACK_LINE(56)
		::flash::text::TextFormat _g2 = ::flash::text::TextFormat_obj::__new(font->fontName,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(56)
		this->_format = _g2;
		HX_STACK_LINE(57)
		::flash::display::Bitmap _g3 = ::flash::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(57)
		this->_back = _g3;
		HX_STACK_LINE(60)
		::flash::display::Sprite _g4 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(60)
		this->_fpsRead = _g4;
		HX_STACK_LINE(61)
		::flash::text::TextField _g5 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(61)
		this->_fpsReadText = _g5;
		HX_STACK_LINE(62)
		::flash::display::Sprite _g6 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(62)
		this->_fpsInfo = _g6;
		HX_STACK_LINE(63)
		::flash::text::TextField _g7 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(63)
		this->_fpsInfoText0 = _g7;
		HX_STACK_LINE(64)
		::flash::text::TextField _g8 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(64)
		this->_fpsInfoText1 = _g8;
		HX_STACK_LINE(65)
		::flash::text::TextField _g9 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(65)
		this->_memReadText = _g9;
		HX_STACK_LINE(67)
		::com::haxepunk::debug::LayerList _g10 = ::com::haxepunk::debug::LayerList_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(67)
		this->_layerList = _g10;
		HX_STACK_LINE(70)
		::flash::display::Sprite _g11 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(70)
		this->_logRead = _g11;
		HX_STACK_LINE(71)
		::flash::text::TextField _g12 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(71)
		this->_logReadText0 = _g12;
		HX_STACK_LINE(72)
		::flash::text::TextField _g13 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(72)
		this->_logReadText1 = _g13;
		HX_STACK_LINE(73)
		this->_logScroll = (int)0;
		HX_STACK_LINE(74)
		this->_logLines = (int)33;
		HX_STACK_LINE(77)
		::flash::display::Sprite _g14 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(77)
		this->_entRead = _g14;
		HX_STACK_LINE(78)
		::flash::text::TextField _g15 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(78)
		this->_entReadText = _g15;
		HX_STACK_LINE(81)
		::flash::display::Sprite _g16 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(81)
		this->_debRead = _g16;
		HX_STACK_LINE(82)
		::flash::text::TextField _g17 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(82)
		this->_debReadText0 = _g17;
		HX_STACK_LINE(83)
		::flash::text::TextField _g18 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(83)
		this->_debReadText1 = _g18;
		HX_STACK_LINE(86)
		::flash::display::Sprite _g19 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(86)
		this->_butRead = _g19;
		HX_STACK_LINE(89)
		::flash::display::Sprite _g20 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(89)
		this->_entScreen = _g20;
		HX_STACK_LINE(90)
		::flash::display::Sprite _g21 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(90)
		this->_entSelect = _g21;
		HX_STACK_LINE(91)
		::flash::geom::Rectangle _g22 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(91)
		this->_entRect = _g22;
		HX_STACK_LINE(94)
		Array< ::String > _g23 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(94)
		this->LOG = _g23;
		HX_STACK_LINE(96)
		::haxe::ds::IntMap _g24 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(96)
		this->LAYER_LIST = _g24;
		HX_STACK_LINE(97)
		Array< ::Dynamic > _g25 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(97)
		this->ENTITY_LIST = _g25;
		HX_STACK_LINE(98)
		Array< ::Dynamic > _g26 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(98)
		this->SCREEN_LIST = _g26;
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g27 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(99)
		this->SELECT_LIST = _g27;
		HX_STACK_LINE(102)
		this->WATCH_LIST = Array_obj< ::String >::__new().Add(HX_CSTRING("x")).Add(HX_CSTRING("y"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,init,(void))

Void Console_obj::traceLog( Dynamic v,Dynamic infos){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","traceLog",0x89650e6a,"com.haxepunk.debug.Console.traceLog","com/haxepunk/debug/Console.hx",106,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(107)
		::String _g = ::Std_obj::string(v);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		::String log = ((((infos->__Field(HX_CSTRING("className"),true) + HX_CSTRING("(")) + infos->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING("): ")) + _g);		HX_STACK_VAR(log,"log");
		HX_STACK_LINE(108)
		this->LOG->push(log);
		HX_STACK_LINE(110)
		::Sys_obj::println(log);
		HX_STACK_LINE(112)
		if (((  ((this->_enabled)) ? bool(this->_sprite->get_visible()) : bool(false) ))){
			HX_STACK_LINE(112)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,traceLog,(void))

Void Console_obj::log( Dynamic data){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","log",0xef2a1cf9,"com.haxepunk.debug.Console.log","com/haxepunk/debug/Console.hx",120,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(121)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			int _g = data->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(126)
				if (((i > (int)0))){
					HX_STACK_LINE(126)
					hx::AddEq(s,HX_CSTRING(" "));
				}
				HX_STACK_LINE(127)
				::String _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(127)
				if (((data->__GetItem(i) != null()))){
					HX_STACK_LINE(127)
					_g2 = ::Std_obj::string(data->__GetItem(i));
				}
				else{
					HX_STACK_LINE(127)
					_g2 = HX_CSTRING("null");
				}
				HX_STACK_LINE(127)
				hx::AddEq(s,_g2);
			}
		}
		HX_STACK_LINE(131)
		int _g1 = s.indexOf(HX_CSTRING("\n"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(131)
		if (((_g1 >= (int)0))){
			HX_STACK_LINE(133)
			Array< ::String > a = s.split(HX_CSTRING("\n"));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(134)
				while((true)){
					HX_STACK_LINE(134)
					if ((!(((_g < a->length))))){
						HX_STACK_LINE(134)
						break;
					}
					HX_STACK_LINE(134)
					::String s1 = a->__get(_g);		HX_STACK_VAR(s1,"s1");
					HX_STACK_LINE(134)
					++(_g);
					HX_STACK_LINE(134)
					this->LOG->push(s1);
				}
			}
		}
		else{
			HX_STACK_LINE(138)
			this->LOG->push(s);
		}
		HX_STACK_LINE(142)
		if (((  ((this->_enabled)) ? bool(this->_sprite->get_visible()) : bool(false) ))){
			HX_STACK_LINE(142)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,log,(void))

Void Console_obj::watch( Dynamic properties){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","watch",0xefd7a604,"com.haxepunk.debug.Console.watch","com/haxepunk/debug/Console.hx",150,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_LINE(151)
		::String i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(152)
		if (((properties->__Field(HX_CSTRING("length"),true) > (int)1))){
			HX_STACK_LINE(154)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			while((true)){
				HX_STACK_LINE(154)
				if ((!(((_g < properties->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(154)
					break;
				}
				HX_STACK_LINE(154)
				Dynamic i1 = properties->__GetItem(_g);		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(154)
				++(_g);
				HX_STACK_LINE(154)
				this->WATCH_LIST->push(i1);
			}
		}
		else{
			HX_STACK_LINE(158)
			this->WATCH_LIST->push(properties->__GetItem((int)0));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,watch,(void))

Void Console_obj::show( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","show",0x5a4a72e8,"com.haxepunk.debug.Console.show","com/haxepunk/debug/Console.hx",167,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		if ((!(this->_visible))){
			HX_STACK_LINE(169)
			::com::haxepunk::HXP_obj::stage->addChild(this->_sprite);
			HX_STACK_LINE(170)
			this->_visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,show,(void))

Void Console_obj::hide( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","hide",0x5305d2ad,"com.haxepunk.debug.Console.hide","com/haxepunk/debug/Console.hx",179,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		if ((this->_visible)){
			HX_STACK_LINE(181)
			::com::haxepunk::HXP_obj::stage->removeChild(this->_sprite);
			HX_STACK_LINE(182)
			this->_visible = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,hide,(void))

Void Console_obj::enable( ::com::haxepunk::debug::TraceCapture trace_capture,hx::Null< int >  __o_toggleKey){
int toggleKey = __o_toggleKey.Default(192);
	HX_STACK_FRAME("com.haxepunk.debug.Console","enable",0x2a12dd2e,"com.haxepunk.debug.Console.enable","com/haxepunk/debug/Console.hx",193,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(trace_capture,"trace_capture")
	HX_STACK_ARG(toggleKey,"toggleKey")
{
		HX_STACK_LINE(194)
		this->toggleKey = toggleKey;
		HX_STACK_LINE(197)
		if ((this->_enabled)){
			HX_STACK_LINE(197)
			return null();
		}
		HX_STACK_LINE(200)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(202)
			::flash::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_logo.png"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			::flash::display::Bitmap _g1 = ::flash::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(202)
			this->_bmpLogo = _g1;
			HX_STACK_LINE(203)
			::flash::display::BitmapData _g2 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_debug.png"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(203)
			::flash::display::Bitmap _g3 = ::flash::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(203)
			this->_butDebug = _g3;
			HX_STACK_LINE(204)
			::flash::display::BitmapData _g4 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_output.png"),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(204)
			::flash::display::Bitmap _g5 = ::flash::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(204)
			this->_butOutput = _g5;
			HX_STACK_LINE(205)
			::flash::display::BitmapData _g6 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_play.png"),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(205)
			::flash::display::Bitmap _g7 = ::flash::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(205)
			this->_butPlay = _g7;
			HX_STACK_LINE(206)
			::flash::display::BitmapData _g8 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_pause.png"),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(206)
			::flash::display::Bitmap _g9 = ::flash::display::Bitmap_obj::__new(_g8,null(),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(206)
			this->_butPause = _g9;
			HX_STACK_LINE(207)
			::flash::display::BitmapData _g10 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_step.png"),null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(207)
			::flash::display::Bitmap _g11 = ::flash::display::Bitmap_obj::__new(_g10,null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(207)
			this->_butStep = _g11;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(209)
					return null();
				}
			}
		}
		HX_STACK_LINE(213)
		this->_enabled = true;
		HX_STACK_LINE(214)
		this->_visible = true;
		HX_STACK_LINE(215)
		::com::haxepunk::HXP_obj::stage->addChild(this->_sprite);
		HX_STACK_LINE(218)
		int _g12 = this->get_width();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(218)
		bool big = (_g12 >= (int)420);		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(221)
		this->_sprite->addChild(this->_back);
		HX_STACK_LINE(224)
		this->_sprite->addChild(this->_entScreen);
		HX_STACK_LINE(225)
		this->_entScreen->addChild(this->_entSelect);
		HX_STACK_LINE(228)
		this->_sprite->addChild(this->_entRead);
		HX_STACK_LINE(229)
		this->_entRead->addChild(this->_entReadText);
		HX_STACK_LINE(230)
		::flash::text::TextFormat _g13 = this->format((int)16,(int)16777215,HX_CSTRING("right"));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(230)
		this->_entReadText->set_defaultTextFormat(_g13);
		HX_STACK_LINE(234)
		this->_entReadText->set_width((int)100);
		HX_STACK_LINE(235)
		this->_entReadText->set_height((int)20);
		HX_STACK_LINE(236)
		int _g14 = this->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(236)
		Float _g15 = this->_entReadText->get_width();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(236)
		Float _g16 = (_g14 - _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(236)
		this->_entRead->set_x(_g16);
		HX_STACK_LINE(239)
		this->_entRead->get_graphics()->clear();
		HX_STACK_LINE(240)
		this->_entRead->get_graphics()->beginFill((int)0,.5);
		HX_STACK_LINE(244)
		Float _g17 = this->_entReadText->get_width();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(244)
		Float _g18 = (_g17 + (int)20);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(244)
		this->_entRead->get_graphics()->drawRoundRect((int)0,(int)-20,_g18,(int)40,(int)40,(int)40);
		HX_STACK_LINE(248)
		this->_sprite->addChild(this->_fpsRead);
		HX_STACK_LINE(249)
		this->_fpsRead->addChild(this->_fpsReadText);
		HX_STACK_LINE(250)
		::flash::text::TextFormat _g19 = this->format((int)16,null(),null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(250)
		this->_fpsReadText->set_defaultTextFormat(_g19);
		HX_STACK_LINE(254)
		this->_fpsReadText->set_width((int)70);
		HX_STACK_LINE(255)
		this->_fpsReadText->set_height((int)20);
		HX_STACK_LINE(256)
		this->_fpsReadText->set_x((int)2);
		HX_STACK_LINE(257)
		this->_fpsReadText->set_y((int)1);
		HX_STACK_LINE(260)
		this->_fpsRead->get_graphics()->clear();
		HX_STACK_LINE(261)
		this->_fpsRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(265)
		this->_fpsRead->get_graphics()->drawRoundRect((int)-20,(int)-20,(  ((big)) ? Float((int)340) : Float((int)180) ),(int)40,(int)40,(int)40);
		HX_STACK_LINE(268)
		this->_sprite->addChild(this->_layerList);
		HX_STACK_LINE(271)
		if ((big)){
			HX_STACK_LINE(271)
			this->_sprite->addChild(this->_fpsInfo);
		}
		HX_STACK_LINE(272)
		this->_fpsInfo->addChild(this->_fpsInfoText0);
		HX_STACK_LINE(273)
		this->_fpsInfo->addChild(this->_fpsInfoText1);
		HX_STACK_LINE(274)
		::flash::text::TextFormat _g20 = this->format((int)8,(int)11184810,null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(274)
		this->_fpsInfoText0->set_defaultTextFormat(_g20);
		HX_STACK_LINE(275)
		::flash::text::TextFormat _g21 = this->format((int)8,(int)11184810,null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(275)
		this->_fpsInfoText1->set_defaultTextFormat(_g21);
		HX_STACK_LINE(280)
		Float _g22 = this->_fpsInfoText1->set_width((int)60);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(280)
		this->_fpsInfoText0->set_width(_g22);
		HX_STACK_LINE(281)
		Float _g23 = this->_fpsInfoText1->set_height((int)20);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(281)
		this->_fpsInfoText0->set_height(_g23);
		HX_STACK_LINE(282)
		this->_fpsInfo->set_x((int)75);
		HX_STACK_LINE(283)
		this->_fpsInfoText1->set_x((int)60);
		HX_STACK_LINE(284)
		Float _g24 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(284)
		Float _g25 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(284)
		Float _g26 = (_g24 + _g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(284)
		this->_fpsInfo->set_width(_g26);
		HX_STACK_LINE(288)
		this->_fpsRead->addChild(this->_memReadText);
		HX_STACK_LINE(289)
		::flash::text::TextFormat _g27 = this->format((int)16,null(),null());		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(289)
		this->_memReadText->set_defaultTextFormat(_g27);
		HX_STACK_LINE(290)
		this->_memReadText->set_embedFonts(true);
		HX_STACK_LINE(291)
		this->_memReadText->set_width((int)110);
		HX_STACK_LINE(292)
		this->_memReadText->set_height((int)20);
		HX_STACK_LINE(293)
		Float _g34;		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(293)
		if ((big)){
			HX_STACK_LINE(293)
			Float _g28 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(293)
			Float _g29 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(293)
			Float _g30 = (_g28 + _g29);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(293)
			Float _g31 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(293)
			Float _g32 = (_g30 + _g31);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(293)
			_g34 = (_g32 + (int)5);
		}
		else{
			HX_STACK_LINE(293)
			Float _g33 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(293)
			_g34 = (_g33 + (int)9);
		}
		HX_STACK_LINE(293)
		this->_memReadText->set_x(_g34);
		HX_STACK_LINE(294)
		this->_memReadText->set_y((int)1);
		HX_STACK_LINE(298)
		this->_sprite->addChild(this->_logRead);
		HX_STACK_LINE(299)
		this->_logRead->addChild(this->_logReadText0);
		HX_STACK_LINE(300)
		this->_logRead->addChild(this->_logReadText1);
		HX_STACK_LINE(301)
		::flash::text::TextFormat _g35 = this->format((int)16,(int)16777215,null());		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(301)
		this->_logReadText0->set_defaultTextFormat(_g35);
		HX_STACK_LINE(302)
		::flash::text::TextFormat _g36 = this->format((  ((big)) ? int((int)16) : int((int)8) ),(int)16777215,null());		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(302)
		this->_logReadText1->set_defaultTextFormat(_g36);
		HX_STACK_LINE(307)
		this->_logReadText0->set_selectable(false);
		HX_STACK_LINE(308)
		this->_logReadText0->set_width((int)80);
		HX_STACK_LINE(309)
		this->_logReadText0->set_height((int)20);
		HX_STACK_LINE(310)
		int _g37 = this->get_width();		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(310)
		this->_logReadText1->set_width(_g37);
		HX_STACK_LINE(311)
		this->_logReadText0->set_x((int)2);
		HX_STACK_LINE(312)
		this->_logReadText0->set_y((int)3);
		HX_STACK_LINE(313)
		this->_logReadText0->set_text(HX_CSTRING("OUTPUT:"));
		HX_STACK_LINE(314)
		int _g38 = this->get_height();		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(314)
		int _g39 = (_g38 - (int)60);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(314)
		this->_logHeight = _g39;
		HX_STACK_LINE(315)
		::flash::geom::Rectangle _g40 = ::flash::geom::Rectangle_obj::__new((int)8,(int)24,(int)16,(this->_logHeight - (int)8));		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(315)
		this->_logBar = _g40;
		HX_STACK_LINE(316)
		::flash::geom::Rectangle _g41 = this->_logBar->clone();		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(316)
		this->_logBarGlobal = _g41;
		HX_STACK_LINE(317)
		hx::AddEq(this->_logBarGlobal->y,(int)40);
		HX_STACK_LINE(318)
		if ((big)){
			HX_STACK_LINE(318)
			int _g42 = ::Std_obj::_int((Float(this->_logHeight) / Float(16.5)));		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(318)
			this->_logLines = _g42;
		}
		else{
			HX_STACK_LINE(319)
			int _g43 = ::Std_obj::_int((Float(this->_logHeight) / Float(8.5)));		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(319)
			this->_logLines = _g43;
		}
		HX_STACK_LINE(322)
		this->_sprite->addChild(this->_debRead);
		HX_STACK_LINE(323)
		this->_debRead->addChild(this->_debReadText0);
		HX_STACK_LINE(324)
		this->_debRead->addChild(this->_debReadText1);
		HX_STACK_LINE(325)
		::flash::text::TextFormat _g44 = this->format((int)16,(int)16777215,null());		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(325)
		this->_debReadText0->set_defaultTextFormat(_g44);
		HX_STACK_LINE(326)
		::flash::text::TextFormat _g45 = this->format((int)8,(int)16777215,null());		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(326)
		this->_debReadText1->set_defaultTextFormat(_g45);
		HX_STACK_LINE(331)
		this->_debReadText0->set_selectable(false);
		HX_STACK_LINE(332)
		this->_debReadText0->set_width((int)80);
		HX_STACK_LINE(333)
		this->_debReadText0->set_height((int)20);
		HX_STACK_LINE(334)
		this->_debReadText1->set_width((int)160);
		HX_STACK_LINE(335)
		int _g46 = this->get_height();		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(335)
		Float _g47 = (Float(_g46) / Float((int)4));		HX_STACK_VAR(_g47,"_g47");
		HX_STACK_LINE(335)
		int _g48 = ::Std_obj::_int(_g47);		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(335)
		this->_debReadText1->set_height(_g48);
		HX_STACK_LINE(336)
		this->_debReadText0->set_x((int)2);
		HX_STACK_LINE(337)
		this->_debReadText0->set_y((int)3);
		HX_STACK_LINE(338)
		this->_debReadText1->set_x((int)2);
		HX_STACK_LINE(339)
		this->_debReadText1->set_y((int)24);
		HX_STACK_LINE(340)
		this->_debReadText0->set_text(HX_CSTRING("DEBUG:"));
		HX_STACK_LINE(341)
		int _g49 = this->get_height();		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(341)
		Float _g50 = this->_debReadText1->get_y();		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(341)
		Float _g51 = this->_debReadText1->get_height();		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(341)
		Float _g52 = (_g50 + _g51);		HX_STACK_VAR(_g52,"_g52");
		HX_STACK_LINE(341)
		Float _g53 = (_g49 - _g52);		HX_STACK_VAR(_g53,"_g53");
		HX_STACK_LINE(341)
		this->_debRead->set_y(_g53);
		HX_STACK_LINE(344)
		this->_sprite->addChild(this->_butRead);
		HX_STACK_LINE(345)
		this->_butRead->addChild(this->_butDebug);
		HX_STACK_LINE(346)
		this->_butRead->addChild(this->_butOutput);
		HX_STACK_LINE(347)
		this->_butRead->addChild(this->_butPlay)->set_x((int)20);
		HX_STACK_LINE(348)
		this->_butRead->addChild(this->_butPause)->set_x((int)20);
		HX_STACK_LINE(349)
		this->_butRead->addChild(this->_butStep)->set_x((int)40);
		HX_STACK_LINE(350)
		this->updateButtons();
		HX_STACK_LINE(353)
		this->_butRead->get_graphics()->clear();
		HX_STACK_LINE(354)
		this->_butRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(358)
		this->_butRead->get_graphics()->drawRoundRect((int)-20,(int)-20,(int)100,(int)40,(int)40,(int)40);
		HX_STACK_LINE(360)
		this->set_debug(true);
		HX_STACK_LINE(363)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
		HX_STACK_LINE(364)
		this->onResize(null());
		HX_STACK_LINE(367)
		this->set_paused(false);
		HX_STACK_LINE(369)
		if (((trace_capture == ::com::haxepunk::debug::TraceCapture_obj::Yes))){
			HX_STACK_LINE(370)
			::haxe::Log_obj::trace = this->traceLog_dyn();
		}
		HX_STACK_LINE(372)
		this->LOG->push(HX_CSTRING("-- HaxePunk v2.6.0-dev --"));
		HX_STACK_LINE(373)
		if (((  ((this->_enabled)) ? bool(this->_sprite->get_visible()) : bool(false) ))){
			HX_STACK_LINE(373)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,enable,(void))

Void Console_obj::onResize( ::flash::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","onResize",0xf5dcbfde,"com.haxepunk.debug.Console.onResize","com/haxepunk/debug/Console.hx",377,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(378)
		if (((this->_back->bitmapData != null()))){
			HX_STACK_LINE(380)
			this->_back->bitmapData->dispose();
		}
		HX_STACK_LINE(382)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(382)
		int _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(382)
		::flash::display::BitmapData _g2 = ::com::haxepunk::HXP_obj::createBitmap(_g,_g1,true,(int)-1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(382)
		this->_back->set_bitmapData(_g2);
		HX_STACK_LINE(383)
		::com::haxepunk::HXP_obj::matrix->identity();
		HX_STACK_LINE(384)
		int _g3 = this->_back->bitmapData->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(384)
		Float _g4 = this->_bmpLogo->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(384)
		Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(384)
		Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(384)
		Float _g7 = ::Math_obj::max(_g6,(int)0);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(384)
		::com::haxepunk::HXP_obj::matrix->tx = _g7;
		HX_STACK_LINE(385)
		int _g8 = this->_back->bitmapData->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(385)
		Float _g9 = this->_bmpLogo->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(385)
		Float _g10 = (_g8 - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(385)
		Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(385)
		Float _g12 = ::Math_obj::max(_g11,(int)0);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(385)
		::com::haxepunk::HXP_obj::matrix->ty = _g12;
		HX_STACK_LINE(386)
		int _g13 = this->get_width();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(386)
		int _g14 = this->_back->bitmapData->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(386)
		Float _g15 = (Float(_g13) / Float(_g14));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(386)
		Float _g16 = ::Math_obj::min(_g15,(int)1);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(386)
		int _g17 = this->get_height();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(386)
		int _g18 = this->_back->bitmapData->get_height();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(386)
		Float _g19 = (Float(_g17) / Float(_g18));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(386)
		Float _g20 = ::Math_obj::min(_g19,(int)1);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(386)
		::com::haxepunk::HXP_obj::matrix->scale(_g16,_g20);
		HX_STACK_LINE(387)
		this->_back->bitmapData->draw(this->_bmpLogo,::com::haxepunk::HXP_obj::matrix,null(),::flash::display::BlendMode_obj::MULTIPLY,null(),null());
		HX_STACK_LINE(388)
		this->_back->bitmapData->draw(this->_back->bitmapData,null(),null(),::flash::display::BlendMode_obj::INVERT,null(),null());
		HX_STACK_LINE(389)
		::flash::geom::Rectangle _g21 = this->_back->bitmapData->get_rect();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(389)
		::flash::geom::ColorTransform _g22 = ::flash::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,0.5,null(),null(),null(),null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(389)
		this->_back->bitmapData->colorTransform(_g21,_g22);
		HX_STACK_LINE(390)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onResize,(void))

bool Console_obj::get_visible( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_visible",0x49539dfe,"com.haxepunk.debug.Console.get_visible","com/haxepunk/debug/Console.hx",397,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(397)
	return this->_sprite->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_visible,return )

bool Console_obj::set_visible( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_visible",0x53c0a50a,"com.haxepunk.debug.Console.set_visible","com/haxepunk/debug/Console.hx",399,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(400)
	this->_sprite->set_visible(value);
	HX_STACK_LINE(401)
	if (((bool(this->_enabled) && bool(value)))){
		HX_STACK_LINE(401)
		this->updateLog();
	}
	HX_STACK_LINE(402)
	return this->_sprite->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_visible,return )

bool Console_obj::set_debugDraw( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_debugDraw",0x572e528f,"com.haxepunk.debug.Console.set_debugDraw","com/haxepunk/debug/Console.hx",410,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(411)
	this->debugDraw = value;
	HX_STACK_LINE(412)
	this->updateEntityLists(false);
	HX_STACK_LINE(413)
	this->renderEntities();
	HX_STACK_LINE(414)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_debugDraw,return )

Void Console_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","update",0xb890b4b4,"com.haxepunk.debug.Console.update","com/haxepunk/debug/Console.hx",421,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		if (((bool(!(this->_enabled)) || bool(!(this->_visible))))){
			HX_STACK_LINE(424)
			return null();
		}
		HX_STACK_LINE(427)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(427)
		Float _g1 = this->_entReadText->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(427)
		Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(427)
		this->_entRead->set_x(_g2);
		HX_STACK_LINE(428)
		int _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(428)
		Float _g4 = this->_layerList->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(428)
		Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(428)
		Float _g6 = (_g5 - (int)20);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(428)
		this->_layerList->set_x(_g6);
		HX_STACK_LINE(429)
		int _g7 = this->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(429)
		Float _g8 = this->_layerList->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(429)
		Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(429)
		Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(429)
		this->_layerList->set_y(_g10);
		HX_STACK_LINE(430)
		this->_layerList->set_visible((bool(::com::haxepunk::HXP_obj::engine->paused) && bool(this->_debug)));
		HX_STACK_LINE(433)
		if ((this->_butRead->get_visible())){
			HX_STACK_LINE(434)
			this->updateButtons();
		}
		HX_STACK_LINE(437)
		if ((this->_paused)){
			HX_STACK_LINE(441)
			if ((this->_debug)){
				HX_STACK_LINE(443)
				this->updateEntityLists((::com::haxepunk::HXP_obj::engine->_scene->_update->length != this->ENTITY_LIST->length));
				HX_STACK_LINE(446)
				if ((::com::haxepunk::HXP_obj::engine->paused)){
					HX_STACK_LINE(449)
					if ((::com::haxepunk::utils::Input_obj::mousePressed)){
						HX_STACK_LINE(452)
						int _g11 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g11,"_g11");
						struct _Function_5_1{
							inline static bool Block( ::com::haxepunk::debug::Console_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/Console.hx",452,0xfa4cbb5c)
								{
									HX_STACK_LINE(452)
									int _g12 = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(452)
									Float _g13 = __this->_debReadText1->get_width();		HX_STACK_VAR(_g13,"_g13");
									struct _Function_6_1{
										inline static bool Block( ::com::haxepunk::debug::Console_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/Console.hx",452,0xfa4cbb5c)
											{
												HX_STACK_LINE(452)
												int _g14 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(452)
												Float _g15 = __this->_debRead->get_y();		HX_STACK_VAR(_g15,"_g15");
												HX_STACK_LINE(452)
												return (_g14 < _g15);
											}
											return null();
										}
									};
									HX_STACK_LINE(452)
									return (  ((!(((_g12 > _g13))))) ? bool(_Function_6_1::Block(__this)) : bool(true) );
								}
								return null();
							}
						};
						HX_STACK_LINE(452)
						if (((  (((_g11 > (int)20))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(454)
							::com::haxepunk::ds::Either _g16 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(454)
							if ((::com::haxepunk::utils::Input_obj::check(_g16))){
								HX_STACK_LINE(456)
								if (((this->SELECT_LIST->length != (int)0))){
									HX_STACK_LINE(456)
									this->startDragging();
								}
								else{
									HX_STACK_LINE(457)
									this->startPanning();
								}
							}
							else{
								HX_STACK_LINE(459)
								this->startSelection();
							}
						}
					}
					else{
						HX_STACK_LINE(465)
						if ((this->_selecting)){
							HX_STACK_LINE(465)
							this->updateSelection();
						}
						HX_STACK_LINE(466)
						if ((this->_dragging)){
							HX_STACK_LINE(466)
							this->updateDragging();
						}
						HX_STACK_LINE(467)
						if ((this->_panning)){
							HX_STACK_LINE(467)
							this->updatePanning();
						}
					}
					HX_STACK_LINE(471)
					::com::haxepunk::ds::Either _g17 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)65);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(471)
					if ((::com::haxepunk::utils::Input_obj::pressed(_g17))){
						HX_STACK_LINE(471)
						this->selectAll();
					}
					HX_STACK_LINE(474)
					::com::haxepunk::ds::Either _g18 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(474)
					if ((::com::haxepunk::utils::Input_obj::check(_g18))){
						HX_STACK_LINE(477)
						if (((this->SELECT_LIST->length != (int)0))){
							HX_STACK_LINE(480)
							::com::haxepunk::ds::Either _g19 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_CSTRING("_ARROWS"));		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(480)
							if ((::com::haxepunk::utils::Input_obj::pressed(_g19))){
								HX_STACK_LINE(480)
								this->updateKeyMoving();
							}
						}
						else{
							HX_STACK_LINE(485)
							::com::haxepunk::ds::Either _g20 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_CSTRING("_ARROWS"));		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(485)
							if ((::com::haxepunk::utils::Input_obj::check(_g20))){
								HX_STACK_LINE(485)
								this->updateKeyPanning();
							}
						}
					}
				}
				else{
					HX_STACK_LINE(492)
					this->renderEntities();
					HX_STACK_LINE(493)
					this->updateFPSRead();
					HX_STACK_LINE(494)
					this->updateEntityCount();
				}
				HX_STACK_LINE(498)
				this->updateDebugRead();
			}
			else{
				HX_STACK_LINE(503)
				if ((this->_scrolling)){
					HX_STACK_LINE(503)
					this->updateScrolling();
				}
				else{
					HX_STACK_LINE(504)
					if ((::com::haxepunk::utils::Input_obj::mousePressed)){
						HX_STACK_LINE(504)
						this->startScrolling();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(510)
			this->updateFPSRead();
			HX_STACK_LINE(511)
			this->updateEntityCount();
		}
		HX_STACK_LINE(515)
		::com::haxepunk::ds::Either _g21 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight(this->toggleKey);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(515)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g21))){
			HX_STACK_LINE(515)
			this->set_paused(!(this->_paused));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,update,(void))

bool Console_obj::get_paused( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_paused",0x174b10a2,"com.haxepunk.debug.Console.get_paused","com/haxepunk/debug/Console.hx",522,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(522)
	return this->_paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_paused,return )

bool Console_obj::set_paused( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_paused",0x1ac8af16,"com.haxepunk.debug.Console.set_paused","com/haxepunk/debug/Console.hx",524,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(526)
	if ((!(this->_enabled))){
		HX_STACK_LINE(526)
		return false;
	}
	HX_STACK_LINE(529)
	this->_paused = value;
	HX_STACK_LINE(530)
	::com::haxepunk::HXP_obj::engine->paused = value;
	HX_STACK_LINE(533)
	this->_back->set_visible(value);
	HX_STACK_LINE(534)
	this->_entScreen->set_visible(value);
	HX_STACK_LINE(536)
	this->_butRead->set_visible(value);
	HX_STACK_LINE(540)
	if ((value)){
		HX_STACK_LINE(543)
		if ((this->_debug)){
			HX_STACK_LINE(543)
			this->set_debug(true);
		}
		else{
			HX_STACK_LINE(544)
			this->updateLog();
		}
	}
	else{
		HX_STACK_LINE(549)
		this->_debRead->set_visible(false);
		HX_STACK_LINE(550)
		this->_logRead->set_visible(true);
		HX_STACK_LINE(551)
		this->updateLog();
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			Dynamic array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(552)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			Dynamic array = this->SCREEN_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(553)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			Dynamic array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(554)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
	}
	HX_STACK_LINE(556)
	return this->_paused;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_paused,return )

bool Console_obj::get_debug( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_debug",0x0af5bcdf,"com.haxepunk.debug.Console.get_debug","com/haxepunk/debug/Console.hx",563,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(563)
	return this->_debug;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_debug,return )

bool Console_obj::set_debug( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_debug",0xee46a8eb,"com.haxepunk.debug.Console.set_debug","com/haxepunk/debug/Console.hx",565,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(567)
	if ((!(this->_enabled))){
		HX_STACK_LINE(567)
		return false;
	}
	HX_STACK_LINE(570)
	this->_debug = value;
	HX_STACK_LINE(571)
	this->_debRead->set_visible(value);
	HX_STACK_LINE(572)
	this->_logRead->set_visible(!(value));
	HX_STACK_LINE(575)
	if ((value)){
		HX_STACK_LINE(575)
		this->updateEntityLists(null());
	}
	else{
		HX_STACK_LINE(576)
		this->updateLog();
	}
	HX_STACK_LINE(577)
	this->renderEntities();
	HX_STACK_LINE(578)
	return this->_debug;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_debug,return )

Void Console_obj::stepFrame( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","stepFrame",0x671c1b76,"com.haxepunk.debug.Console.stepFrame","com/haxepunk/debug/Console.hx",583,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(584)
		::com::haxepunk::HXP_obj::engine->update();
		HX_STACK_LINE(585)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(586)
		this->updateEntityCount();
		HX_STACK_LINE(587)
		this->updateEntityLists(null());
		HX_STACK_LINE(588)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,stepFrame,(void))

Void Console_obj::startDragging( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startDragging",0x67506c06,"com.haxepunk.debug.Console.startDragging","com/haxepunk/debug/Console.hx",593,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(594)
		this->_dragging = true;
		HX_STACK_LINE(595)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(595)
		this->_entRect->x = _g;
		HX_STACK_LINE(596)
		int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(596)
		this->_entRect->y = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startDragging,(void))

Void Console_obj::updateDragging( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateDragging",0xe96081a3,"com.haxepunk.debug.Console.updateDragging","com/haxepunk/debug/Console.hx",601,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(602)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(602)
		Float _g1 = (_g - this->_entRect->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(602)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(602)
		int _g3 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(602)
		Float _g4 = (_g3 - this->_entRect->y);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(602)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(602)
		this->moveSelected(_g2,_g5);
		HX_STACK_LINE(603)
		int _g6 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(603)
		this->_entRect->x = _g6;
		HX_STACK_LINE(604)
		int _g7 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(604)
		this->_entRect->y = _g7;
		HX_STACK_LINE(605)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(605)
			this->_dragging = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDragging,(void))

Void Console_obj::moveSelected( int xDelta,int yDelta){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","moveSelected",0x539ac377,"com.haxepunk.debug.Console.moveSelected","com/haxepunk/debug/Console.hx",610,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(611)
			Array< ::Dynamic > _g1 = this->SELECT_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(611)
			while((true)){
				HX_STACK_LINE(611)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(611)
					break;
				}
				HX_STACK_LINE(611)
				::com::haxepunk::Entity e = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(611)
				++(_g);
				HX_STACK_LINE(613)
				{
					HX_STACK_LINE(613)
					::com::haxepunk::Entity _g2 = e;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(613)
					_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + xDelta);
				}
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					::com::haxepunk::Entity _g2 = e;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(614)
					_g2->y = (((  ((_g2->followCamera)) ? Float((_g2->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g2->y) )) + yDelta);
				}
			}
		}
		HX_STACK_LINE(616)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(617)
		this->renderEntities();
		HX_STACK_LINE(618)
		this->updateEntityLists(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,moveSelected,(void))

Void Console_obj::startPanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startPanning",0x18bf2dba,"com.haxepunk.debug.Console.startPanning","com/haxepunk/debug/Console.hx",623,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(624)
		this->_panning = true;
		HX_STACK_LINE(625)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(625)
		this->_entRect->x = _g;
		HX_STACK_LINE(626)
		int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(626)
		this->_entRect->y = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startPanning,(void))

Void Console_obj::updatePanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updatePanning",0x8f927abd,"com.haxepunk.debug.Console.updatePanning","com/haxepunk/debug/Console.hx",631,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(632)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(632)
			this->_panning = false;
		}
		HX_STACK_LINE(633)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(633)
		Float _g1 = (this->_entRect->x - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(633)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(633)
		int _g3 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(633)
		Float _g4 = (this->_entRect->y - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(633)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(633)
		this->panCamera(_g2,_g5);
		HX_STACK_LINE(634)
		int _g6 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(634)
		this->_entRect->x = _g6;
		HX_STACK_LINE(635)
		int _g7 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(635)
		this->_entRect->y = _g7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updatePanning,(void))

Void Console_obj::panCamera( int xDelta,int yDelta){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","panCamera",0xb041fe17,"com.haxepunk.debug.Console.panCamera","com/haxepunk/debug/Console.hx",640,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(641)
		hx::AddEq(::com::haxepunk::HXP_obj::camera->x,xDelta);
		HX_STACK_LINE(642)
		hx::AddEq(::com::haxepunk::HXP_obj::camera->y,yDelta);
		HX_STACK_LINE(643)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(644)
		this->updateEntityLists(true);
		HX_STACK_LINE(645)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,panCamera,(void))

Void Console_obj::setCamera( int x,int y){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","setCamera",0x0760ca1c,"com.haxepunk.debug.Console.setCamera","com/haxepunk/debug/Console.hx",650,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(651)
		::com::haxepunk::HXP_obj::camera->x = x;
		HX_STACK_LINE(652)
		::com::haxepunk::HXP_obj::camera->y = y;
		HX_STACK_LINE(653)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(654)
		this->updateEntityLists(true);
		HX_STACK_LINE(655)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,setCamera,(void))

Void Console_obj::startSelection( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startSelection",0x2a001935,"com.haxepunk.debug.Console.startSelection","com/haxepunk/debug/Console.hx",660,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(661)
		this->_selecting = true;
		HX_STACK_LINE(662)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(662)
		this->_entRect->x = _g;
		HX_STACK_LINE(663)
		int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(663)
		this->_entRect->y = _g1;
		HX_STACK_LINE(664)
		this->_entRect->width = (int)0;
		HX_STACK_LINE(665)
		this->_entRect->height = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startSelection,(void))

Void Console_obj::updateSelection( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateSelection",0x7602ecf8,"com.haxepunk.debug.Console.updateSelection","com/haxepunk/debug/Console.hx",670,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(671)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(671)
		Float _g1 = (_g - this->_entRect->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(671)
		this->_entRect->width = _g1;
		HX_STACK_LINE(672)
		int _g2 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(672)
		Float _g3 = (_g2 - this->_entRect->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(672)
		this->_entRect->height = _g3;
		HX_STACK_LINE(673)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(675)
			this->selectEntities(this->_entRect);
			HX_STACK_LINE(676)
			this->renderEntities();
			HX_STACK_LINE(677)
			this->_selecting = false;
			HX_STACK_LINE(678)
			this->_entSelect->get_graphics()->clear();
		}
		else{
			HX_STACK_LINE(682)
			this->_entSelect->get_graphics()->clear();
			HX_STACK_LINE(683)
			this->_entSelect->get_graphics()->lineStyle((int)1,(int)16777215,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(684)
			this->_entSelect->get_graphics()->drawRect(this->_entRect->x,this->_entRect->y,this->_entRect->width,this->_entRect->height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateSelection,(void))

Void Console_obj::selectEntities( ::flash::geom::Rectangle rect){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","selectEntities",0x68721b08,"com.haxepunk.debug.Console.selectEntities","com/haxepunk/debug/Console.hx",690,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(691)
		if (((rect->width < (int)0))){
			HX_STACK_LINE(691)
			Float _g = rect->width = -(rect->width);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(691)
			hx::SubEq(rect->x,_g);
		}
		else{
			HX_STACK_LINE(692)
			if (((rect->width == (int)0))){
				HX_STACK_LINE(692)
				rect->width = (int)1;
			}
		}
		HX_STACK_LINE(693)
		if (((rect->height < (int)0))){
			HX_STACK_LINE(693)
			Float _g1 = rect->height = -(rect->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(693)
			hx::SubEq(rect->y,_g1);
		}
		else{
			HX_STACK_LINE(694)
			if (((rect->height == (int)0))){
				HX_STACK_LINE(694)
				rect->height = (int)1;
			}
		}
		HX_STACK_LINE(696)
		Float _g2 = ::com::haxepunk::HXP_obj::rect->height = (int)6;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(696)
		::com::haxepunk::HXP_obj::rect->width = _g2;
		HX_STACK_LINE(697)
		Float sx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(698)
		Float sy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(697)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(701)
		::com::haxepunk::ds::Either _g3 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)17);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(701)
		if ((!(::com::haxepunk::utils::Input_obj::check(_g3)))){
			HX_STACK_LINE(704)
			Dynamic array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(704)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(707)
		{
			HX_STACK_LINE(707)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(707)
			Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(707)
			while((true)){
				HX_STACK_LINE(707)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(707)
					break;
				}
				HX_STACK_LINE(707)
				::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(707)
				++(_g);
				HX_STACK_LINE(709)
				::com::haxepunk::HXP_obj::rect->x = ((((((  ((e1->followCamera)) ? Float((e1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e1->x) )) - ::com::haxepunk::HXP_obj::camera->x)) * sx) - (int)3);
				HX_STACK_LINE(710)
				::com::haxepunk::HXP_obj::rect->y = ((((((  ((e1->followCamera)) ? Float((e1->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e1->y) )) - ::com::haxepunk::HXP_obj::camera->y)) * sy) - (int)3);
				HX_STACK_LINE(711)
				if ((rect->intersects(::com::haxepunk::HXP_obj::rect))){
					HX_STACK_LINE(713)
					int _g4 = this->SELECT_LIST->indexOf(e1,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(713)
					if (((_g4 < (int)0))){
						HX_STACK_LINE(715)
						this->SELECT_LIST->push(e1);
					}
					else{
						HX_STACK_LINE(719)
						this->SELECT_LIST->remove(e1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,selectEntities,(void))

Void Console_obj::selectAll( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","selectAll",0x7e29a9ba,"com.haxepunk.debug.Console.selectAll","com/haxepunk/debug/Console.hx",727,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(729)
		int numSelected = this->SELECT_LIST->length;		HX_STACK_VAR(numSelected,"numSelected");
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			Dynamic array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(730)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(733)
		if (((numSelected != this->SCREEN_LIST->length))){
			HX_STACK_LINE(735)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(735)
			Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(735)
			while((true)){
				HX_STACK_LINE(735)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(735)
					break;
				}
				HX_STACK_LINE(735)
				::com::haxepunk::Entity e = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(735)
				++(_g);
				HX_STACK_LINE(735)
				this->SELECT_LIST->push(e);
			}
		}
		HX_STACK_LINE(737)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,selectAll,(void))

Void Console_obj::startScrolling( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startScrolling",0xd9ff1bde,"com.haxepunk.debug.Console.startScrolling","com/haxepunk/debug/Console.hx",743,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(743)
		if (((this->LOG->length > this->_logLines))){
			HX_STACK_LINE(743)
			int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(743)
			int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(743)
			bool _g2 = this->_logBarGlobal->contains(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(743)
			this->_scrolling = _g2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startScrolling,(void))

Void Console_obj::updateScrolling( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateScrolling",0x2601efa1,"com.haxepunk.debug.Console.updateScrolling","com/haxepunk/debug/Console.hx",748,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(749)
		this->_scrolling = ::com::haxepunk::utils::Input_obj::mouseDown;
		HX_STACK_LINE(750)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(750)
		Float _g1 = this->_logBarGlobal->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(750)
		Float _g2 = ::com::haxepunk::HXP_obj::scaleClamp(_g,this->_logBarGlobal->y,_g1,(int)0,(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(750)
		this->_logScroll = _g2;
		HX_STACK_LINE(751)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateScrolling,(void))

Void Console_obj::updateKeyMoving( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateKeyMoving",0x4c9f6639,"com.haxepunk.debug.Console.updateKeyMoving","com/haxepunk/debug/Console.hx",756,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(757)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(757)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(757)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g))){
			HX_STACK_LINE(757)
			_g1 = (int)1;
		}
		else{
			HX_STACK_LINE(757)
			_g1 = (int)0;
		}
		HX_STACK_LINE(757)
		::com::haxepunk::ds::Either _g2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(757)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(757)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g2))){
			HX_STACK_LINE(757)
			_g3 = (int)1;
		}
		else{
			HX_STACK_LINE(757)
			_g3 = (int)0;
		}
		HX_STACK_LINE(757)
		int _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(757)
		::com::haxepunk::HXP_obj::point->x = _g4;
		HX_STACK_LINE(758)
		::com::haxepunk::ds::Either _g5 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)40);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(758)
		int _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(758)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g5))){
			HX_STACK_LINE(758)
			_g6 = (int)1;
		}
		else{
			HX_STACK_LINE(758)
			_g6 = (int)0;
		}
		HX_STACK_LINE(758)
		::com::haxepunk::ds::Either _g7 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(758)
		int _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(758)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g7))){
			HX_STACK_LINE(758)
			_g8 = (int)1;
		}
		else{
			HX_STACK_LINE(758)
			_g8 = (int)0;
		}
		HX_STACK_LINE(758)
		int _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(758)
		::com::haxepunk::HXP_obj::point->y = _g9;
		HX_STACK_LINE(759)
		if (((bool((::com::haxepunk::HXP_obj::point->x != (int)0)) || bool((::com::haxepunk::HXP_obj::point->y != (int)0))))){
			HX_STACK_LINE(759)
			int _g10 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(759)
			int _g11 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->y);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(759)
			this->moveSelected(_g10,_g11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyMoving,(void))

Void Console_obj::updateKeyPanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateKeyPanning",0x0ab10b06,"com.haxepunk.debug.Console.updateKeyPanning","com/haxepunk/debug/Console.hx",764,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(765)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(765)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(765)
		if ((::com::haxepunk::utils::Input_obj::check(_g))){
			HX_STACK_LINE(765)
			_g1 = (int)1;
		}
		else{
			HX_STACK_LINE(765)
			_g1 = (int)0;
		}
		HX_STACK_LINE(765)
		::com::haxepunk::ds::Either _g2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(765)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(765)
		if ((::com::haxepunk::utils::Input_obj::check(_g2))){
			HX_STACK_LINE(765)
			_g3 = (int)1;
		}
		else{
			HX_STACK_LINE(765)
			_g3 = (int)0;
		}
		HX_STACK_LINE(765)
		int _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(765)
		::com::haxepunk::HXP_obj::point->x = _g4;
		HX_STACK_LINE(766)
		::com::haxepunk::ds::Either _g5 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)40);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(766)
		int _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(766)
		if ((::com::haxepunk::utils::Input_obj::check(_g5))){
			HX_STACK_LINE(766)
			_g6 = (int)1;
		}
		else{
			HX_STACK_LINE(766)
			_g6 = (int)0;
		}
		HX_STACK_LINE(766)
		::com::haxepunk::ds::Either _g7 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(766)
		int _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(766)
		if ((::com::haxepunk::utils::Input_obj::check(_g7))){
			HX_STACK_LINE(766)
			_g8 = (int)1;
		}
		else{
			HX_STACK_LINE(766)
			_g8 = (int)0;
		}
		HX_STACK_LINE(766)
		int _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(766)
		::com::haxepunk::HXP_obj::point->y = _g9;
		HX_STACK_LINE(767)
		if (((bool((::com::haxepunk::HXP_obj::point->x != (int)0)) || bool((::com::haxepunk::HXP_obj::point->y != (int)0))))){
			HX_STACK_LINE(767)
			int _g10 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(767)
			int _g11 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->y);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(767)
			this->panCamera(_g10,_g11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyPanning,(void))

Void Console_obj::updateEntityLists( hx::Null< bool >  __o_fetchList){
bool fetchList = __o_fetchList.Default(true);
	HX_STACK_FRAME("com.haxepunk.debug.Console","updateEntityLists",0x6d3f4bde,"com.haxepunk.debug.Console.updateEntityLists","com/haxepunk/debug/Console.hx",772,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fetchList,"fetchList")
{
		HX_STACK_LINE(774)
		if ((fetchList)){
			HX_STACK_LINE(776)
			{
				HX_STACK_LINE(776)
				Dynamic array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(776)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
			HX_STACK_LINE(777)
			::com::haxepunk::HXP_obj::engine->_scene->getAll(this->ENTITY_LIST);
			HX_STACK_LINE(779)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->LAYER_LIST->keys());  __it->hasNext(); ){
				int key = __it->next();
				this->LAYER_LIST->set(key,(int)0);
			}
		}
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			Dynamic array = this->SCREEN_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(786)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(787)
		{
			HX_STACK_LINE(787)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(787)
			Array< ::Dynamic > _g1 = this->ENTITY_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(787)
			while((true)){
				HX_STACK_LINE(787)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(787)
					break;
				}
				HX_STACK_LINE(787)
				::com::haxepunk::Entity e = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(787)
				++(_g);
				HX_STACK_LINE(789)
				int layer = e->_layer;		HX_STACK_VAR(layer,"layer");
				struct _Function_3_1{
					inline static bool Block( int &layer){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/Console.hx",790,0xfa4cbb5c)
						{
							HX_STACK_LINE(790)
							::com::haxepunk::Scene _this = ::com::haxepunk::HXP_obj::engine->_scene;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(790)
							return (  ((!((!(_this->_layerDisplay->exists(layer)))))) ? bool(_this->_layerDisplay->get(layer)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(790)
				if (((  (((  (((e->_scene == null()))) ? bool(false) : bool(e->collideRect((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),e->_scene->camera->x,e->_scene->camera->y,::com::haxepunk::HXP_obj::width,::com::haxepunk::HXP_obj::height)) ))) ? bool(_Function_3_1::Block(layer)) : bool(false) ))){
					HX_STACK_LINE(791)
					this->SCREEN_LIST->push(e);
				}
				HX_STACK_LINE(793)
				if ((fetchList)){
					HX_STACK_LINE(794)
					int _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(794)
					if ((this->LAYER_LIST->exists(layer))){
						HX_STACK_LINE(794)
						Dynamic _g2 = this->LAYER_LIST->get(layer);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(794)
						_g11 = (_g2 + (int)1);
					}
					else{
						HX_STACK_LINE(794)
						_g11 = (int)1;
					}
					HX_STACK_LINE(794)
					this->LAYER_LIST->set(layer,_g11);
				}
			}
		}
		HX_STACK_LINE(797)
		if ((fetchList)){
			HX_STACK_LINE(799)
			this->_layerList->set(this->LAYER_LIST);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,updateEntityLists,(void))

Void Console_obj::renderEntities( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","renderEntities",0x83175562,"com.haxepunk.debug.Console.renderEntities","com/haxepunk/debug/Console.hx",805,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(806)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(808)
		this->_entScreen->set_visible(this->_debug);
		HX_STACK_LINE(809)
		if ((this->_debug)){
			HX_STACK_LINE(811)
			::flash::display::Graphics g = this->_entScreen->get_graphics();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(812)
			Float sx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(813)
			Float sy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(814)
			int colorHitbox = (int)16777215;		HX_STACK_VAR(colorHitbox,"colorHitbox");
			HX_STACK_LINE(815)
			int colorPosition = (int)16777215;		HX_STACK_VAR(colorPosition,"colorPosition");
			HX_STACK_LINE(816)
			g->clear();
			HX_STACK_LINE(817)
			{
				HX_STACK_LINE(817)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(817)
				Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(817)
				while((true)){
					HX_STACK_LINE(817)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(817)
						break;
					}
					HX_STACK_LINE(817)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(817)
					++(_g);
					HX_STACK_LINE(819)
					Float graphicScrollX;		HX_STACK_VAR(graphicScrollX,"graphicScrollX");
					HX_STACK_LINE(819)
					if (((e1->_graphic != null()))){
						HX_STACK_LINE(819)
						graphicScrollX = e1->_graphic->scrollX;
					}
					else{
						HX_STACK_LINE(819)
						graphicScrollX = (int)1;
					}
					HX_STACK_LINE(820)
					Float graphicScrollY;		HX_STACK_VAR(graphicScrollY,"graphicScrollY");
					HX_STACK_LINE(820)
					if (((e1->_graphic != null()))){
						HX_STACK_LINE(820)
						graphicScrollY = e1->_graphic->scrollY;
					}
					else{
						HX_STACK_LINE(820)
						graphicScrollY = (int)1;
					}
					HX_STACK_LINE(823)
					int _g2 = this->SELECT_LIST->indexOf(e1,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(823)
					if (((_g2 < (int)0))){
						HX_STACK_LINE(825)
						colorHitbox = (int)16711680;
						HX_STACK_LINE(826)
						colorPosition = (int)65280;
					}
					else{
						HX_STACK_LINE(830)
						colorHitbox = (int)16777215;
						HX_STACK_LINE(831)
						colorPosition = (int)16777215;
					}
					HX_STACK_LINE(835)
					if (((bool((e1->width != (int)0)) && bool((e1->height != (int)0))))){
						HX_STACK_LINE(837)
						g->lineStyle((int)1,colorHitbox,null(),null(),null(),null(),null(),null());
						HX_STACK_LINE(838)
						g->drawRect(((((((  ((e1->followCamera)) ? Float((e1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e1->x) )) - e1->originX) - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx),((((((  ((e1->followCamera)) ? Float((e1->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e1->y) )) - e1->originY) - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy),(e1->width * sx),(e1->height * sy));
						HX_STACK_LINE(840)
						if (((bool(this->debugDraw) && bool((e1->_mask != null()))))){
							HX_STACK_LINE(842)
							g->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
							HX_STACK_LINE(843)
							e1->_mask->debugDraw(g,sx,sy);
						}
					}
					HX_STACK_LINE(846)
					g->lineStyle((int)1,colorPosition,null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(847)
					g->drawCircle((((((  ((e1->followCamera)) ? Float((e1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e1->x) )) - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx),(((((  ((e1->followCamera)) ? Float((e1->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e1->y) )) - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy),(int)3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,renderEntities,(void))

Void Console_obj::updateLog( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateLog",0x730c4030,"com.haxepunk.debug.Console.updateLog","com/haxepunk/debug/Console.hx",854,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(855)
		int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(855)
		int _g1 = (_g - (int)60);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(855)
		this->_logHeight = _g1;
		HX_STACK_LINE(856)
		this->_logBar->height = (this->_logHeight - (int)8);
		HX_STACK_LINE(859)
		if ((this->_paused)){
			HX_STACK_LINE(862)
			this->_logRead->set_y((int)40);
			HX_STACK_LINE(863)
			this->_logRead->get_graphics()->clear();
			HX_STACK_LINE(864)
			this->_logRead->get_graphics()->beginFill((int)0,.75);
			HX_STACK_LINE(868)
			Float _g2 = this->_logReadText0->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(868)
			Float _g3 = (_g2 - (int)20);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(868)
			this->_logRead->get_graphics()->drawRect((int)0,(int)0,_g3,(int)20);
			HX_STACK_LINE(869)
			Float _g4 = this->_logReadText0->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(869)
			this->_logRead->get_graphics()->moveTo(_g4,(int)20);
			HX_STACK_LINE(870)
			Float _g5 = this->_logReadText0->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(870)
			Float _g6 = (_g5 - (int)20);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(870)
			this->_logRead->get_graphics()->lineTo(_g6,(int)20);
			HX_STACK_LINE(871)
			Float _g7 = this->_logReadText0->get_width();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(871)
			Float _g8 = (_g7 - (int)20);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(871)
			this->_logRead->get_graphics()->lineTo(_g8,(int)0);
			HX_STACK_LINE(872)
			Float _g9 = this->_logReadText0->get_width();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(872)
			Float _g10 = this->_logReadText0->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(872)
			this->_logRead->get_graphics()->curveTo(_g9,(int)0,_g10,(int)20);
			HX_STACK_LINE(874)
			int _g11 = this->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(874)
			this->_logRead->get_graphics()->drawRect((int)0,(int)20,_g11,this->_logHeight);
			HX_STACK_LINE(877)
			this->_logRead->get_graphics()->beginFill((int)2105376,(int)1);
			HX_STACK_LINE(881)
			this->_logRead->get_graphics()->drawRoundRect(this->_logBar->x,this->_logBar->y,this->_logBar->width,this->_logBar->height,(int)16,(int)16);
			HX_STACK_LINE(885)
			if (((this->LOG->length > this->_logLines))){
				HX_STACK_LINE(888)
				this->_logRead->get_graphics()->beginFill((int)16777215,(int)1);
				HX_STACK_LINE(889)
				int y = ::Std_obj::_int(((this->_logBar->y + (int)2) + (((this->_logBar->height - (int)16)) * this->_logScroll)));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(893)
				this->_logRead->get_graphics()->drawRoundRect((this->_logBar->x + (int)2),y,(int)12,(int)12,(int)12,(int)12);
			}
			HX_STACK_LINE(898)
			if (((this->LOG->length != (int)0))){
				HX_STACK_LINE(900)
				int i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(900)
				if (((this->LOG->length > this->_logLines))){
					HX_STACK_LINE(900)
					int _g12 = ::Math_obj::round((((this->LOG->length - this->_logLines)) * this->_logScroll));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(900)
					i = ::Std_obj::_int(_g12);
				}
				else{
					HX_STACK_LINE(900)
					i = (int)0;
				}
				HX_STACK_LINE(901)
				Float _g13 = ::Math_obj::min(this->_logLines,this->LOG->length);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(901)
				Float _g14 = (i + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(901)
				int n = ::Std_obj::_int(_g14);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(902)
				::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(903)
				while((true)){
					HX_STACK_LINE(903)
					if ((!(((i < n))))){
						HX_STACK_LINE(903)
						break;
					}
					HX_STACK_LINE(903)
					int _g15 = (i)++;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(903)
					::String _g16 = this->LOG->__get(_g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(903)
					::String _g17 = (_g16 + HX_CSTRING("\n"));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(903)
					hx::AddEq(s,_g17);
				}
				HX_STACK_LINE(904)
				this->_logReadText1->set_text(s);
			}
			else{
				HX_STACK_LINE(906)
				this->_logReadText1->set_text(HX_CSTRING(""));
			}
			HX_STACK_LINE(909)
			this->_logReadText1->set_height(this->_logHeight);
			HX_STACK_LINE(910)
			this->_logReadText1->set_x((int)32);
			HX_STACK_LINE(911)
			this->_logReadText1->set_y((int)24);
			HX_STACK_LINE(914)
			this->_fpsReadText->set_selectable(true);
			HX_STACK_LINE(915)
			this->_fpsInfoText0->set_selectable(true);
			HX_STACK_LINE(916)
			this->_fpsInfoText1->set_selectable(true);
			HX_STACK_LINE(917)
			this->_memReadText->set_selectable(true);
			HX_STACK_LINE(918)
			this->_entReadText->set_selectable(true);
			HX_STACK_LINE(919)
			this->_debReadText1->set_selectable(true);
		}
		else{
			HX_STACK_LINE(924)
			int _g18 = this->get_height();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(924)
			int _g19 = (_g18 - (int)40);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(924)
			this->_logRead->set_y(_g19);
			HX_STACK_LINE(925)
			this->_logReadText1->set_height((int)20);
			HX_STACK_LINE(926)
			this->_logRead->get_graphics()->clear();
			HX_STACK_LINE(927)
			this->_logRead->get_graphics()->beginFill((int)0,.75);
			HX_STACK_LINE(931)
			Float _g20 = this->_logReadText0->get_width();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(931)
			Float _g21 = (_g20 - (int)20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(931)
			this->_logRead->get_graphics()->drawRect((int)0,(int)0,_g21,(int)20);
			HX_STACK_LINE(932)
			Float _g22 = this->_logReadText0->get_width();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(932)
			this->_logRead->get_graphics()->moveTo(_g22,(int)20);
			HX_STACK_LINE(933)
			Float _g23 = this->_logReadText0->get_width();		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(933)
			Float _g24 = (_g23 - (int)20);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(933)
			this->_logRead->get_graphics()->lineTo(_g24,(int)20);
			HX_STACK_LINE(934)
			Float _g25 = this->_logReadText0->get_width();		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(934)
			Float _g26 = (_g25 - (int)20);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(934)
			this->_logRead->get_graphics()->lineTo(_g26,(int)0);
			HX_STACK_LINE(935)
			Float _g27 = this->_logReadText0->get_width();		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(935)
			Float _g28 = this->_logReadText0->get_width();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(935)
			this->_logRead->get_graphics()->curveTo(_g27,(int)0,_g28,(int)20);
			HX_STACK_LINE(937)
			int _g29 = this->get_width();		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(937)
			this->_logRead->get_graphics()->drawRect((int)0,(int)20,_g29,(int)20);
			HX_STACK_LINE(940)
			this->_logReadText1->set_text((  (((this->LOG->length != (int)0))) ? ::String(this->LOG->__get((this->LOG->length - (int)1))) : ::String(HX_CSTRING("")) ));
			HX_STACK_LINE(941)
			this->_logReadText1->set_x((int)2);
			HX_STACK_LINE(942)
			this->_logReadText1->set_y((int)21);
			HX_STACK_LINE(945)
			this->_logReadText1->set_selectable(false);
			HX_STACK_LINE(946)
			this->_fpsReadText->set_selectable(false);
			HX_STACK_LINE(947)
			this->_fpsInfoText0->set_selectable(false);
			HX_STACK_LINE(948)
			this->_fpsInfoText1->set_selectable(false);
			HX_STACK_LINE(949)
			this->_memReadText->set_selectable(false);
			HX_STACK_LINE(950)
			this->_entReadText->set_selectable(false);
			HX_STACK_LINE(951)
			this->_debReadText0->set_selectable(false);
			HX_STACK_LINE(952)
			this->_debReadText1->set_selectable(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateLog,(void))

Void Console_obj::updateFPSRead( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateFPSRead",0x8553fd8b,"com.haxepunk.debug.Console.updateFPSRead","com/haxepunk/debug/Console.hx",958,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(959)
		int _g = ::Std_obj::_int(::com::haxepunk::HXP_obj::frameRate);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(959)
		::String _g1 = (HX_CSTRING("FPS: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(959)
		this->_fpsReadText->set_text(_g1);
		HX_STACK_LINE(961)
		::String _g2 = ::Std_obj::string(::com::haxepunk::HXP_obj::_updateTime);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(961)
		::String _g3 = (HX_CSTRING("Update: ") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(961)
		::String _g4 = (_g3 + HX_CSTRING("ms\n"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(961)
		::String _g5 = (_g4 + HX_CSTRING("Render: "));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(962)
		::String _g6 = ::Std_obj::string(::com::haxepunk::HXP_obj::_renderTime);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(961)
		::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(961)
		::String _g8 = (_g7 + HX_CSTRING("ms"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(960)
		this->_fpsInfoText0->set_text(_g8);
		HX_STACK_LINE(964)
		::String _g9 = ::Std_obj::string(::com::haxepunk::HXP_obj::_systemTime);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(964)
		::String _g10 = (HX_CSTRING("System: ") + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(964)
		::String _g11 = (_g10 + HX_CSTRING("ms\n"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(964)
		::String _g12 = (_g11 + HX_CSTRING("Game: "));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(965)
		::String _g13 = ::Std_obj::string(::com::haxepunk::HXP_obj::_gameTime);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(964)
		::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(964)
		::String _g15 = (_g14 + HX_CSTRING("ms"));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(963)
		this->_fpsInfoText1->set_text(_g15);
		HX_STACK_LINE(967)
		int _g16 = this->get_width();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(967)
		::String _g17;		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(967)
		if (((_g16 >= (int)420))){
			HX_STACK_LINE(967)
			_g17 = HX_CSTRING("Mem: ");
		}
		else{
			HX_STACK_LINE(967)
			_g17 = HX_CSTRING("");
		}
		HX_STACK_LINE(967)
		Float _g21;		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(967)
			int _g18 = ::flash::system::System_obj::get_totalMemory();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(967)
			Float _g19 = (Float(_g18) / Float((int)1024));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(967)
			Float num = (Float(_g19) / Float((int)1024));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(967)
			Float exp = ::Math_obj::pow((int)10,(int)2);		HX_STACK_VAR(exp,"exp");
			HX_STACK_LINE(967)
			int _g20 = ::Math_obj::round((num * exp));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(967)
			_g21 = (Float(_g20) / Float(exp));
		}
		HX_STACK_LINE(967)
		::String _g22 = (_g17 + _g21);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(967)
		::String _g23 = (_g22 + HX_CSTRING("MB"));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(966)
		this->_memReadText->set_text(_g23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateFPSRead,(void))

Void Console_obj::updateDebugRead( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateDebugRead",0x16dae3f5,"com.haxepunk.debug.Console.updateDebugRead","com/haxepunk/debug/Console.hx",972,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(973)
		::String str;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(975)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(975)
		bool big = (_g >= (int)420);		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(979)
		int _g1 = ::com::haxepunk::HXP_obj::screen->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(979)
		Float _g2 = (_g1 + ::com::haxepunk::HXP_obj::engine->_scene->camera->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(979)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(979)
		::String _g4 = ::Std_obj::string(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(979)
		::String _g5 = (HX_CSTRING("Mouse: ") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(979)
		::String _g6 = (_g5 + HX_CSTRING(", "));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(979)
		int _g7 = ::com::haxepunk::HXP_obj::screen->get_mouseY();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(979)
		Float _g8 = (_g7 + ::com::haxepunk::HXP_obj::engine->_scene->camera->y);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(979)
		int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(979)
		::String _g10 = ::Std_obj::string(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(979)
		::String _g11 = (_g6 + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(979)
		::String _g12 = (_g11 + HX_CSTRING("\nCamera: "));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(980)
		::String _g13 = ::Std_obj::string(::com::haxepunk::HXP_obj::camera->x);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(979)
		::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(979)
		::String _g15 = (_g14 + HX_CSTRING(", "));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(980)
		::String _g16 = ::Std_obj::string(::com::haxepunk::HXP_obj::camera->y);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(979)
		::String s = (_g15 + _g16);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(981)
		if (((this->SELECT_LIST->length != (int)0))){
			HX_STACK_LINE(983)
			if (((this->SELECT_LIST->length > (int)1))){
				HX_STACK_LINE(985)
				::String _g17 = ::Std_obj::string(this->SELECT_LIST->length);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(985)
				::String _g18 = (HX_CSTRING("\n\nSelected: ") + _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(985)
				hx::AddEq(s,_g18);
			}
			else{
				HX_STACK_LINE(989)
				::com::haxepunk::Entity e = this->SELECT_LIST->__get((int)0).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(990)
				::Class _g19 = ::Type_obj::getClass(e);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(990)
				::String _g20 = ::Type_obj::getClassName(_g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(990)
				::String _g21 = (HX_CSTRING("\n\n- ") + _g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(990)
				::String _g22 = (_g21 + HX_CSTRING(" -\n"));		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(990)
				hx::AddEq(s,_g22);
				HX_STACK_LINE(991)
				{
					HX_STACK_LINE(991)
					int _g17 = (int)0;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(991)
					Array< ::String > _g18 = this->WATCH_LIST;		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(991)
					while((true)){
						HX_STACK_LINE(991)
						if ((!(((_g17 < _g18->length))))){
							HX_STACK_LINE(991)
							break;
						}
						HX_STACK_LINE(991)
						::String str1 = _g18->__get(_g17);		HX_STACK_VAR(str1,"str1");
						HX_STACK_LINE(991)
						++(_g17);
						HX_STACK_LINE(996)
						Dynamic field = ::Reflect_obj::field(e,str1);		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(998)
						if (((field != null()))){
							HX_STACK_LINE(1000)
							::String _g23 = ::Std_obj::string(field);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(1000)
							::String _g24 = (((HX_CSTRING("\n") + str1) + HX_CSTRING(": ")) + _g23);		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(1000)
							hx::AddEq(s,_g24);
						}
					}
				}
			}
		}
		HX_STACK_LINE(1007)
		this->_debReadText1->set_text(s);
		HX_STACK_LINE(1008)
		::flash::text::TextFormat _g25 = this->format((  ((big)) ? int((int)16) : int((int)8) ),null(),null());		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(1008)
		this->_debReadText1->setTextFormat(_g25,null(),null());
		HX_STACK_LINE(1009)
		Float _g26 = this->_debReadText1->get_textWidth();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(1009)
		Float _g27 = (_g26 + (int)4);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(1009)
		Float _g28 = this->_debReadText0->get_width();		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(1009)
		Float _g29 = ::Math_obj::max(_g27,_g28);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(1009)
		this->_debReadText1->set_width(_g29);
		HX_STACK_LINE(1010)
		Float _g30 = this->_debReadText1->get_y();		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(1010)
		Float _g31 = this->_debReadText1->get_textHeight();		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(1010)
		Float _g32 = (_g30 + _g31);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(1010)
		Float _g33 = (_g32 + (int)4);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(1010)
		this->_debReadText1->set_height(_g33);
		HX_STACK_LINE(1013)
		int _g34 = this->get_height();		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(1013)
		Float _g35 = this->_debReadText1->get_height();		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(1013)
		Float _g36 = (_g34 - _g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(1013)
		int _g37 = ::Std_obj::_int(_g36);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(1013)
		this->_debRead->set_y(_g37);
		HX_STACK_LINE(1014)
		this->_debRead->get_graphics()->clear();
		HX_STACK_LINE(1015)
		this->_debRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(1020)
		Float _g38 = this->_debReadText0->get_width();		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(1020)
		Float _g39 = (_g38 - (int)20);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(1020)
		this->_debRead->get_graphics()->drawRect((int)0,(int)0,_g39,(int)20);
		HX_STACK_LINE(1021)
		Float _g40 = this->_debReadText0->get_width();		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(1021)
		this->_debRead->get_graphics()->moveTo(_g40,(int)20);
		HX_STACK_LINE(1022)
		Float _g41 = this->_debReadText0->get_width();		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(1022)
		Float _g42 = (_g41 - (int)20);		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(1022)
		this->_debRead->get_graphics()->lineTo(_g42,(int)20);
		HX_STACK_LINE(1023)
		Float _g43 = this->_debReadText0->get_width();		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(1023)
		Float _g44 = (_g43 - (int)20);		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(1023)
		this->_debRead->get_graphics()->lineTo(_g44,(int)0);
		HX_STACK_LINE(1024)
		Float _g45 = this->_debReadText0->get_width();		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(1024)
		Float _g46 = this->_debReadText0->get_width();		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(1024)
		this->_debRead->get_graphics()->curveTo(_g45,(int)0,_g46,(int)20);
		HX_STACK_LINE(1025)
		Float _g47 = this->_debReadText1->get_width();		HX_STACK_VAR(_g47,"_g47");
		HX_STACK_LINE(1025)
		Float _g48 = (_g47 + (int)40);		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(1025)
		int _g49 = this->get_height();		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(1025)
		Float _g50 = this->_debRead->get_y();		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(1025)
		Float _g51 = (_g49 - _g50);		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(1025)
		this->_debRead->get_graphics()->drawRoundRect((int)-20,(int)20,_g48,_g51,(int)40,(int)40);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDebugRead,(void))

Void Console_obj::updateEntityCount( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateEntityCount",0x429cda58,"com.haxepunk.debug.Console.updateEntityCount","com/haxepunk/debug/Console.hx",1031,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1032)
		::String _g = ::Std_obj::string(::com::haxepunk::HXP_obj::engine->_scene->_update->length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1032)
		::String _g1 = (_g + HX_CSTRING(" Entities"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1032)
		this->_entReadText->set_text(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateEntityCount,(void))

Void Console_obj::updateButtons( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateButtons",0xc0ec83ed,"com.haxepunk.debug.Console.updateButtons","com/haxepunk/debug/Console.hx",1037,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1039)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1039)
		Float _g16;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(1039)
		if (((_g >= (int)420))){
			HX_STACK_LINE(1039)
			Float _g1 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1039)
			Float _g2 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1039)
			Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1039)
			Float _g4 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1039)
			Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1039)
			Float _g6 = this->_entRead->get_x();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1039)
			Float _g7 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1039)
			Float _g8 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1039)
			Float _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1039)
			Float _g10 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1039)
			Float _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1039)
			Float _g12 = (_g6 - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1039)
			Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1039)
			int _g14 = ::Std_obj::_int(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1039)
			Float _g15 = (_g5 + _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(1039)
			_g16 = (_g15 - (int)30);
		}
		else{
			HX_STACK_LINE(1039)
			_g16 = (int)180;
		}
		HX_STACK_LINE(1039)
		this->_butRead->set_x(_g16);
		HX_STACK_LINE(1040)
		this->_butDebug->set_visible((bool(this->_paused) && bool(!(this->_debug))));
		HX_STACK_LINE(1041)
		this->_butOutput->set_visible((bool(this->_paused) && bool(this->_debug)));
		HX_STACK_LINE(1042)
		this->_butPlay->set_visible(::com::haxepunk::HXP_obj::engine->paused);
		HX_STACK_LINE(1043)
		this->_butPause->set_visible(!(::com::haxepunk::HXP_obj::engine->paused));
		HX_STACK_LINE(1044)
		this->_butStep->set_visible(this->_paused);
		HX_STACK_LINE(1047)
		Float _g17 = this->_butDebug->get_mouseX();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(1047)
		Float _g18 = this->_butDebug->get_mouseY();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(1047)
		if ((this->_butDebug->bitmapData->get_rect()->contains(_g17,_g18))){
			HX_STACK_LINE(1049)
			Float _g19 = this->_butOutput->set_alpha((int)1);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(1049)
			this->_butDebug->set_alpha(_g19);
			HX_STACK_LINE(1050)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(1050)
				this->set_debug(!(this->_debug));
			}
		}
		else{
			HX_STACK_LINE(1052)
			Float _g20 = this->_butOutput->set_alpha(0.5);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(1052)
			this->_butDebug->set_alpha(_g20);
		}
		HX_STACK_LINE(1055)
		Float _g21 = this->_butPlay->get_mouseX();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(1055)
		Float _g22 = this->_butPlay->get_mouseY();		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(1055)
		if ((this->_butPlay->bitmapData->get_rect()->contains(_g21,_g22))){
			HX_STACK_LINE(1057)
			Float _g23 = this->_butPause->set_alpha((int)1);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(1057)
			this->_butPlay->set_alpha(_g23);
			HX_STACK_LINE(1058)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(1060)
				::com::haxepunk::HXP_obj::engine->paused = !(::com::haxepunk::HXP_obj::engine->paused);
				HX_STACK_LINE(1061)
				this->renderEntities();
			}
		}
		else{
			HX_STACK_LINE(1064)
			Float _g24 = this->_butPause->set_alpha(0.5);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(1064)
			this->_butPlay->set_alpha(_g24);
		}
		HX_STACK_LINE(1067)
		Float _g25 = this->_butStep->get_mouseX();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(1067)
		Float _g26 = this->_butStep->get_mouseY();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(1067)
		if ((this->_butStep->bitmapData->get_rect()->contains(_g25,_g26))){
			HX_STACK_LINE(1069)
			this->_butStep->set_alpha((int)1);
			HX_STACK_LINE(1070)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(1070)
				this->stepFrame();
			}
		}
		else{
			HX_STACK_LINE(1072)
			this->_butStep->set_alpha(.5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateButtons,(void))

::flash::text::TextFormat Console_obj::format( hx::Null< int >  __o_size,hx::Null< int >  __o_color,::String __o_align){
int size = __o_size.Default(16);
int color = __o_color.Default(16777215);
::String align = __o_align.Default(HX_CSTRING("left"));
	HX_STACK_FRAME("com.haxepunk.debug.Console","format",0x2f19bde2,"com.haxepunk.debug.Console.format","com/haxepunk/debug/Console.hx",1077,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(align,"align")
{
		HX_STACK_LINE(1078)
		this->_format->size = size;
		HX_STACK_LINE(1079)
		this->_format->color = color;
		HX_STACK_LINE(1080)
		::String _switch_1 = (align);
		if (  ( _switch_1==HX_CSTRING("left"))){
			HX_STACK_LINE(1083)
			this->_format->align = ::flash::text::TextFormatAlign_obj::LEFT;
		}
		else if (  ( _switch_1==HX_CSTRING("right"))){
			HX_STACK_LINE(1085)
			this->_format->align = ::flash::text::TextFormatAlign_obj::RIGHT;
		}
		else if (  ( _switch_1==HX_CSTRING("center"))){
			HX_STACK_LINE(1087)
			this->_format->align = ::flash::text::TextFormatAlign_obj::CENTER;
		}
		else if (  ( _switch_1==HX_CSTRING("justify"))){
			HX_STACK_LINE(1089)
			this->_format->align = ::flash::text::TextFormatAlign_obj::JUSTIFY;
		}
		HX_STACK_LINE(1091)
		return this->_format;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,format,return )

int Console_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_width",0xfe392092,"com.haxepunk.debug.Console.get_width","com/haxepunk/debug/Console.hx",1098,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1098)
	return ::com::haxepunk::HXP_obj::windowWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_width,return )

int Console_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_height",0x2a12d7db,"com.haxepunk.debug.Console.get_height","com/haxepunk/debug/Console.hx",1101,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1101)
	return ::com::haxepunk::HXP_obj::windowHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_height,return )

int Console_obj::BIG_WIDTH_THRESHOLD;


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(toggleKey,"toggleKey");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_debug,"_debug");
	HX_MARK_MEMBER_NAME(_scrolling,"_scrolling");
	HX_MARK_MEMBER_NAME(_selecting,"_selecting");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_panning,"_panning");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_MARK_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_MARK_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_MARK_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_MARK_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_MARK_MEMBER_NAME(_memReadText,"_memReadText");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_logRead,"_logRead");
	HX_MARK_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_MARK_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_MARK_MEMBER_NAME(_logHeight,"_logHeight");
	HX_MARK_MEMBER_NAME(_logBar,"_logBar");
	HX_MARK_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_MARK_MEMBER_NAME(_logScroll,"_logScroll");
	HX_MARK_MEMBER_NAME(_entRead,"_entRead");
	HX_MARK_MEMBER_NAME(_entReadText,"_entReadText");
	HX_MARK_MEMBER_NAME(_debRead,"_debRead");
	HX_MARK_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_MARK_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_MARK_MEMBER_NAME(_butRead,"_butRead");
	HX_MARK_MEMBER_NAME(_butDebug,"_butDebug");
	HX_MARK_MEMBER_NAME(_butOutput,"_butOutput");
	HX_MARK_MEMBER_NAME(_butPlay,"_butPlay");
	HX_MARK_MEMBER_NAME(_butPause,"_butPause");
	HX_MARK_MEMBER_NAME(_butStep,"_butStep");
	HX_MARK_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_MARK_MEMBER_NAME(_entScreen,"_entScreen");
	HX_MARK_MEMBER_NAME(_entSelect,"_entSelect");
	HX_MARK_MEMBER_NAME(_entRect,"_entRect");
	HX_MARK_MEMBER_NAME(_logLines,"_logLines");
	HX_MARK_MEMBER_NAME(LOG,"LOG");
	HX_MARK_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_MARK_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_MARK_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_MARK_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_MARK_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toggleKey,"toggleKey");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_debug,"_debug");
	HX_VISIT_MEMBER_NAME(_scrolling,"_scrolling");
	HX_VISIT_MEMBER_NAME(_selecting,"_selecting");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_panning,"_panning");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_VISIT_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_VISIT_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_VISIT_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_VISIT_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_VISIT_MEMBER_NAME(_memReadText,"_memReadText");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_logRead,"_logRead");
	HX_VISIT_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_VISIT_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_VISIT_MEMBER_NAME(_logHeight,"_logHeight");
	HX_VISIT_MEMBER_NAME(_logBar,"_logBar");
	HX_VISIT_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_VISIT_MEMBER_NAME(_logScroll,"_logScroll");
	HX_VISIT_MEMBER_NAME(_entRead,"_entRead");
	HX_VISIT_MEMBER_NAME(_entReadText,"_entReadText");
	HX_VISIT_MEMBER_NAME(_debRead,"_debRead");
	HX_VISIT_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_VISIT_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_VISIT_MEMBER_NAME(_butRead,"_butRead");
	HX_VISIT_MEMBER_NAME(_butDebug,"_butDebug");
	HX_VISIT_MEMBER_NAME(_butOutput,"_butOutput");
	HX_VISIT_MEMBER_NAME(_butPlay,"_butPlay");
	HX_VISIT_MEMBER_NAME(_butPause,"_butPause");
	HX_VISIT_MEMBER_NAME(_butStep,"_butStep");
	HX_VISIT_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_VISIT_MEMBER_NAME(_entScreen,"_entScreen");
	HX_VISIT_MEMBER_NAME(_entSelect,"_entSelect");
	HX_VISIT_MEMBER_NAME(_entRect,"_entRect");
	HX_VISIT_MEMBER_NAME(_logLines,"_logLines");
	HX_VISIT_MEMBER_NAME(LOG,"LOG");
	HX_VISIT_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_VISIT_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_VISIT_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_VISIT_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_VISIT_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
}

Dynamic Console_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		if (HX_FIELD_EQ(inName,"LOG") ) { return LOG; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { return watch_dyn(); }
		if (HX_FIELD_EQ(inName,"debug") ) { return get_debug(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"_back") ) { return _back; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return get_paused(); }
		if (HX_FIELD_EQ(inName,"format") ) { return format_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"_debug") ) { return _debug; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_logBar") ) { return _logBar; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"traceLog") ) { return traceLog_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		if (HX_FIELD_EQ(inName,"_panning") ) { return _panning; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { return _fpsRead; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { return _fpsInfo; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { return _logRead; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { return _entRead; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { return _debRead; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { return _butRead; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { return _butPlay; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { return _butStep; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { return _bmpLogo; }
		if (HX_FIELD_EQ(inName,"_entRect") ) { return _entRect; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toggleKey") ) { return toggleKey; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"get_debug") ) { return get_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"set_debug") ) { return set_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"stepFrame") ) { return stepFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"panCamera") ) { return panCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"selectAll") ) { return selectAll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLog") ) { return updateLog_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { return _butDebug; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { return _butPause; }
		if (HX_FIELD_EQ(inName,"_logLines") ) { return _logLines; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_scrolling") ) { return _scrolling; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { return _selecting; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { return _logHeight; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { return _logScroll; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { return _butOutput; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { return _entScreen; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { return _entSelect; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { return LAYER_LIST; }
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { return WATCH_LIST; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { return ENTITY_LIST; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { return SCREEN_LIST; }
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { return SELECT_LIST; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveSelected") ) { return moveSelected_dyn(); }
		if (HX_FIELD_EQ(inName,"startPanning") ) { return startPanning_dyn(); }
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { return _fpsReadText; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { return _memReadText; }
		if (HX_FIELD_EQ(inName,"_entReadText") ) { return _entReadText; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_debugDraw") ) { return set_debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"startDragging") ) { return startDragging_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePanning") ) { return updatePanning_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFPSRead") ) { return updateFPSRead_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButtons") ) { return updateButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { return _fpsInfoText0; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { return _fpsInfoText1; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { return _logReadText0; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { return _logReadText1; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { return _logBarGlobal; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { return _debReadText0; }
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { return _debReadText1; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateDragging") ) { return updateDragging_dyn(); }
		if (HX_FIELD_EQ(inName,"startSelection") ) { return startSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"selectEntities") ) { return selectEntities_dyn(); }
		if (HX_FIELD_EQ(inName,"startScrolling") ) { return startScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"renderEntities") ) { return renderEntities_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateSelection") ) { return updateSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrolling") ) { return updateScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyMoving") ) { return updateKeyMoving_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDebugRead") ) { return updateDebugRead_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateKeyPanning") ) { return updateKeyPanning_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateEntityLists") ) { return updateEntityLists_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEntityCount") ) { return updateEntityCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LOG") ) { LOG=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return set_debug(inValue); }
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return set_paused(inValue); }
		if (HX_FIELD_EQ(inName,"_debug") ) { _debug=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logBar") ) { _logBar=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_panning") ) { _panning=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { _fpsRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { _fpsInfo=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { _logRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { _entRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { _debRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { _butRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { _butPlay=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { _butStep=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { _bmpLogo=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entRect") ) { _entRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toggleKey") ) { toggleKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { if (inCallProp) return set_debugDraw(inValue);debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { _butDebug=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { _butPause=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logLines") ) { _logLines=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scrolling") ) { _scrolling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { _selecting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< ::com::haxepunk::debug::LayerList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { _logHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { _logScroll=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { _butOutput=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { _entScreen=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { _entSelect=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { LAYER_LIST=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { WATCH_LIST=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { ENTITY_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { SCREEN_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { SELECT_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { _fpsReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { _memReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entReadText") ) { _entReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { _fpsInfoText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { _fpsInfoText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { _logReadText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { _logReadText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { _logBarGlobal=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { _debReadText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { _debReadText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("toggleKey"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("debug"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("_enabled"));
	outFields->push(HX_CSTRING("_visible"));
	outFields->push(HX_CSTRING("_paused"));
	outFields->push(HX_CSTRING("_debug"));
	outFields->push(HX_CSTRING("_scrolling"));
	outFields->push(HX_CSTRING("_selecting"));
	outFields->push(HX_CSTRING("_dragging"));
	outFields->push(HX_CSTRING("_panning"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_back"));
	outFields->push(HX_CSTRING("_fpsRead"));
	outFields->push(HX_CSTRING("_fpsReadText"));
	outFields->push(HX_CSTRING("_fpsInfo"));
	outFields->push(HX_CSTRING("_fpsInfoText0"));
	outFields->push(HX_CSTRING("_fpsInfoText1"));
	outFields->push(HX_CSTRING("_memReadText"));
	outFields->push(HX_CSTRING("_layerList"));
	outFields->push(HX_CSTRING("_logRead"));
	outFields->push(HX_CSTRING("_logReadText0"));
	outFields->push(HX_CSTRING("_logReadText1"));
	outFields->push(HX_CSTRING("_logHeight"));
	outFields->push(HX_CSTRING("_logBar"));
	outFields->push(HX_CSTRING("_logBarGlobal"));
	outFields->push(HX_CSTRING("_logScroll"));
	outFields->push(HX_CSTRING("_entRead"));
	outFields->push(HX_CSTRING("_entReadText"));
	outFields->push(HX_CSTRING("_debRead"));
	outFields->push(HX_CSTRING("_debReadText0"));
	outFields->push(HX_CSTRING("_debReadText1"));
	outFields->push(HX_CSTRING("_butRead"));
	outFields->push(HX_CSTRING("_butDebug"));
	outFields->push(HX_CSTRING("_butOutput"));
	outFields->push(HX_CSTRING("_butPlay"));
	outFields->push(HX_CSTRING("_butPause"));
	outFields->push(HX_CSTRING("_butStep"));
	outFields->push(HX_CSTRING("_bmpLogo"));
	outFields->push(HX_CSTRING("_entScreen"));
	outFields->push(HX_CSTRING("_entSelect"));
	outFields->push(HX_CSTRING("_entRect"));
	outFields->push(HX_CSTRING("_logLines"));
	outFields->push(HX_CSTRING("LOG"));
	outFields->push(HX_CSTRING("LAYER_LIST"));
	outFields->push(HX_CSTRING("ENTITY_LIST"));
	outFields->push(HX_CSTRING("SCREEN_LIST"));
	outFields->push(HX_CSTRING("SELECT_LIST"));
	outFields->push(HX_CSTRING("WATCH_LIST"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BIG_WIDTH_THRESHOLD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Console_obj,toggleKey),HX_CSTRING("toggleKey")},
	{hx::fsBool,(int)offsetof(Console_obj,debugDraw),HX_CSTRING("debugDraw")},
	{hx::fsBool,(int)offsetof(Console_obj,_enabled),HX_CSTRING("_enabled")},
	{hx::fsBool,(int)offsetof(Console_obj,_visible),HX_CSTRING("_visible")},
	{hx::fsBool,(int)offsetof(Console_obj,_paused),HX_CSTRING("_paused")},
	{hx::fsBool,(int)offsetof(Console_obj,_debug),HX_CSTRING("_debug")},
	{hx::fsBool,(int)offsetof(Console_obj,_scrolling),HX_CSTRING("_scrolling")},
	{hx::fsBool,(int)offsetof(Console_obj,_selecting),HX_CSTRING("_selecting")},
	{hx::fsBool,(int)offsetof(Console_obj,_dragging),HX_CSTRING("_dragging")},
	{hx::fsBool,(int)offsetof(Console_obj,_panning),HX_CSTRING("_panning")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_sprite),HX_CSTRING("_sprite")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(Console_obj,_format),HX_CSTRING("_format")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_back),HX_CSTRING("_back")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_fpsRead),HX_CSTRING("_fpsRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_fpsReadText),HX_CSTRING("_fpsReadText")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_fpsInfo),HX_CSTRING("_fpsInfo")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_fpsInfoText0),HX_CSTRING("_fpsInfoText0")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_fpsInfoText1),HX_CSTRING("_fpsInfoText1")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_memReadText),HX_CSTRING("_memReadText")},
	{hx::fsObject /*::com::haxepunk::debug::LayerList*/ ,(int)offsetof(Console_obj,_layerList),HX_CSTRING("_layerList")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_logRead),HX_CSTRING("_logRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_logReadText0),HX_CSTRING("_logReadText0")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_logReadText1),HX_CSTRING("_logReadText1")},
	{hx::fsInt,(int)offsetof(Console_obj,_logHeight),HX_CSTRING("_logHeight")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Console_obj,_logBar),HX_CSTRING("_logBar")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Console_obj,_logBarGlobal),HX_CSTRING("_logBarGlobal")},
	{hx::fsFloat,(int)offsetof(Console_obj,_logScroll),HX_CSTRING("_logScroll")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_entRead),HX_CSTRING("_entRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_entReadText),HX_CSTRING("_entReadText")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_debRead),HX_CSTRING("_debRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_debReadText0),HX_CSTRING("_debReadText0")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_debReadText1),HX_CSTRING("_debReadText1")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_butRead),HX_CSTRING("_butRead")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butDebug),HX_CSTRING("_butDebug")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butOutput),HX_CSTRING("_butOutput")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butPlay),HX_CSTRING("_butPlay")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butPause),HX_CSTRING("_butPause")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butStep),HX_CSTRING("_butStep")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_bmpLogo),HX_CSTRING("_bmpLogo")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_entScreen),HX_CSTRING("_entScreen")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_entSelect),HX_CSTRING("_entSelect")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Console_obj,_entRect),HX_CSTRING("_entRect")},
	{hx::fsInt,(int)offsetof(Console_obj,_logLines),HX_CSTRING("_logLines")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Console_obj,LOG),HX_CSTRING("LOG")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Console_obj,LAYER_LIST),HX_CSTRING("LAYER_LIST")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,ENTITY_LIST),HX_CSTRING("ENTITY_LIST")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,SCREEN_LIST),HX_CSTRING("SCREEN_LIST")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,SELECT_LIST),HX_CSTRING("SELECT_LIST")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Console_obj,WATCH_LIST),HX_CSTRING("WATCH_LIST")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toggleKey"),
	HX_CSTRING("init"),
	HX_CSTRING("traceLog"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("enable"),
	HX_CSTRING("onResize"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("set_debugDraw"),
	HX_CSTRING("update"),
	HX_CSTRING("get_paused"),
	HX_CSTRING("set_paused"),
	HX_CSTRING("get_debug"),
	HX_CSTRING("set_debug"),
	HX_CSTRING("stepFrame"),
	HX_CSTRING("startDragging"),
	HX_CSTRING("updateDragging"),
	HX_CSTRING("moveSelected"),
	HX_CSTRING("startPanning"),
	HX_CSTRING("updatePanning"),
	HX_CSTRING("panCamera"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("startSelection"),
	HX_CSTRING("updateSelection"),
	HX_CSTRING("selectEntities"),
	HX_CSTRING("selectAll"),
	HX_CSTRING("startScrolling"),
	HX_CSTRING("updateScrolling"),
	HX_CSTRING("updateKeyMoving"),
	HX_CSTRING("updateKeyPanning"),
	HX_CSTRING("updateEntityLists"),
	HX_CSTRING("renderEntities"),
	HX_CSTRING("updateLog"),
	HX_CSTRING("updateFPSRead"),
	HX_CSTRING("updateDebugRead"),
	HX_CSTRING("updateEntityCount"),
	HX_CSTRING("updateButtons"),
	HX_CSTRING("format"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_visible"),
	HX_CSTRING("_paused"),
	HX_CSTRING("_debug"),
	HX_CSTRING("_scrolling"),
	HX_CSTRING("_selecting"),
	HX_CSTRING("_dragging"),
	HX_CSTRING("_panning"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_format"),
	HX_CSTRING("_back"),
	HX_CSTRING("_fpsRead"),
	HX_CSTRING("_fpsReadText"),
	HX_CSTRING("_fpsInfo"),
	HX_CSTRING("_fpsInfoText0"),
	HX_CSTRING("_fpsInfoText1"),
	HX_CSTRING("_memReadText"),
	HX_CSTRING("_layerList"),
	HX_CSTRING("_logRead"),
	HX_CSTRING("_logReadText0"),
	HX_CSTRING("_logReadText1"),
	HX_CSTRING("_logHeight"),
	HX_CSTRING("_logBar"),
	HX_CSTRING("_logBarGlobal"),
	HX_CSTRING("_logScroll"),
	HX_CSTRING("_entRead"),
	HX_CSTRING("_entReadText"),
	HX_CSTRING("_debRead"),
	HX_CSTRING("_debReadText0"),
	HX_CSTRING("_debReadText1"),
	HX_CSTRING("_butRead"),
	HX_CSTRING("_butDebug"),
	HX_CSTRING("_butOutput"),
	HX_CSTRING("_butPlay"),
	HX_CSTRING("_butPause"),
	HX_CSTRING("_butStep"),
	HX_CSTRING("_bmpLogo"),
	HX_CSTRING("_entScreen"),
	HX_CSTRING("_entSelect"),
	HX_CSTRING("_entRect"),
	HX_CSTRING("_logLines"),
	HX_CSTRING("LOG"),
	HX_CSTRING("LAYER_LIST"),
	HX_CSTRING("ENTITY_LIST"),
	HX_CSTRING("SCREEN_LIST"),
	HX_CSTRING("SELECT_LIST"),
	HX_CSTRING("WATCH_LIST"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::BIG_WIDTH_THRESHOLD,"BIG_WIDTH_THRESHOLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::BIG_WIDTH_THRESHOLD,"BIG_WIDTH_THRESHOLD");
};

#endif

Class Console_obj::__mClass;

void Console_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.Console"), hx::TCanCast< Console_obj> ,sStaticFields,sMemberFields,
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

void Console_obj::__boot()
{
	BIG_WIDTH_THRESHOLD= (int)420;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
