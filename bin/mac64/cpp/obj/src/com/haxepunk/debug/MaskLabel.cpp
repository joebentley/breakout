#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_MaskLabel
#include <com/haxepunk/debug/MaskLabel.h>
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
namespace com{
namespace haxepunk{
namespace debug{

Void MaskLabel_obj::__construct(::flash::text::TextFormat textFormat)
{
HX_STACK_FRAME("com.haxepunk.debug.MaskLabel","new",0x507a4a66,"com.haxepunk.debug.MaskLabel.new","com/haxepunk/debug/LayerList.hx",80,0x85ba6a24)

HX_STACK_ARG(textFormat,"textFormat")
{
	HX_STACK_LINE(81)
	super::__construct(textFormat);
	HX_STACK_LINE(82)
	this->label->set_text(HX_CSTRING("Masks"));
}
;
	return null();
}

//MaskLabel_obj::~MaskLabel_obj() { }

Dynamic MaskLabel_obj::__CreateEmpty() { return  new MaskLabel_obj; }
hx::ObjectPtr< MaskLabel_obj > MaskLabel_obj::__new(::flash::text::TextFormat textFormat)
{  hx::ObjectPtr< MaskLabel_obj > result = new MaskLabel_obj();
	result->__construct(textFormat);
	return result;}

Dynamic MaskLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaskLabel_obj > result = new MaskLabel_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MaskLabel_obj::onClick( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.debug.MaskLabel","onClick",0x90ef0faf,"com.haxepunk.debug.MaskLabel.onClick","com/haxepunk/debug/LayerList.hx",86,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(87)
		this->super::onClick(e);
		struct _Function_1_1{
			inline static ::com::haxepunk::debug::Console Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/LayerList.hx",88,0x85ba6a24)
				{
					HX_STACK_LINE(88)
					if (((::com::haxepunk::HXP_obj::_console == null()))){
						HX_STACK_LINE(88)
						::com::haxepunk::debug::Console _g = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(88)
						::com::haxepunk::HXP_obj::_console = _g;
					}
					HX_STACK_LINE(88)
					return ::com::haxepunk::HXP_obj::_console;
				}
				return null();
			}
		};
		HX_STACK_LINE(88)
		(_Function_1_1::Block())->set_debugDraw(this->display);
		struct _Function_1_2{
			inline static ::com::haxepunk::debug::Console Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/LayerList.hx",89,0x85ba6a24)
				{
					HX_STACK_LINE(89)
					if (((::com::haxepunk::HXP_obj::_console == null()))){
						HX_STACK_LINE(89)
						::com::haxepunk::debug::Console _g1 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(89)
						::com::haxepunk::HXP_obj::_console = _g1;
					}
					HX_STACK_LINE(89)
					return ::com::haxepunk::HXP_obj::_console;
				}
				return null();
			}
		};
		HX_STACK_LINE(89)
		(_Function_1_2::Block())->update();
	}
return null();
}



MaskLabel_obj::MaskLabel_obj()
{
}

Dynamic MaskLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaskLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MaskLabel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaskLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaskLabel_obj::__mClass,"__mClass");
};

#endif

Class MaskLabel_obj::__mClass;

void MaskLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.MaskLabel"), hx::TCanCast< MaskLabel_obj> ,sStaticFields,sMemberFields,
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

void MaskLabel_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
