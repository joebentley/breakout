#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
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
#ifndef INCLUDED_entities_Ball
#include <entities/Ball.h>
#endif
#ifndef INCLUDED_entities_Bar
#include <entities/Bar.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace entities{

Void Bar_obj::__construct(int x,int y)
{
HX_STACK_FRAME("entities.Bar","new",0x3d0820f8,"entities.Bar.new","entities/Bar.hx",14,0x5a129c39)

HX_STACK_ARG(x,"x")

HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(15)
	super::__construct(x,y,null(),null());
	HX_STACK_LINE(17)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Bar.hx",17,0x5a129c39)
			{
				HX_STACK_LINE(17)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Bar.hx",17,0x5a129c39)
						{
							HX_STACK_LINE(17)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(17)
							{
								HX_STACK_LINE(17)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(17)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/bar.png")))){
									HX_STACK_LINE(17)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/bar.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(17)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(17)
									::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/bar.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(17)
									if (((bitmap != null()))){
										HX_STACK_LINE(17)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/bar.png"),null());		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(17)
										data1 = _g1;
									}
								}
								HX_STACK_LINE(17)
								data = data1;
							}
							HX_STACK_LINE(17)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(17)
				_g2 = _Function_2_1::Block();
				HX_STACK_LINE(17)
				::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(17)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(17)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Bar.hx",17,0x5a129c39)
			{
				HX_STACK_LINE(17)
				::flash::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/bar.png"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(17)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(17)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(17)
	_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(17)
	::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(17)
	this->g = _g6;
	HX_STACK_LINE(18)
	this->g->scaleY = (int)4;
	HX_STACK_LINE(20)
	this->set_graphic(this->g);
}
;
	return null();
}

//Bar_obj::~Bar_obj() { }

Dynamic Bar_obj::__CreateEmpty() { return  new Bar_obj; }
hx::ObjectPtr< Bar_obj > Bar_obj::__new(int x,int y)
{  hx::ObjectPtr< Bar_obj > result = new Bar_obj();
	result->__construct(x,y);
	return result;}

Dynamic Bar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bar_obj > result = new Bar_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Bar_obj::update( ){
{
		HX_STACK_FRAME("entities.Bar","update",0x785ba471,"entities.Bar.update","entities/Bar.hx",24,0x5a129c39)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		Array< ::Dynamic > ball = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ball,"ball");
		HX_STACK_LINE(27)
		::com::haxepunk::HXP_obj::engine->_scene->getType(HX_CSTRING("ball"),ball);
		HX_STACK_LINE(29)
		if (((ball->length != (int)0))){
			HX_STACK_LINE(30)
			this->g->scaleX = ((Float(ball->__get((int)0).StaticCast< ::entities::Ball >()->slowmotionLeft) / Float((int)100)) * (int)88);
		}
		HX_STACK_LINE(33)
		this->super::update();
	}
return null();
}



Bar_obj::Bar_obj()
{
}

void Bar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bar);
	HX_MARK_MEMBER_NAME(g,"g");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(g,"g");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("g"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Bar_obj,g),HX_CSTRING("g")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("g"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bar_obj::__mClass,"__mClass");
};

#endif

Class Bar_obj::__mClass;

void Bar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Bar"), hx::TCanCast< Bar_obj> ,sStaticFields,sMemberFields,
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

void Bar_obj::__boot()
{
}

} // end namespace entities
