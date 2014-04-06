#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_
#include <com/haxepunk/graphics/_Text/StyleType_Impl_.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace _Text{

Void StyleType_Impl__obj::__construct()
{
	return null();
}

//StyleType_Impl__obj::~StyleType_Impl__obj() { }

Dynamic StyleType_Impl__obj::__CreateEmpty() { return  new StyleType_Impl__obj; }
hx::ObjectPtr< StyleType_Impl__obj > StyleType_Impl__obj::__new()
{  hx::ObjectPtr< StyleType_Impl__obj > result = new StyleType_Impl__obj();
	result->__construct();
	return result;}

Dynamic StyleType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleType_Impl__obj > result = new StyleType_Impl__obj();
	result->__construct();
	return result;}

::flash::text::TextFormat StyleType_Impl__obj::_new( ::flash::text::TextFormat format){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","_new",0x81144ab0,"com.haxepunk.graphics._Text.StyleType_Impl_._new","com/haxepunk/graphics/Text.hx",32,0x6110fd86)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(32)
	return format;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,_new,return )

::flash::text::TextFormat StyleType_Impl__obj::toTextformat( ::flash::text::TextFormat this1){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","toTextformat",0x73fb694e,"com.haxepunk.graphics._Text.StyleType_Impl_.toTextformat","com/haxepunk/graphics/Text.hx",33,0x6110fd86)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(33)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,toTextformat,return )

::flash::text::TextFormat StyleType_Impl__obj::fromTextFormat( ::flash::text::TextFormat format){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","fromTextFormat",0x23b7efdd,"com.haxepunk.graphics._Text.StyleType_Impl_.fromTextFormat","com/haxepunk/graphics/Text.hx",35,0x6110fd86)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(35)
	return ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::_new(format);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,fromTextFormat,return )

::flash::text::TextFormat StyleType_Impl__obj::fromTextOptions( Dynamic object){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","fromTextOptions",0x1e0963f8,"com.haxepunk.graphics._Text.StyleType_Impl_.fromTextOptions","com/haxepunk/graphics/Text.hx",36,0x6110fd86)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(36)
	::flash::text::TextFormat format = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(36)
	Array< ::String > fields = ::Type_obj::getInstanceFields(hx::ClassOf< ::flash::text::TextFormat >());		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		Array< ::String > _g1 = ::Reflect_obj::fields(object);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			::String key = _g1->__get(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(36)
			int _g2 = fields->indexOf(key,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(36)
			if (((_g2 > (int)-1))){
				HX_STACK_LINE(36)
				Dynamic value = ::Reflect_obj::field(object,key);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(36)
				if (((format != null()))){
					HX_STACK_LINE(36)
					format->__SetField(key,value,false);
				}
			}
			else{
				HX_STACK_LINE(36)
				HX_STACK_DO_THROW(((HX_CSTRING("\"") + key) + HX_CSTRING("\" is not a TextFormat property")));
			}
		}
	}
	HX_STACK_LINE(36)
	return ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::_new(format);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,fromTextOptions,return )

::flash::text::TextFormat StyleType_Impl__obj::fromDynamic( Dynamic object){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","fromDynamic",0xfd32a5c6,"com.haxepunk.graphics._Text.StyleType_Impl_.fromDynamic","com/haxepunk/graphics/Text.hx",38,0x6110fd86)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(39)
	::flash::text::TextFormat format = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(40)
	Array< ::String > fields = ::Type_obj::getInstanceFields(hx::ClassOf< ::flash::text::TextFormat >());		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		Array< ::String > _g1 = ::Reflect_obj::fields(object);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			::String key = _g1->__get(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(42)
			++(_g);
			HX_STACK_LINE(44)
			int _g2 = fields->indexOf(key,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(44)
			if (((_g2 > (int)-1))){
				HX_STACK_LINE(46)
				Dynamic value = ::Reflect_obj::field(object,key);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(46)
				if (((format != null()))){
					HX_STACK_LINE(46)
					format->__SetField(key,value,false);
				}
			}
			else{
				HX_STACK_LINE(50)
				HX_STACK_DO_THROW(((HX_CSTRING("\"") + key) + HX_CSTRING("\" is not a TextFormat property")));
			}
		}
	}
	HX_STACK_LINE(53)
	return ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::_new(format);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,fromDynamic,return )


StyleType_Impl__obj::StyleType_Impl__obj()
{
}

Dynamic StyleType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromDynamic") ) { return fromDynamic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toTextformat") ) { return toTextformat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromTextFormat") ) { return fromTextFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromTextOptions") ) { return fromTextOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toTextformat"),
	HX_CSTRING("fromTextFormat"),
	HX_CSTRING("fromTextOptions"),
	HX_CSTRING("fromDynamic"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleType_Impl__obj::__mClass,"__mClass");
};

#endif

Class StyleType_Impl__obj::__mClass;

void StyleType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics._Text.StyleType_Impl_"), hx::TCanCast< StyleType_Impl__obj> ,sStaticFields,sMemberFields,
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

void StyleType_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace _Text
