#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#include <com/haxepunk/debug/LayerLabel.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#include <com/haxepunk/debug/VisibleLabel.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void LayerLabel_obj::__construct(int layer,::flash::text::TextFormat textFormat)
{
HX_STACK_FRAME("com.haxepunk.debug.LayerLabel","new",0x207e6f49,"com.haxepunk.debug.LayerLabel.new","com/haxepunk/debug/LayerList.hx",99,0x85ba6a24)

HX_STACK_ARG(layer,"layer")

HX_STACK_ARG(textFormat,"textFormat")
{
	HX_STACK_LINE(100)
	super::__construct(textFormat);
	HX_STACK_LINE(102)
	this->layer = layer;
	HX_STACK_LINE(103)
	this->set_count((int)0);
}
;
	return null();
}

//LayerLabel_obj::~LayerLabel_obj() { }

Dynamic LayerLabel_obj::__CreateEmpty() { return  new LayerLabel_obj; }
hx::ObjectPtr< LayerLabel_obj > LayerLabel_obj::__new(int layer,::flash::text::TextFormat textFormat)
{  hx::ObjectPtr< LayerLabel_obj > result = new LayerLabel_obj();
	result->__construct(layer,textFormat);
	return result;}

Dynamic LayerLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerLabel_obj > result = new LayerLabel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int LayerLabel_obj::set_count( int value){
	HX_STACK_FRAME("com.haxepunk.debug.LayerLabel","set_count",0x255bc0db,"com.haxepunk.debug.LayerLabel.set_count","com/haxepunk/debug/LayerList.hx",108,0x85ba6a24)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(109)
	this->label->set_text(((((HX_CSTRING("Layer ") + this->layer) + HX_CSTRING(" [")) + value) + HX_CSTRING("]")));
	HX_STACK_LINE(110)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LayerLabel_obj,set_count,return )

Void LayerLabel_obj::onClick( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.debug.LayerLabel","onClick",0xd3cae212,"com.haxepunk.debug.LayerLabel.onClick","com/haxepunk/debug/LayerList.hx",114,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(115)
		this->super::onClick(e);
		HX_STACK_LINE(116)
		::com::haxepunk::HXP_obj::engine->_scene->_layerDisplay->set(this->layer,this->display);
		HX_STACK_LINE(117)
		::com::haxepunk::HXP_obj::engine->render();
		struct _Function_1_1{
			inline static ::com::haxepunk::debug::Console Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/LayerList.hx",118,0x85ba6a24)
				{
					HX_STACK_LINE(118)
					if (((::com::haxepunk::HXP_obj::_console == null()))){
						HX_STACK_LINE(118)
						::com::haxepunk::debug::Console _g = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(118)
						::com::haxepunk::HXP_obj::_console = _g;
					}
					HX_STACK_LINE(118)
					return ::com::haxepunk::HXP_obj::_console;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::com::haxepunk::debug::Console Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/LayerList.hx",118,0x85ba6a24)
				{
					HX_STACK_LINE(118)
					if (((::com::haxepunk::HXP_obj::_console == null()))){
						HX_STACK_LINE(118)
						::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
					}
					HX_STACK_LINE(118)
					return ::com::haxepunk::HXP_obj::_console;
				}
				return null();
			}
		};
		HX_STACK_LINE(118)
		(_Function_1_1::Block())->set_debugDraw((_Function_1_2::Block())->debugDraw);
	}
return null();
}



LayerLabel_obj::LayerLabel_obj()
{
}

Dynamic LayerLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_count") ) { return set_count_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { return set_count(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayerLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(LayerLabel_obj,layer),HX_CSTRING("layer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("layer"),
	HX_CSTRING("set_count"),
	HX_CSTRING("onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerLabel_obj::__mClass,"__mClass");
};

#endif

Class LayerLabel_obj::__mClass;

void LayerLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.LayerLabel"), hx::TCanCast< LayerLabel_obj> ,sStaticFields,sMemberFields,
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

void LayerLabel_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
