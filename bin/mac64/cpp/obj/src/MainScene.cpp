#include <hxcpp.h>

#ifndef INCLUDED_MainScene
#include <MainScene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
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
#ifndef INCLUDED_entities_Ball
#include <entities/Ball.h>
#endif
#ifndef INCLUDED_entities_Bar
#include <entities/Bar.h>
#endif
#ifndef INCLUDED_entities_BarBackdrop
#include <entities/BarBackdrop.h>
#endif
#ifndef INCLUDED_entities_Brick
#include <entities/Brick.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif

Void MainScene_obj::__construct()
{
HX_STACK_FRAME("MainScene","new",0x8bdcb8a5,"MainScene.new","MainScene.hx",16,0xb84de26b)
{
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

//MainScene_obj::~MainScene_obj() { }

Dynamic MainScene_obj::__CreateEmpty() { return  new MainScene_obj; }
hx::ObjectPtr< MainScene_obj > MainScene_obj::__new()
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Dynamic MainScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Void MainScene_obj::begin( ){
{
		HX_STACK_FRAME("MainScene","begin",0xde1d2dae,"MainScene.begin","MainScene.hx",20,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		::entities::Player _g = ::entities::Player_obj::__new((int)100,(int)430);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		this->add(_g);
		HX_STACK_LINE(22)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		_g1 = hx::TCast< Int >::cast((Float(::com::haxepunk::HXP_obj::width) / Float((int)2)));
		HX_STACK_LINE(22)
		::entities::Ball _g2 = ::entities::Ball_obj::__new(_g1,(int)250);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(22)
		this->add(_g2);
		HX_STACK_LINE(24)
		::entities::BarBackdrop _g3 = ::entities::BarBackdrop_obj::__new((int)10,(int)10);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(24)
		this->add(_g3);
		HX_STACK_LINE(25)
		::entities::Bar _g4 = ::entities::Bar_obj::__new((int)11,(int)11);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(25)
		this->add(_g4);
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g5 = (int)1;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(28)
			while((true)){
				HX_STACK_LINE(28)
				if ((!(((_g5 < (int)7))))){
					HX_STACK_LINE(28)
					break;
				}
				HX_STACK_LINE(28)
				int y = (_g5)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(29)
				{
					HX_STACK_LINE(29)
					int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(29)
					while((true)){
						HX_STACK_LINE(29)
						if ((!(((_g11 < (int)9))))){
							HX_STACK_LINE(29)
							break;
						}
						HX_STACK_LINE(29)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(30)
						::entities::Brick _g51 = ::entities::Brick_obj::__new((x * (int)65),((y * (int)30) + (int)30));		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(30)
						this->add(_g51);
					}
				}
			}
		}
	}
return null();
}



MainScene_obj::MainScene_obj()
{
}

Dynamic MainScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MainScene_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("begin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#endif

Class MainScene_obj::__mClass;

void MainScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MainScene"), hx::TCanCast< MainScene_obj> ,sStaticFields,sMemberFields,
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

void MainScene_obj::__boot()
{
}

