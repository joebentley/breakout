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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace entities{

Void Player_obj::__construct(int x,int y)
{
HX_STACK_FRAME("entities.Player","new",0x0cad9a00,"entities.Player.new","entities/Player.hx",15,0x7a521d4f)

HX_STACK_ARG(x,"x")

HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(16)
	super::__construct(x,y,null(),null());
	HX_STACK_LINE(18)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Player.hx",18,0x7a521d4f)
			{
				HX_STACK_LINE(18)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Player.hx",18,0x7a521d4f)
						{
							HX_STACK_LINE(18)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(18)
							{
								HX_STACK_LINE(18)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(18)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/paddle.png")))){
									HX_STACK_LINE(18)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/paddle.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(18)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(18)
									::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/paddle.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(18)
									if (((bitmap != null()))){
										HX_STACK_LINE(18)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/paddle.png"),null());		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(18)
										data1 = _g1;
									}
								}
								HX_STACK_LINE(18)
								data = data1;
							}
							HX_STACK_LINE(18)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(18)
				_g2 = _Function_2_1::Block();
				HX_STACK_LINE(18)
				::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(18)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(18)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Player.hx",18,0x7a521d4f)
			{
				HX_STACK_LINE(18)
				::flash::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/paddle.png"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(18)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(18)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(18)
	::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(18)
	this->g = _g6;
	HX_STACK_LINE(19)
	this->g->set_scale((int)6);
	HX_STACK_LINE(21)
	this->set_graphic(this->g);
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		int width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(23)
		width = hx::TCast< Int >::cast(this->g->get_scaledWidth());
		HX_STACK_LINE(23)
		int height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(23)
		height = hx::TCast< Int >::cast(this->g->get_scaledHeight());
		HX_STACK_LINE(23)
		this->width = width;
		HX_STACK_LINE(23)
		this->height = height;
		HX_STACK_LINE(23)
		this->originX = (int)0;
		HX_STACK_LINE(23)
		this->originY = (int)0;
	}
	HX_STACK_LINE(24)
	this->set_type(HX_CSTRING("player"));
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int x,int y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(x,y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("entities.Player","update",0x3df18069,"entities.Player.update","entities/Player.hx",28,0x7a521d4f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		if ((::com::haxepunk::utils::Input_obj::check(_g))){
			HX_STACK_LINE(32)
			::entities::Player _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(32)
			_g1->x = (((  ((_g1->followCamera)) ? Float((_g1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g1->x) )) - (int)10);
		}
		HX_STACK_LINE(35)
		::com::haxepunk::ds::Either _g1 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		if ((::com::haxepunk::utils::Input_obj::check(_g1))){
			HX_STACK_LINE(36)
			::entities::Player _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(36)
			_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + (int)10);
		}
		HX_STACK_LINE(39)
		this->super::update();
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(g,"g");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(g,"g");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("g"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Player_obj,g),HX_CSTRING("g")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("g"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

} // end namespace entities
