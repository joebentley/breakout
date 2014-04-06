#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace math{
namespace _Vector{

Void Vector_Impl__obj::__construct()
{
	return null();
}

//Vector_Impl__obj::~Vector_Impl__obj() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return  new Vector_Impl__obj; }
hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{  hx::ObjectPtr< Vector_Impl__obj > result = new Vector_Impl__obj();
	result->__construct();
	return result;}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_Impl__obj > result = new Vector_Impl__obj();
	result->__construct();
	return result;}

::flash::geom::Point Vector_Impl__obj::_new( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","_new",0xa82790b3,"com.haxepunk.math._Vector.Vector_Impl_._new","com/haxepunk/math/Vector.hx",7,0xd050812d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(7)
		return ::flash::geom::Point_obj::__new(x,y);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,_new,return )

::flash::geom::Point Vector_Impl__obj::toPoint( ::flash::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","toPoint",0x027de4c3,"com.haxepunk.math._Vector.Vector_Impl_.toPoint","com/haxepunk/math/Vector.hx",9,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(9)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toPoint,return )

::flash::geom::Point Vector_Impl__obj::fromPoint( ::flash::geom::Point point){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","fromPoint",0x03b5d9f4,"com.haxepunk.math._Vector.Vector_Impl_.fromPoint","com/haxepunk/math/Vector.hx",12,0xd050812d)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(12)
	return ::flash::geom::Point_obj::__new(point->x,point->y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromPoint,return )

Float Vector_Impl__obj::get_x( ::flash::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_x",0x0fc411bd,"com.haxepunk.math._Vector.Vector_Impl_.get_x","com/haxepunk/math/Vector.hx",16,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(16)
	return this1->x;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_x,return )

Float Vector_Impl__obj::set_x( ::flash::geom::Point this1,Float value){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","set_x",0xf89307c9,"com.haxepunk.math._Vector.Vector_Impl_.set_x","com/haxepunk/math/Vector.hx",17,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(17)
	return this1->x = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_x,return )

Float Vector_Impl__obj::get_y( ::flash::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_y",0x0fc411be,"com.haxepunk.math._Vector.Vector_Impl_.get_y","com/haxepunk/math/Vector.hx",20,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(20)
	return this1->y;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_y,return )

Float Vector_Impl__obj::set_y( ::flash::geom::Point this1,Float value){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","set_y",0xf89307ca,"com.haxepunk.math._Vector.Vector_Impl_.set_y","com/haxepunk/math/Vector.hx",21,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(21)
	return this1->y = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_y,return )

Float Vector_Impl__obj::dot( ::flash::geom::Point this1,::flash::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","dot",0x56de1777,"com.haxepunk.math._Vector.Vector_Impl_.dot","com/haxepunk/math/Vector.hx",25,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(25)
	return ((this1->x * b->x) + (this1->y * b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,dot,return )

Float Vector_Impl__obj::cross( ::flash::geom::Point this1,::flash::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","cross",0xcabdcbee,"com.haxepunk.math._Vector.Vector_Impl_.cross","com/haxepunk/math/Vector.hx",30,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(30)
	return ((this1->x * b->x) - (this1->y * b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,cross,return )

Void Vector_Impl__obj::invert( ::flash::geom::Point this1){
{
		HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","invert",0xb8745ae8,"com.haxepunk.math._Vector.Vector_Impl_.invert","com/haxepunk/math/Vector.hx",34,0xd050812d)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(35)
		this1->x = -(this1->x);
		HX_STACK_LINE(36)
		this1->y = -(this1->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,invert,(void))

::flash::geom::Point Vector_Impl__obj::rotate( ::flash::geom::Point this1,Float angle){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","rotate",0xe3bbba2d,"com.haxepunk.math._Vector.Vector_Impl_.rotate","com/haxepunk/math/Vector.hx",40,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(41)
	Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(42)
	Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(43)
	return ::flash::geom::Point_obj::__new(((this1->x * cos) - (this1->y * sin)),((this1->x * sin) + (this1->y * cos)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,rotate,return )

Void Vector_Impl__obj::normalize( ::flash::geom::Point this1,hx::Null< Float >  __o_size){
Float size = __o_size.Default(1);
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","normalize",0x343e72fb,"com.haxepunk.math._Vector.Vector_Impl_.normalize","com/haxepunk/math/Vector.hx",47,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(48)
		Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(49)
		if (((len == (int)0))){
			HX_STACK_LINE(51)
			Float value = this1->y = (int)0;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(51)
			this1->x = value;
		}
		else{
			HX_STACK_LINE(55)
			this1->x = ((Float(this1->x) / Float(len)) * size);
			HX_STACK_LINE(56)
			this1->y = ((Float(this1->y) / Float(len)) * size);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,normalize,(void))

Float Vector_Impl__obj::get_squareLength( ::flash::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_squareLength",0x9c53f83e,"com.haxepunk.math._Vector.Vector_Impl_.get_squareLength","com/haxepunk/math/Vector.hx",63,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(63)
	return ((this1->x * this1->x) + (this1->y * this1->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_squareLength,return )

Float Vector_Impl__obj::get_length( ::flash::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_length",0x9085c981,"com.haxepunk.math._Vector.Vector_Impl_.get_length","com/haxepunk/math/Vector.hx",69,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(69)
	return ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

Float Vector_Impl__obj::get_angle( ::flash::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_angle",0xef28db98,"com.haxepunk.math._Vector.Vector_Impl_.get_angle","com/haxepunk/math/Vector.hx",75,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(75)
	return ::Math_obj::atan2(this1->y,this1->x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_angle,return )

::flash::geom::Point Vector_Impl__obj::get_unit( ::flash::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_unit",0xdaa2125f,"com.haxepunk.math._Vector.Vector_Impl_.get_unit","com/haxepunk/math/Vector.hx",80,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(81)
	Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(82)
	return ::flash::geom::Point_obj::__new((Float(this1->x) / Float(len)),(Float(this1->y) / Float(len)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_unit,return )

::flash::geom::Point Vector_Impl__obj::add( ::flash::geom::Point a,::flash::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","add",0x56dbc70f,"com.haxepunk.math._Vector.Vector_Impl_.add","com/haxepunk/math/Vector.hx",87,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(87)
	return ::flash::geom::Point_obj::__new((a->x + b->x),(a->y + b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,add,return )

::flash::geom::Point Vector_Impl__obj::sub( ::flash::geom::Point a,::flash::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","sub",0x56e97e6e,"com.haxepunk.math._Vector.Vector_Impl_.sub","com/haxepunk/math/Vector.hx",92,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(92)
	return ::flash::geom::Point_obj::__new((a->x - b->x),(a->y - b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,sub,return )

::flash::geom::Point Vector_Impl__obj::scalar_mult( ::flash::geom::Point a,Float b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","scalar_mult",0x78349011,"com.haxepunk.math._Vector.Vector_Impl_.scalar_mult","com/haxepunk/math/Vector.hx",97,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(97)
	return ::flash::geom::Point_obj::__new((a->x * b),(a->y * b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,scalar_mult,return )

::flash::geom::Point Vector_Impl__obj::scalar_divide( ::flash::geom::Point a,Float b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","scalar_divide",0xdf1461da,"com.haxepunk.math._Vector.Vector_Impl_.scalar_divide","com/haxepunk/math/Vector.hx",102,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(102)
	return ::flash::geom::Point_obj::__new((Float(a->x) / Float(b)),(Float(a->y) / Float(b)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,scalar_divide,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

Dynamic Vector_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toPoint") ) { return toPoint_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_unit") ) { return get_unit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromPoint") ) { return fromPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scalar_mult") ) { return scalar_mult_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalar_divide") ) { return scalar_divide_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_squareLength") ) { return get_squareLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toPoint"),
	HX_CSTRING("fromPoint"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("dot"),
	HX_CSTRING("cross"),
	HX_CSTRING("invert"),
	HX_CSTRING("rotate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("get_squareLength"),
	HX_CSTRING("get_length"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("get_unit"),
	HX_CSTRING("add"),
	HX_CSTRING("sub"),
	HX_CSTRING("scalar_mult"),
	HX_CSTRING("scalar_divide"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#endif

Class Vector_Impl__obj::__mClass;

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.math._Vector.Vector_Impl_"), hx::TCanCast< Vector_Impl__obj> ,sStaticFields,sMemberFields,
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

void Vector_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace math
} // end namespace _Vector
