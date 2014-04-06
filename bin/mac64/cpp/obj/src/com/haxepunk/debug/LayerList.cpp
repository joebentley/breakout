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
#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#include <com/haxepunk/debug/LayerLabel.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void LayerList_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("com.haxepunk.debug.LayerList","new",0x842dab4d,"com.haxepunk.debug.LayerList.new","com/haxepunk/debug/LayerList.hx",126,0x85ba6a24)

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")
int width = __o_width.Default(250);
int height = __o_height.Default(400);
{
	HX_STACK_LINE(127)
	super::__construct();
	HX_STACK_LINE(129)
	::flash::display::Sprite mask = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(130)
	mask->get_graphics()->beginFill((int)0,null());
	HX_STACK_LINE(131)
	mask->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(132)
	mask->get_graphics()->endFill();
	HX_STACK_LINE(133)
	this->addChild(mask);
	HX_STACK_LINE(134)
	this->set_mask(mask);
	HX_STACK_LINE(136)
	this->get_graphics()->beginFill((int)0,.15);
	HX_STACK_LINE(137)
	this->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(138)
	this->get_graphics()->endFill();
	HX_STACK_LINE(140)
	::flash::text::Font font = ::openfl::Assets_obj::getFont(HX_CSTRING("font/04B_03__.ttf"),null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(141)
	if (((font == null()))){
		HX_STACK_LINE(143)
		::flash::text::Font _g = ::openfl::Assets_obj::getFont(::com::haxepunk::HXP_obj::defaultFont,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		font = _g;
	}
	HX_STACK_LINE(145)
	::flash::text::TextFormat _g1 = ::flash::text::TextFormat_obj::__new(font->fontName,(int)16,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(145)
	this->_textFormat = _g1;
	HX_STACK_LINE(147)
	::haxe::ds::IntMap _g2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(147)
	this->_labels = _g2;
}
;
	return null();
}

//LayerList_obj::~LayerList_obj() { }

Dynamic LayerList_obj::__CreateEmpty() { return  new LayerList_obj; }
hx::ObjectPtr< LayerList_obj > LayerList_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< LayerList_obj > result = new LayerList_obj();
	result->__construct(__o_width,__o_height);
	return result;}

Dynamic LayerList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerList_obj > result = new LayerList_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int LayerList_obj::layerSort( int a,int b){
	HX_STACK_FRAME("com.haxepunk.debug.LayerList","layerSort",0xc19ddc7c,"com.haxepunk.debug.LayerList.layerSort","com/haxepunk/debug/LayerList.hx",152,0x85ba6a24)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(152)
	return (a - b);
}


HX_DEFINE_DYNAMIC_FUNC2(LayerList_obj,layerSort,return )

Void LayerList_obj::set( ::haxe::ds::IntMap list){
{
		HX_STACK_FRAME("com.haxepunk.debug.LayerList","set",0x8431768f,"com.haxepunk.debug.LayerList.set","com/haxepunk/debug/LayerList.hx",156,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(158)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_labels->keys());  __it->hasNext(); ){
			int key = __it->next();
			{
				HX_STACK_LINE(160)
				::com::haxepunk::debug::LayerLabel _g = this->_labels->get(key);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(160)
				this->removeChild(_g);
				HX_STACK_LINE(161)
				this->_labels->remove(key);
			}
;
		}
		HX_STACK_LINE(165)
		Array< int > keys = Array_obj< int >::__new();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(166)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(list->keys());  __it->hasNext(); ){
			int key = __it->next();
			{
				HX_STACK_LINE(168)
				Dynamic _g1 = list->get(key);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(168)
				if (((_g1 > (int)0))){
					HX_STACK_LINE(169)
					keys->push(key);
				}
			}
;
		}
		HX_STACK_LINE(171)
		keys->sort(this->layerSort_dyn());
		HX_STACK_LINE(173)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(173)
		::com::haxepunk::Scene scene = ::com::haxepunk::HXP_obj::engine->_scene;		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			while((true)){
				HX_STACK_LINE(174)
				if ((!(((_g < keys->length))))){
					HX_STACK_LINE(174)
					break;
				}
				HX_STACK_LINE(174)
				int layer = keys->__get(_g);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(174)
				++(_g);
				HX_STACK_LINE(176)
				::com::haxepunk::debug::LayerLabel label;		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(177)
				if ((this->_labels->exists(layer))){
					HX_STACK_LINE(179)
					::com::haxepunk::debug::LayerLabel _g2 = this->_labels->get(layer);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(179)
					label = _g2;
				}
				else{
					HX_STACK_LINE(183)
					::com::haxepunk::debug::LayerLabel _g3 = ::com::haxepunk::debug::LayerLabel_obj::__new(layer,this->_textFormat);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(183)
					label = _g3;
					HX_STACK_LINE(184)
					this->_labels->set(layer,label);
				}
				HX_STACK_LINE(186)
				Dynamic _g4 = list->get(layer);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(186)
				label->set_count(_g4);
				HX_STACK_LINE(187)
				bool _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(187)
				if ((!((!(scene->_layerDisplay->exists(layer)))))){
					HX_STACK_LINE(187)
					_g5 = scene->_layerDisplay->get(layer);
				}
				else{
					HX_STACK_LINE(187)
					_g5 = true;
				}
				HX_STACK_LINE(187)
				label->set_display(_g5);
				HX_STACK_LINE(188)
				int _g6 = (i)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(188)
				int _g7 = (_g6 * (int)20);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(188)
				int _g8 = (_g7 + (int)5);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(188)
				label->set_y(_g8);
				HX_STACK_LINE(189)
				this->addChild(label);
			}
		}
		HX_STACK_LINE(193)
		if (((this->_maskLabel == null()))){
			HX_STACK_LINE(195)
			::com::haxepunk::debug::MaskLabel _g9 = ::com::haxepunk::debug::MaskLabel_obj::__new(this->_textFormat);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(195)
			this->_maskLabel = _g9;
			HX_STACK_LINE(196)
			this->addChild(this->_maskLabel);
		}
		HX_STACK_LINE(198)
		int _g10 = (i)++;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(198)
		int _g11 = (_g10 * (int)20);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(198)
		int _g12 = (_g11 + (int)5);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(198)
		this->_maskLabel->set_y(_g12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LayerList_obj,set,(void))


LayerList_obj::LayerList_obj()
{
}

void LayerList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayerList);
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_maskLabel,"_maskLabel");
	HX_MARK_MEMBER_NAME(_textFormat,"_textFormat");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayerList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_maskLabel,"_maskLabel");
	HX_VISIT_MEMBER_NAME(_textFormat,"_textFormat");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LayerList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"layerSort") ) { return layerSort_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maskLabel") ) { return _maskLabel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { return _textFormat; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maskLabel") ) { _maskLabel=inValue.Cast< ::com::haxepunk::debug::MaskLabel >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { _textFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayerList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_labels"));
	outFields->push(HX_CSTRING("_maskLabel"));
	outFields->push(HX_CSTRING("_textFormat"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(LayerList_obj,_labels),HX_CSTRING("_labels")},
	{hx::fsObject /*::com::haxepunk::debug::MaskLabel*/ ,(int)offsetof(LayerList_obj,_maskLabel),HX_CSTRING("_maskLabel")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(LayerList_obj,_textFormat),HX_CSTRING("_textFormat")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("layerSort"),
	HX_CSTRING("set"),
	HX_CSTRING("_labels"),
	HX_CSTRING("_maskLabel"),
	HX_CSTRING("_textFormat"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
};

#endif

Class LayerList_obj::__mClass;

void LayerList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.LayerList"), hx::TCanCast< LayerList_obj> ,sStaticFields,sMemberFields,
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

void LayerList_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
