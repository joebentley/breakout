#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace com{
namespace haxepunk{

Void Tweener_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Tweener","new",0x5265c0f1,"com.haxepunk.Tweener.new","com/haxepunk/Tweener.hx",11,0xf31c777f)
{
	HX_STACK_LINE(12)
	this->active = true;
	HX_STACK_LINE(13)
	this->autoClear = false;
}
;
	return null();
}

//Tweener_obj::~Tweener_obj() { }

Dynamic Tweener_obj::__CreateEmpty() { return  new Tweener_obj; }
hx::ObjectPtr< Tweener_obj > Tweener_obj::__new()
{  hx::ObjectPtr< Tweener_obj > result = new Tweener_obj();
	result->__construct();
	return result;}

Dynamic Tweener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tweener_obj > result = new Tweener_obj();
	result->__construct();
	return result;}

Void Tweener_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Tweener","update",0x18a18618,"com.haxepunk.Tweener.update","com/haxepunk/Tweener.hx",17,0xf31c777f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,update,(void))

::com::haxepunk::Tween Tweener_obj::addTween( ::com::haxepunk::Tween t,hx::Null< bool >  __o_start){
bool start = __o_start.Default(false);
	HX_STACK_FRAME("com.haxepunk.Tweener","addTween",0xc3753259,"com.haxepunk.Tweener.addTween","com/haxepunk/Tweener.hx",30,0xf31c777f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(start,"start")
{
		HX_STACK_LINE(31)
		Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(33)
		if (((ft->__Field(HX_CSTRING("_parent"),true) != null()))){
			HX_STACK_LINE(34)
			HX_STACK_DO_THROW(HX_CSTRING("Cannot add a Tween object more than once."));
		}
		HX_STACK_LINE(36)
		ft->__FieldRef(HX_CSTRING("_parent")) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(37)
		ft->__FieldRef(HX_CSTRING("_next")) = this->_tween;
		HX_STACK_LINE(38)
		Dynamic friendTween = this->_tween;		HX_STACK_VAR(friendTween,"friendTween");
		HX_STACK_LINE(40)
		if (((this->_tween != null()))){
			HX_STACK_LINE(41)
			friendTween->__FieldRef(HX_CSTRING("_prev")) = t;
		}
		HX_STACK_LINE(43)
		this->_tween = t;
		HX_STACK_LINE(45)
		if ((start)){
			HX_STACK_LINE(46)
			this->_tween->start();
		}
		HX_STACK_LINE(48)
		return t;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Tweener_obj,addTween,return )

::com::haxepunk::Tween Tweener_obj::removeTween( ::com::haxepunk::Tween t){
	HX_STACK_FRAME("com.haxepunk.Tweener","removeTween",0x2fe2f118,"com.haxepunk.Tweener.removeTween","com/haxepunk/Tweener.hx",59,0xf31c777f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(60)
	Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(61)
	if (((ft->__Field(HX_CSTRING("_parent"),true) != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(62)
		HX_STACK_DO_THROW(HX_CSTRING("Core object does not contain Tween."));
	}
	HX_STACK_LINE(64)
	if (((ft->__Field(HX_CSTRING("_next"),true) != null()))){
		HX_STACK_LINE(65)
		ft->__Field(HX_CSTRING("_next"),true)->__FieldRef(HX_CSTRING("_prev")) = ft->__Field(HX_CSTRING("_prev"),true);
	}
	HX_STACK_LINE(67)
	if (((ft->__Field(HX_CSTRING("_prev"),true) != null()))){
		HX_STACK_LINE(69)
		ft->__Field(HX_CSTRING("_prev"),true)->__FieldRef(HX_CSTRING("_next")) = ft->__Field(HX_CSTRING("_next"),true);
	}
	else{
		HX_STACK_LINE(73)
		::com::haxepunk::Tween _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		if (((ft->__Field(HX_CSTRING("_next"),true) == null()))){
			HX_STACK_LINE(73)
			_g = null();
		}
		else{
			HX_STACK_LINE(73)
			_g = hx::TCast< com::haxepunk::Tween >::cast(ft->__Field(HX_CSTRING("_next"),true));
		}
		HX_STACK_LINE(73)
		this->_tween = _g;
	}
	HX_STACK_LINE(75)
	Dynamic _g1 = ft->__FieldRef(HX_CSTRING("_prev")) = null();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(75)
	ft->__FieldRef(HX_CSTRING("_next")) = _g1;
	HX_STACK_LINE(76)
	ft->__FieldRef(HX_CSTRING("_parent")) = null();
	HX_STACK_LINE(77)
	t->active = false;
	HX_STACK_LINE(78)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC1(Tweener_obj,removeTween,return )

Void Tweener_obj::clearTweens( ){
{
		HX_STACK_FRAME("com.haxepunk.Tweener","clearTweens",0xd54feaa6,"com.haxepunk.Tweener.clearTweens","com/haxepunk/Tweener.hx",85,0xf31c777f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::com::haxepunk::Tween t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(87)
		Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(88)
		Dynamic fn;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			if ((!(((ft != null()))))){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(91)
			fn = ft->__Field(HX_CSTRING("_next"),true);
			HX_STACK_LINE(92)
			::com::haxepunk::Tween _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			_g = hx::TCast< com::haxepunk::Tween >::cast(ft);
			HX_STACK_LINE(92)
			this->removeTween(_g);
			HX_STACK_LINE(93)
			ft = fn;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,clearTweens,(void))

Void Tweener_obj::updateTweens( ){
{
		HX_STACK_FRAME("com.haxepunk.Tweener","updateTweens",0x47460fe0,"com.haxepunk.Tweener.updateTweens","com/haxepunk/Tweener.hx",101,0xf31c777f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		::com::haxepunk::Tween t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(103)
		Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(104)
		while((true)){
			HX_STACK_LINE(104)
			if ((!(((ft != null()))))){
				HX_STACK_LINE(104)
				break;
			}
			HX_STACK_LINE(106)
			::com::haxepunk::Tween _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			_g = hx::TCast< com::haxepunk::Tween >::cast(ft);
			HX_STACK_LINE(106)
			t = _g;
			HX_STACK_LINE(107)
			if ((t->active)){
				HX_STACK_LINE(109)
				t->update();
				HX_STACK_LINE(110)
				if ((ft->__Field(HX_CSTRING("_finish"),true))){
					HX_STACK_LINE(110)
					ft->__Field(HX_CSTRING("finish"),true)();
				}
			}
			HX_STACK_LINE(112)
			ft = ft->__Field(HX_CSTRING("_next"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,updateTweens,(void))

bool Tweener_obj::get_hasTween( ){
	HX_STACK_FRAME("com.haxepunk.Tweener","get_hasTween",0x79409e09,"com.haxepunk.Tweener.get_hasTween","com/haxepunk/Tweener.hx",117,0xf31c777f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	return (this->_tween != null());
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,get_hasTween,return )


Tweener_obj::Tweener_obj()
{
}

void Tweener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tweener);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(autoClear,"autoClear");
	HX_MARK_MEMBER_NAME(_tween,"_tween");
	HX_MARK_END_CLASS();
}

void Tweener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(autoClear,"autoClear");
	HX_VISIT_MEMBER_NAME(_tween,"_tween");
}

Dynamic Tweener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_tween") ) { return _tween; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addTween") ) { return addTween_dyn(); }
		if (HX_FIELD_EQ(inName,"hasTween") ) { return get_hasTween(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoClear") ) { return autoClear; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeTween") ) { return removeTween_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTweens") ) { return clearTweens_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateTweens") ) { return updateTweens_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasTween") ) { return get_hasTween_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tweener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tween") ) { _tween=inValue.Cast< ::com::haxepunk::Tween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoClear") ) { autoClear=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tweener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("autoClear"));
	outFields->push(HX_CSTRING("hasTween"));
	outFields->push(HX_CSTRING("_tween"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tweener_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(Tweener_obj,autoClear),HX_CSTRING("autoClear")},
	{hx::fsObject /*::com::haxepunk::Tween*/ ,(int)offsetof(Tweener_obj,_tween),HX_CSTRING("_tween")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("autoClear"),
	HX_CSTRING("update"),
	HX_CSTRING("addTween"),
	HX_CSTRING("removeTween"),
	HX_CSTRING("clearTweens"),
	HX_CSTRING("updateTweens"),
	HX_CSTRING("get_hasTween"),
	HX_CSTRING("_tween"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
};

#endif

Class Tweener_obj::__mClass;

void Tweener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Tweener"), hx::TCanCast< Tweener_obj> ,sStaticFields,sMemberFields,
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

void Tweener_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
