#ifndef INCLUDED_entities_Ball
#define INCLUDED_entities_Ball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Sfx)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS1(entities,Ball)
HX_DECLARE_CLASS1(utils,Vector2)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Ball_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Ball_obj OBJ_;
		Ball_obj();
		Void __construct(int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ball_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ball_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ball"); }

		::com::haxepunk::graphics::Image g;
		::com::haxepunk::Sfx collisionSfx;
		::com::haxepunk::Sfx death;
		::utils::Vector2 velocity;
		Float speed;
		bool pause;
		int pauseCounter;
		bool slowmotion;
		Float slowmotionLeft;
		virtual Void update( );

};

} // end namespace entities

#endif /* INCLUDED_entities_Ball */ 
