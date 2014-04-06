#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Hitbox_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.Hitbox","new",0x379a43ca,"com.haxepunk.masks.Hitbox.new","com/haxepunk/masks/Hitbox.hx",10,0x9b169ee5)

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")
int width = __o_width.Default(1);
int height = __o_height.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(135)
	this->_y = (int)0;
	HX_STACK_LINE(134)
	this->_x = (int)0;
	HX_STACK_LINE(133)
	this->_height = (int)0;
	HX_STACK_LINE(132)
	this->_width = (int)0;
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->_width = width;
	HX_STACK_LINE(23)
	this->_height = height;
	HX_STACK_LINE(24)
	this->_x = x;
	HX_STACK_LINE(25)
	this->_y = y;
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(26)
		this->_check->set(key,this->collideHitbox_dyn());
	}
}
;
	return null();
}

//Hitbox_obj::~Hitbox_obj() { }

Dynamic Hitbox_obj::__CreateEmpty() { return  new Hitbox_obj; }
hx::ObjectPtr< Hitbox_obj > Hitbox_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(__o_width,__o_height,__o_x,__o_y);
	return result;}

Dynamic Hitbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

bool Hitbox_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","collideMask",0x717aa0f4,"com.haxepunk.masks.Hitbox.collideMask","com/haxepunk/masks/Hitbox.hx",31,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(32)
	Float px;		HX_STACK_VAR(px,"px");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",32,0x9b169ee5)
			{
				HX_STACK_LINE(32)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(32)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	px = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(33)
	Float py;		HX_STACK_VAR(py,"py");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",33,0x9b169ee5)
			{
				HX_STACK_LINE(33)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(33)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	py = (this->_y + _Function_1_2::Block(this));
	HX_STACK_LINE(35)
	Float ox;		HX_STACK_VAR(ox,"ox");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",35,0x9b169ee5)
			{
				HX_STACK_LINE(35)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(35)
	ox = (other->_parent->originX + _Function_1_3::Block(other));
	HX_STACK_LINE(36)
	Float oy;		HX_STACK_VAR(oy,"oy");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",36,0x9b169ee5)
			{
				HX_STACK_LINE(36)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(36)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(36)
	oy = (other->_parent->originY + _Function_1_4::Block(other));
	HX_STACK_LINE(38)
	return (bool((bool((bool(((px + this->_width) > ox)) && bool(((py + this->_height) > oy)))) && bool((px < (ox + other->_parent->width))))) && bool((py < (oy + other->_parent->height))));
}


bool Hitbox_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","collideHitbox",0x5a2a5fa0,"com.haxepunk.masks.Hitbox.collideHitbox","com/haxepunk/masks/Hitbox.hx",46,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(47)
	Float px;		HX_STACK_VAR(px,"px");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",47,0x9b169ee5)
			{
				HX_STACK_LINE(47)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(47)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(47)
	px = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(48)
	Float py;		HX_STACK_VAR(py,"py");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",48,0x9b169ee5)
			{
				HX_STACK_LINE(48)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(48)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(48)
	py = (this->_y + _Function_1_2::Block(this));
	HX_STACK_LINE(50)
	Float ox;		HX_STACK_VAR(ox,"ox");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",50,0x9b169ee5)
			{
				HX_STACK_LINE(50)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(50)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(50)
	ox = (other->_x + _Function_1_3::Block(other));
	HX_STACK_LINE(51)
	Float oy;		HX_STACK_VAR(oy,"oy");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Hitbox.hx",51,0x9b169ee5)
			{
				HX_STACK_LINE(51)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(51)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(51)
	oy = (other->_y + _Function_1_4::Block(other));
	HX_STACK_LINE(53)
	return (bool((bool((bool(((px + this->_width) > ox)) && bool(((py + this->_height) > oy)))) && bool((px < (ox + other->_width))))) && bool((py < (oy + other->_height))));
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,collideHitbox,return )

int Hitbox_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_x",0xfdba4739,"com.haxepunk.masks.Hitbox.get_x","com/haxepunk/masks/Hitbox.hx",63,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_x,return )

int Hitbox_obj::set_x( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_x",0xe6893d45,"com.haxepunk.masks.Hitbox.set_x","com/haxepunk/masks/Hitbox.hx",65,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	if (((this->_x == value))){
		HX_STACK_LINE(66)
		return value;
	}
	HX_STACK_LINE(67)
	this->_x = value;
	HX_STACK_LINE(68)
	if (((this->list != null()))){
		HX_STACK_LINE(68)
		this->list->update();
	}
	else{
		HX_STACK_LINE(69)
		if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
			HX_STACK_LINE(69)
			this->update();
		}
	}
	HX_STACK_LINE(70)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_x,return )

int Hitbox_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_y",0xfdba473a,"com.haxepunk.masks.Hitbox.get_y","com/haxepunk/masks/Hitbox.hx",77,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_y,return )

int Hitbox_obj::set_y( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_y",0xe6893d46,"com.haxepunk.masks.Hitbox.set_y","com/haxepunk/masks/Hitbox.hx",79,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(80)
	if (((this->_y == value))){
		HX_STACK_LINE(80)
		return value;
	}
	HX_STACK_LINE(81)
	this->_y = value;
	HX_STACK_LINE(82)
	if (((this->list != null()))){
		HX_STACK_LINE(82)
		this->list->update();
	}
	else{
		HX_STACK_LINE(83)
		if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
			HX_STACK_LINE(83)
			this->update();
		}
	}
	HX_STACK_LINE(84)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_y,return )

int Hitbox_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_width",0x5a0df147,"com.haxepunk.masks.Hitbox.get_width","com/haxepunk/masks/Hitbox.hx",91,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_width,return )

int Hitbox_obj::set_width( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_width",0x3d5edd53,"com.haxepunk.masks.Hitbox.set_width","com/haxepunk/masks/Hitbox.hx",93,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	if (((this->_width == value))){
		HX_STACK_LINE(94)
		return value;
	}
	HX_STACK_LINE(95)
	this->_width = value;
	HX_STACK_LINE(96)
	if (((this->list != null()))){
		HX_STACK_LINE(96)
		this->list->update();
	}
	else{
		HX_STACK_LINE(97)
		if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
			HX_STACK_LINE(97)
			this->update();
		}
	}
	HX_STACK_LINE(98)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_width,return )

int Hitbox_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_height",0x2874a586,"com.haxepunk.masks.Hitbox.get_height","com/haxepunk/masks/Hitbox.hx",105,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_height,return )

int Hitbox_obj::set_height( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_height",0x2bf243fa,"com.haxepunk.masks.Hitbox.set_height","com/haxepunk/masks/Hitbox.hx",107,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(108)
	if (((this->_height == value))){
		HX_STACK_LINE(108)
		return value;
	}
	HX_STACK_LINE(109)
	this->_height = value;
	HX_STACK_LINE(110)
	if (((this->list != null()))){
		HX_STACK_LINE(110)
		this->list->update();
	}
	else{
		HX_STACK_LINE(111)
		if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
			HX_STACK_LINE(111)
			this->update();
		}
	}
	HX_STACK_LINE(112)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_height,return )

Void Hitbox_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Hitbox","update",0xe91990df,"com.haxepunk.masks.Hitbox.update","com/haxepunk/masks/Hitbox.hx",118,0x9b169ee5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
			HX_STACK_LINE(121)
			this->_parent->originX = -(this->_x);
			HX_STACK_LINE(122)
			this->_parent->originY = -(this->_y);
			HX_STACK_LINE(123)
			this->_parent->width = this->_width;
			HX_STACK_LINE(124)
			this->_parent->height = this->_height;
			HX_STACK_LINE(126)
			if (((this->list != null()))){
				HX_STACK_LINE(127)
				this->list->update();
			}
		}
	}
return null();
}



Hitbox_obj::Hitbox_obj()
{
}

Dynamic Hitbox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hitbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hitbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Hitbox_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,_height),HX_CSTRING("_height")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,_x),HX_CSTRING("_x")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,_y),HX_CSTRING("_y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("update"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_x"),
	HX_CSTRING("_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#endif

Class Hitbox_obj::__mClass;

void Hitbox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Hitbox"), hx::TCanCast< Hitbox_obj> ,sStaticFields,sMemberFields,
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

void Hitbox_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
