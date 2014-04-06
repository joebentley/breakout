#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#define INCLUDED_com_haxepunk_masks_Hitbox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Mask.h>
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Hitbox_obj : public ::com::haxepunk::Mask_obj{
	public:
		typedef ::com::haxepunk::Mask_obj super;
		typedef Hitbox_obj OBJ_;
		Hitbox_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Hitbox_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hitbox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Hitbox"); }

		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);
		Dynamic collideHitbox_dyn();

		virtual int get_x( );
		Dynamic get_x_dyn();

		virtual int set_x( int value);
		Dynamic set_x_dyn();

		virtual int get_y( );
		Dynamic get_y_dyn();

		virtual int set_y( int value);
		Dynamic set_y_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual Void update( );

		int _width;
		int _height;
		int _x;
		int _y;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Hitbox */ 
