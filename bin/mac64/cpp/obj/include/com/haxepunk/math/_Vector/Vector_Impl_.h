#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#define INCLUDED_com_haxepunk_math__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,haxepunk,math,_Vector,Vector_Impl_)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace com{
namespace haxepunk{
namespace math{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  Vector_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vector_Impl_"); }

		static ::flash::geom::Point _new( hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic _new_dyn();

		static ::flash::geom::Point toPoint( ::flash::geom::Point this1);
		static Dynamic toPoint_dyn();

		static ::flash::geom::Point fromPoint( ::flash::geom::Point point);
		static Dynamic fromPoint_dyn();

		static Float get_x( ::flash::geom::Point this1);
		static Dynamic get_x_dyn();

		static Float set_x( ::flash::geom::Point this1,Float value);
		static Dynamic set_x_dyn();

		static Float get_y( ::flash::geom::Point this1);
		static Dynamic get_y_dyn();

		static Float set_y( ::flash::geom::Point this1,Float value);
		static Dynamic set_y_dyn();

		static Float dot( ::flash::geom::Point this1,::flash::geom::Point b);
		static Dynamic dot_dyn();

		static Float cross( ::flash::geom::Point this1,::flash::geom::Point b);
		static Dynamic cross_dyn();

		static Void invert( ::flash::geom::Point this1);
		static Dynamic invert_dyn();

		static ::flash::geom::Point rotate( ::flash::geom::Point this1,Float angle);
		static Dynamic rotate_dyn();

		static Void normalize( ::flash::geom::Point this1,hx::Null< Float >  size);
		static Dynamic normalize_dyn();

		static Float get_squareLength( ::flash::geom::Point this1);
		static Dynamic get_squareLength_dyn();

		static Float get_length( ::flash::geom::Point this1);
		static Dynamic get_length_dyn();

		static Float get_angle( ::flash::geom::Point this1);
		static Dynamic get_angle_dyn();

		static ::flash::geom::Point get_unit( ::flash::geom::Point this1);
		static Dynamic get_unit_dyn();

		static ::flash::geom::Point add( ::flash::geom::Point a,::flash::geom::Point b);
		static Dynamic add_dyn();

		static ::flash::geom::Point sub( ::flash::geom::Point a,::flash::geom::Point b);
		static Dynamic sub_dyn();

		static ::flash::geom::Point scalar_mult( ::flash::geom::Point a,Float b);
		static Dynamic scalar_mult_dyn();

		static ::flash::geom::Point scalar_divide( ::flash::geom::Point a,Float b);
		static Dynamic scalar_divide_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace math
} // end namespace _Vector

#endif /* INCLUDED_com_haxepunk_math__Vector_Vector_Impl_ */ 
