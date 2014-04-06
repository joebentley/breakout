#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{

Void Entity_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{
HX_STACK_FRAME("com.haxepunk.Entity","new",0x1ab00b0e,"com.haxepunk.Entity.new","com/haxepunk/Entity.hx",106,0x8aea1c42)

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")

HX_STACK_ARG(graphic,"graphic")

HX_STACK_ARG(mask,"mask")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(107)
	super::__construct();
	HX_STACK_LINE(108)
	this->visible = true;
	HX_STACK_LINE(109)
	this->collidable = true;
	HX_STACK_LINE(110)
	this->followCamera = false;
	HX_STACK_LINE(111)
	this->x = x;
	HX_STACK_LINE(112)
	this->y = y;
	HX_STACK_LINE(114)
	int _g = this->originY = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(114)
	this->originX = _g;
	HX_STACK_LINE(115)
	int _g1 = this->height = (int)0;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(115)
	this->width = _g1;
	HX_STACK_LINE(116)
	Float _g2 = this->_moveY = (int)0;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(116)
	this->_moveX = _g2;
	HX_STACK_LINE(117)
	this->_type = HX_CSTRING("");
	HX_STACK_LINE(118)
	this->_name = HX_CSTRING("");
	HX_STACK_LINE(120)
	::com::haxepunk::Mask _g3 = ::com::haxepunk::Mask_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(120)
	this->HITBOX = _g3;
	HX_STACK_LINE(121)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(122)
	this->_camera = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(124)
	this->set_layer((int)0);
	HX_STACK_LINE(126)
	if (((graphic != null()))){
		HX_STACK_LINE(126)
		this->set_graphic(graphic);
	}
	HX_STACK_LINE(127)
	if (((mask != null()))){
		HX_STACK_LINE(127)
		this->set_mask(mask);
	}
	HX_STACK_LINE(128)
	this->HITBOX->set_parent(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(129)
	::Class _g4 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(129)
	::String _g5 = ::Type_obj::getClassName(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(129)
	this->_class = _g5;
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(__o_x,__o_y,graphic,mask);
	return result;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float Entity_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_x",0x2743677d,"com.haxepunk.Entity.get_x","com/haxepunk/Entity.hx",42,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	if ((this->followCamera)){
		HX_STACK_LINE(43)
		return (this->x + ::com::haxepunk::HXP_obj::camera->x);
	}
	else{
		HX_STACK_LINE(45)
		return this->x;
	}
	HX_STACK_LINE(42)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_x,return )

Float Entity_obj::set_x( Float v){
	HX_STACK_FRAME("com.haxepunk.Entity","set_x",0x10125d89,"com.haxepunk.Entity.set_x","com/haxepunk/Entity.hx",49,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(49)
	return this->x = v;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_x,return )

Float Entity_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_y",0x2743677e,"com.haxepunk.Entity.get_y","com/haxepunk/Entity.hx",58,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	if ((this->followCamera)){
		HX_STACK_LINE(59)
		return (this->y + ::com::haxepunk::HXP_obj::camera->y);
	}
	else{
		HX_STACK_LINE(61)
		return this->y;
	}
	HX_STACK_LINE(58)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_y,return )

Float Entity_obj::set_y( Float v){
	HX_STACK_FRAME("com.haxepunk.Entity","set_y",0x10125d8a,"com.haxepunk.Entity.set_y","com/haxepunk/Entity.hx",65,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(65)
	return this->y = v;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_y,return )

Void Entity_obj::added( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","added",0xb22696ee,"com.haxepunk.Entity.added","com/haxepunk/Entity.hx",135,0x8aea1c42)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,added,(void))

Void Entity_obj::removed( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","removed",0xd8ba494e,"com.haxepunk.Entity.removed","com/haxepunk/Entity.hx",140,0x8aea1c42)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,removed,(void))

Void Entity_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","update",0x178cac1b,"com.haxepunk.Entity.update","com/haxepunk/Entity.hx",145,0x8aea1c42)
		HX_STACK_THIS(this)
	}
return null();
}


Void Entity_obj::render( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","render",0x95b09168,"com.haxepunk.Entity.render","com/haxepunk/Entity.hx",153,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		if (((  (((this->_graphic != null()))) ? bool(this->_graphic->get_visible()) : bool(false) ))){
			HX_STACK_LINE(155)
			if ((this->_graphic->relative)){
				HX_STACK_LINE(157)
				if ((this->followCamera)){
					HX_STACK_LINE(157)
					this->_point->x = (this->x + ::com::haxepunk::HXP_obj::camera->x);
				}
				else{
					HX_STACK_LINE(157)
					this->_point->x = this->x;
				}
				HX_STACK_LINE(158)
				if ((this->followCamera)){
					HX_STACK_LINE(158)
					this->_point->y = (this->y + ::com::haxepunk::HXP_obj::camera->y);
				}
				else{
					HX_STACK_LINE(158)
					this->_point->y = this->y;
				}
			}
			else{
				HX_STACK_LINE(160)
				Float _g = this->_point->y = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(160)
				this->_point->x = _g;
			}
			HX_STACK_LINE(161)
			if (((this->_scene == null()))){
				HX_STACK_LINE(161)
				this->_camera->x = ::com::haxepunk::HXP_obj::camera->x;
			}
			else{
				HX_STACK_LINE(161)
				this->_camera->x = this->_scene->camera->x;
			}
			HX_STACK_LINE(162)
			if (((this->_scene == null()))){
				HX_STACK_LINE(162)
				this->_camera->y = ::com::haxepunk::HXP_obj::camera->y;
			}
			else{
				HX_STACK_LINE(162)
				this->_camera->y = this->_scene->camera->y;
			}
			HX_STACK_LINE(163)
			if ((this->_graphic->blit)){
				HX_STACK_LINE(165)
				this->_graphic->render((  (((this->renderTarget != null()))) ? ::flash::display::BitmapData(this->renderTarget) : ::flash::display::BitmapData(::com::haxepunk::HXP_obj::buffer) ),this->_point,this->_camera);
			}
			else{
				HX_STACK_LINE(169)
				this->_graphic->renderAtlas(this->_layer,this->_point,this->_camera);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,render,(void))

::com::haxepunk::Entity Entity_obj::collide( ::String type,Float x,Float y){
	HX_STACK_FRAME("com.haxepunk.Entity","collide",0xd31dd92c,"com.haxepunk.Entity.collide","com/haxepunk/Entity.hx",182,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(183)
	if (((this->_scene == null()))){
		HX_STACK_LINE(183)
		return null();
	}
	HX_STACK_LINE(185)
	::List entities;		HX_STACK_VAR(entities,"entities");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		::com::haxepunk::Scene _this = this->_scene;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(185)
		if ((_this->_types->exists(type))){
			HX_STACK_LINE(185)
			entities = _this->_types->get(type);
		}
		else{
			HX_STACK_LINE(185)
			entities = null();
		}
	}
	HX_STACK_LINE(186)
	if (((bool(!(this->collidable)) || bool((entities == null()))))){
		HX_STACK_LINE(186)
		return null();
	}
	HX_STACK_LINE(188)
	if ((this->followCamera)){
		HX_STACK_LINE(188)
		this->_x = (this->x + ::com::haxepunk::HXP_obj::camera->x);
	}
	else{
		HX_STACK_LINE(188)
		this->_x = this->x;
	}
	HX_STACK_LINE(188)
	if ((this->followCamera)){
		HX_STACK_LINE(188)
		this->_y = (this->y + ::com::haxepunk::HXP_obj::camera->y);
	}
	else{
		HX_STACK_LINE(188)
		this->_y = this->y;
	}
	HX_STACK_LINE(189)
	this->x = x;
	HX_STACK_LINE(189)
	this->y = y;
	HX_STACK_LINE(191)
	if (((this->_mask == null()))){
		HX_STACK_LINE(193)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(entities->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			if (((bool((bool((bool((bool((bool(e->collidable) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX))))) && bool((((y - this->originY) + this->height) > (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY))))) && bool(((x - this->originX) < ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) + e->width))))) && bool(((y - this->originY) < ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) + e->height)))))){
				HX_STACK_LINE(201)
				if (((  ((!(((e->_mask == null()))))) ? bool(e->_mask->collide(this->HITBOX)) : bool(true) ))){
					HX_STACK_LINE(203)
					this->x = this->_x;
					HX_STACK_LINE(203)
					this->y = this->_y;
					HX_STACK_LINE(204)
					return e;
				}
			}
;
		}
	}
	else{
		HX_STACK_LINE(211)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(entities->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			if (((bool((bool((bool((bool((bool(e->collidable) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX))))) && bool((((y - this->originY) + this->height) > (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY))))) && bool(((x - this->originX) < ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) + e->width))))) && bool(((y - this->originY) < ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) + e->height)))))){
				HX_STACK_LINE(219)
				if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::haxepunk::Mask(e->_mask) : ::com::haxepunk::Mask(e->HITBOX) )))){
					HX_STACK_LINE(221)
					this->x = this->_x;
					HX_STACK_LINE(221)
					this->y = this->_y;
					HX_STACK_LINE(222)
					return e;
				}
			}
;
		}
	}
	HX_STACK_LINE(227)
	this->x = this->_x;
	HX_STACK_LINE(227)
	this->y = this->_y;
	HX_STACK_LINE(228)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collide,return )

::com::haxepunk::Entity Entity_obj::collideTypes( ::com::haxepunk::ds::Either types,Float x,Float y){
	HX_STACK_FRAME("com.haxepunk.Entity","collideTypes",0x7abc47ad,"com.haxepunk.Entity.collideTypes","com/haxepunk/Entity.hx",239,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(types,"types")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(240)
	if (((this->_scene == null()))){
		HX_STACK_LINE(240)
		return null();
	}
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		::com::haxepunk::ds::Either _g = types;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(242)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(242)
				::String s = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(245)
				return this->collide(s,x,y);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(242)
				Array< ::String > a = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(247)
					::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(248)
						while((true)){
							HX_STACK_LINE(248)
							if ((!(((_g1 < a->length))))){
								HX_STACK_LINE(248)
								break;
							}
							HX_STACK_LINE(248)
							::String type = a->__get(_g1);		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(248)
							++(_g1);
							HX_STACK_LINE(250)
							::com::haxepunk::Entity _g2 = this->collide(type,x,y);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(250)
							e = _g2;
							HX_STACK_LINE(251)
							if (((e != null()))){
								HX_STACK_LINE(251)
								return e;
							}
						}
					}
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideTypes,return )

Dynamic Entity_obj::collideWith( Dynamic e,Float x,Float y){
	HX_STACK_FRAME("com.haxepunk.Entity","collideWith",0xa8f18152,"com.haxepunk.Entity.collideWith","com/haxepunk/Entity.hx",266,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(267)
	if ((this->followCamera)){
		HX_STACK_LINE(267)
		this->_x = (this->x + ::com::haxepunk::HXP_obj::camera->x);
	}
	else{
		HX_STACK_LINE(267)
		this->_x = this->x;
	}
	HX_STACK_LINE(267)
	if ((this->followCamera)){
		HX_STACK_LINE(267)
		this->_y = (this->y + ::com::haxepunk::HXP_obj::camera->y);
	}
	else{
		HX_STACK_LINE(267)
		this->_y = this->y;
	}
	HX_STACK_LINE(268)
	this->x = x;
	HX_STACK_LINE(268)
	this->y = y;
	HX_STACK_LINE(270)
	if (((bool((bool((bool((bool((bool(this->collidable) && bool(e->__Field(HX_CSTRING("collidable"),true)))) && bool((((x - this->originX) + this->width) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)))))) && bool((((y - this->originY) + this->height) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)))))) && bool(((x - this->originX) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)) + e->__Field(HX_CSTRING("width"),true)))))) && bool(((y - this->originY) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)) + e->__Field(HX_CSTRING("height"),true))))))){
		HX_STACK_LINE(276)
		if (((this->_mask == null()))){
			HX_STACK_LINE(278)
			if (((  ((!(((e->__Field(HX_CSTRING("_mask"),true) == null()))))) ? bool(e->__Field(HX_CSTRING("_mask"),true)->__Field(HX_CSTRING("collide"),true)(this->HITBOX)) : bool(true) ))){
				HX_STACK_LINE(280)
				this->x = this->_x;
				HX_STACK_LINE(280)
				this->y = this->_y;
				HX_STACK_LINE(281)
				return e;
			}
			HX_STACK_LINE(283)
			this->x = this->_x;
			HX_STACK_LINE(283)
			this->y = this->_y;
			HX_STACK_LINE(284)
			return null();
		}
		HX_STACK_LINE(286)
		if ((this->_mask->collide((  (((e->__Field(HX_CSTRING("_mask"),true) != null()))) ? ::com::haxepunk::Mask(e->__Field(HX_CSTRING("_mask"),true)) : ::com::haxepunk::Mask(e->__Field(HX_CSTRING("HITBOX"),true)) )))){
			HX_STACK_LINE(288)
			this->x = this->_x;
			HX_STACK_LINE(288)
			this->y = this->_y;
			HX_STACK_LINE(289)
			return e;
		}
	}
	HX_STACK_LINE(292)
	this->x = this->_x;
	HX_STACK_LINE(292)
	this->y = this->_y;
	HX_STACK_LINE(293)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideWith,return )

bool Entity_obj::collideRect( Float x,Float y,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_FRAME("com.haxepunk.Entity","collideRect",0xa5a05870,"com.haxepunk.Entity.collideRect","com/haxepunk/Entity.hx",307,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(rX,"rX")
	HX_STACK_ARG(rY,"rY")
	HX_STACK_ARG(rWidth,"rWidth")
	HX_STACK_ARG(rHeight,"rHeight")
	HX_STACK_LINE(308)
	if (((bool((bool((bool((((x - this->originX) + this->width) >= rX)) && bool((((y - this->originY) + this->height) >= rY)))) && bool(((x - this->originX) <= (rX + rWidth))))) && bool(((y - this->originY) <= (rY + rHeight)))))){
		HX_STACK_LINE(313)
		if (((this->_mask == null()))){
			HX_STACK_LINE(313)
			return true;
		}
		HX_STACK_LINE(314)
		if ((this->followCamera)){
			HX_STACK_LINE(314)
			this->_x = (this->x + ::com::haxepunk::HXP_obj::camera->x);
		}
		else{
			HX_STACK_LINE(314)
			this->_x = this->x;
		}
		HX_STACK_LINE(314)
		if ((this->followCamera)){
			HX_STACK_LINE(314)
			this->_y = (this->y + ::com::haxepunk::HXP_obj::camera->y);
		}
		else{
			HX_STACK_LINE(314)
			this->_y = this->y;
		}
		HX_STACK_LINE(315)
		this->x = x;
		HX_STACK_LINE(315)
		this->y = y;
		HX_STACK_LINE(316)
		::com::haxepunk::HXP_obj::entity->x = rX;
		HX_STACK_LINE(317)
		::com::haxepunk::HXP_obj::entity->y = rY;
		HX_STACK_LINE(318)
		int _g = ::Std_obj::_int(rWidth);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(318)
		::com::haxepunk::HXP_obj::entity->width = _g;
		HX_STACK_LINE(319)
		int _g1 = ::Std_obj::_int(rHeight);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(319)
		::com::haxepunk::HXP_obj::entity->height = _g1;
		HX_STACK_LINE(320)
		if ((this->_mask->collide(::com::haxepunk::HXP_obj::entity->HITBOX))){
			HX_STACK_LINE(322)
			this->x = this->_x;
			HX_STACK_LINE(322)
			this->y = this->_y;
			HX_STACK_LINE(323)
			return true;
		}
		HX_STACK_LINE(325)
		this->x = this->_x;
		HX_STACK_LINE(325)
		this->y = this->_y;
		HX_STACK_LINE(326)
		return false;
	}
	HX_STACK_LINE(328)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(Entity_obj,collideRect,return )

bool Entity_obj::collidePoint( Float x,Float y,Float pX,Float pY){
	HX_STACK_FRAME("com.haxepunk.Entity","collidePoint",0x26808b84,"com.haxepunk.Entity.collidePoint","com/haxepunk/Entity.hx",340,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(pX,"pX")
	HX_STACK_ARG(pY,"pY")
	HX_STACK_LINE(341)
	if (((bool((bool((bool((pX >= (x - this->originX))) && bool((pY >= (y - this->originY))))) && bool((pX < ((x - this->originX) + this->width))))) && bool((pY < ((y - this->originY) + this->height)))))){
		HX_STACK_LINE(346)
		if (((this->_mask == null()))){
			HX_STACK_LINE(346)
			return true;
		}
		HX_STACK_LINE(347)
		if ((this->followCamera)){
			HX_STACK_LINE(347)
			this->_x = (this->x + ::com::haxepunk::HXP_obj::camera->x);
		}
		else{
			HX_STACK_LINE(347)
			this->_x = this->x;
		}
		HX_STACK_LINE(347)
		if ((this->followCamera)){
			HX_STACK_LINE(347)
			this->_y = (this->y + ::com::haxepunk::HXP_obj::camera->y);
		}
		else{
			HX_STACK_LINE(347)
			this->_y = this->y;
		}
		HX_STACK_LINE(348)
		this->x = x;
		HX_STACK_LINE(348)
		this->y = y;
		HX_STACK_LINE(349)
		::com::haxepunk::HXP_obj::entity->x = pX;
		HX_STACK_LINE(350)
		::com::haxepunk::HXP_obj::entity->y = pY;
		HX_STACK_LINE(351)
		::com::haxepunk::HXP_obj::entity->width = (int)1;
		HX_STACK_LINE(352)
		::com::haxepunk::HXP_obj::entity->height = (int)1;
		HX_STACK_LINE(353)
		if ((this->_mask->collide(::com::haxepunk::HXP_obj::entity->HITBOX))){
			HX_STACK_LINE(355)
			this->x = this->_x;
			HX_STACK_LINE(355)
			this->y = this->_y;
			HX_STACK_LINE(356)
			return true;
		}
		HX_STACK_LINE(358)
		this->x = this->_x;
		HX_STACK_LINE(358)
		this->y = this->_y;
		HX_STACK_LINE(359)
		return false;
	}
	HX_STACK_LINE(361)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collidePoint,return )

Void Entity_obj::collideInto( ::String type,Float x,Float y,Dynamic array){
{
		HX_STACK_FRAME("com.haxepunk.Entity","collideInto",0x9fb44fec,"com.haxepunk.Entity.collideInto","com/haxepunk/Entity.hx",373,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(374)
		if (((this->_scene == null()))){
			HX_STACK_LINE(374)
			return null();
		}
		HX_STACK_LINE(376)
		::List entities;		HX_STACK_VAR(entities,"entities");
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			::com::haxepunk::Scene _this = this->_scene;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(376)
			if ((_this->_types->exists(type))){
				HX_STACK_LINE(376)
				entities = _this->_types->get(type);
			}
			else{
				HX_STACK_LINE(376)
				entities = null();
			}
		}
		HX_STACK_LINE(377)
		if (((bool(!(this->collidable)) || bool((entities == null()))))){
			HX_STACK_LINE(377)
			return null();
		}
		HX_STACK_LINE(379)
		if ((this->followCamera)){
			HX_STACK_LINE(379)
			this->_x = (this->x + ::com::haxepunk::HXP_obj::camera->x);
		}
		else{
			HX_STACK_LINE(379)
			this->_x = this->x;
		}
		HX_STACK_LINE(379)
		if ((this->followCamera)){
			HX_STACK_LINE(379)
			this->_y = (this->y + ::com::haxepunk::HXP_obj::camera->y);
		}
		else{
			HX_STACK_LINE(379)
			this->_y = this->y;
		}
		HX_STACK_LINE(380)
		this->x = x;
		HX_STACK_LINE(380)
		this->y = y;
		HX_STACK_LINE(381)
		int n = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(383)
		if (((this->_mask == null()))){
			HX_STACK_LINE(385)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(entities->iterator());  __it->hasNext(); ){
				::com::haxepunk::Entity e = __it->next();
				{
					HX_STACK_LINE(387)
					e = e;
					HX_STACK_LINE(388)
					if (((bool((bool((bool((bool((bool(e->collidable) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX))))) && bool((((y - this->originY) + this->height) > (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY))))) && bool(((x - this->originX) < ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) + e->width))))) && bool(((y - this->originY) < ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) + e->height)))))){
						HX_STACK_LINE(394)
						if (((  ((!(((e->_mask == null()))))) ? bool(e->_mask->__Field(HX_CSTRING("collide"),true)(this->HITBOX)) : bool(true) ))){
							HX_STACK_LINE(394)
							int _g = (n)++;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(394)
							hx::IndexRef((array).mPtr,_g) = e;
						}
					}
				}
;
			}
		}
		else{
			HX_STACK_LINE(400)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(entities->iterator());  __it->hasNext(); ){
				::com::haxepunk::Entity e = __it->next();
				{
					HX_STACK_LINE(402)
					e = e;
					HX_STACK_LINE(403)
					if (((bool((bool((bool((bool((bool(e->collidable) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX))))) && bool((((y - this->originY) + this->height) > (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY))))) && bool(((x - this->originX) < ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) + e->width))))) && bool(((y - this->originY) < ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) + e->height)))))){
						HX_STACK_LINE(409)
						if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::haxepunk::Mask(e->_mask) : ::com::haxepunk::Mask(e->HITBOX) )))){
							HX_STACK_LINE(409)
							int _g1 = (n)++;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(409)
							hx::IndexRef((array).mPtr,_g1) = e;
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(413)
		this->x = this->_x;
		HX_STACK_LINE(413)
		this->y = this->_y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideInto,(void))

Void Entity_obj::collideTypesInto( Array< ::String > types,Float x,Float y,Dynamic array){
{
		HX_STACK_FRAME("com.haxepunk.Entity","collideTypesInto",0xc8d292ed,"com.haxepunk.Entity.collideTypesInto","com/haxepunk/Entity.hx",425,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(types,"types")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(426)
		if (((this->_scene == null()))){
			HX_STACK_LINE(426)
			return null();
		}
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(427)
			while((true)){
				HX_STACK_LINE(427)
				if ((!(((_g < types->length))))){
					HX_STACK_LINE(427)
					break;
				}
				HX_STACK_LINE(427)
				::String type = types->__get(_g);		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(427)
				++(_g);
				HX_STACK_LINE(427)
				this->collideInto(type,x,y,array);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideTypesInto,(void))

bool Entity_obj::get_onCamera( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_onCamera",0x983cf0bf,"com.haxepunk.Entity.get_onCamera","com/haxepunk/Entity.hx",436,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	if (((this->_scene == null()))){
		HX_STACK_LINE(438)
		return false;
	}
	else{
		HX_STACK_LINE(442)
		return this->collideRect((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ),this->_scene->camera->x,this->_scene->camera->y,::com::haxepunk::HXP_obj::width,::com::haxepunk::HXP_obj::height);
	}
	HX_STACK_LINE(436)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_onCamera,return )

::com::haxepunk::Scene Entity_obj::get_world( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_world",0x79e863d7,"com.haxepunk.Entity.get_world","com/haxepunk/Entity.hx",450,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(450)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_world,return )

::com::haxepunk::Scene Entity_obj::get_scene( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_scene",0x2455a6d1,"com.haxepunk.Entity.get_scene","com/haxepunk/Entity.hx",458,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(458)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scene,return )

Float Entity_obj::get_halfWidth( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_halfWidth",0xf16e6758,"com.haxepunk.Entity.get_halfWidth","com/haxepunk/Entity.hx",465,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	return (Float(this->width) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_halfWidth,return )

Float Entity_obj::get_halfHeight( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_halfHeight",0x057b7e55,"com.haxepunk.Entity.get_halfHeight","com/haxepunk/Entity.hx",471,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(471)
	return (Float(this->height) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_halfHeight,return )

Float Entity_obj::get_centerX( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_centerX",0x881beda8,"com.haxepunk.Entity.get_centerX","com/haxepunk/Entity.hx",477,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(477)
	return ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) + (Float(this->width) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_centerX,return )

Float Entity_obj::get_centerY( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_centerY",0x881beda9,"com.haxepunk.Entity.get_centerY","com/haxepunk/Entity.hx",483,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(483)
	return ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) + (Float(this->height) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_centerY,return )

Float Entity_obj::get_left( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_left",0xe4951222,"com.haxepunk.Entity.get_left","com/haxepunk/Entity.hx",489,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	return (((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_left,return )

Float Entity_obj::get_right( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_right",0x94e7d961,"com.haxepunk.Entity.get_right","com/haxepunk/Entity.hx",495,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(495)
	return ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_right,return )

Float Entity_obj::get_top( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_top",0x0c8758da,"com.haxepunk.Entity.get_top","com/haxepunk/Entity.hx",501,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(501)
	return (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_top,return )

Float Entity_obj::get_bottom( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_bottom",0xcd48edc6,"com.haxepunk.Entity.get_bottom","com/haxepunk/Entity.hx",507,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(507)
	return ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_bottom,return )

int Entity_obj::get_layer( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_layer",0x1b444f56,"com.haxepunk.Entity.get_layer","com/haxepunk/Entity.hx",513,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(513)
	return this->_layer;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_layer,return )

int Entity_obj::set_layer( int value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_layer",0xfe953b62,"com.haxepunk.Entity.set_layer","com/haxepunk/Entity.hx",515,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(516)
	if (((this->_layer == value))){
		HX_STACK_LINE(516)
		return this->_layer;
	}
	HX_STACK_LINE(517)
	if (((this->_scene == null()))){
		HX_STACK_LINE(519)
		this->_layer = value;
		HX_STACK_LINE(520)
		return this->_layer;
	}
	HX_STACK_LINE(522)
	this->_scene->removeRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(523)
	this->_layer = value;
	HX_STACK_LINE(524)
	this->_scene->addRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(525)
	return this->_layer;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_layer,return )

::String Entity_obj::get_type( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_type",0xe9edfcd5,"com.haxepunk.Entity.get_type","com/haxepunk/Entity.hx",532,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(532)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_type,return )

::String Entity_obj::set_type( ::String value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_type",0x984b5649,"com.haxepunk.Entity.set_type","com/haxepunk/Entity.hx",534,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(535)
	if (((this->_type == value))){
		HX_STACK_LINE(535)
		return this->_type;
	}
	HX_STACK_LINE(536)
	if (((this->_scene == null()))){
		HX_STACK_LINE(538)
		this->_type = value;
		HX_STACK_LINE(539)
		return this->_type;
	}
	HX_STACK_LINE(541)
	if (((this->_type != HX_CSTRING("")))){
		HX_STACK_LINE(541)
		this->_scene->removeType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(542)
	this->_type = value;
	HX_STACK_LINE(543)
	if (((value != HX_CSTRING("")))){
		HX_STACK_LINE(543)
		this->_scene->addType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(544)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_type,return )

::com::haxepunk::Mask Entity_obj::get_mask( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_mask",0xe53b4b07,"com.haxepunk.Entity.get_mask","com/haxepunk/Entity.hx",552,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(552)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_mask,return )

::com::haxepunk::Mask Entity_obj::set_mask( ::com::haxepunk::Mask value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_mask",0x9398a47b,"com.haxepunk.Entity.set_mask","com/haxepunk/Entity.hx",554,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(555)
	if (((this->_mask == value))){
		HX_STACK_LINE(555)
		return value;
	}
	HX_STACK_LINE(556)
	if (((this->_mask != null()))){
		HX_STACK_LINE(556)
		this->_mask->set_parent(null());
	}
	HX_STACK_LINE(557)
	this->_mask = value;
	HX_STACK_LINE(558)
	if (((value != null()))){
		HX_STACK_LINE(558)
		this->_mask->set_parent(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(559)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_mask,return )

::com::haxepunk::Graphic Entity_obj::get_graphic( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_graphic",0xe23d536d,"com.haxepunk.Entity.get_graphic","com/haxepunk/Entity.hx",566,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(566)
	return this->_graphic;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_graphic,return )

::com::haxepunk::Graphic Entity_obj::set_graphic( ::com::haxepunk::Graphic value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_graphic",0xecaa5a79,"com.haxepunk.Entity.set_graphic","com/haxepunk/Entity.hx",568,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(569)
	if (((this->_graphic == value))){
		HX_STACK_LINE(569)
		return value;
	}
	HX_STACK_LINE(570)
	this->_graphic = value;
	HX_STACK_LINE(571)
	return this->_graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_graphic,return )

::String Entity_obj::get_name( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_name",0xe5e47c66,"com.haxepunk.Entity.get_name","com/haxepunk/Entity.hx",575,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(575)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_name,return )

::String Entity_obj::set_name( ::String value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_name",0x9441d5da,"com.haxepunk.Entity.set_name","com/haxepunk/Entity.hx",577,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(578)
	if (((this->_name == value))){
		HX_STACK_LINE(578)
		return this->_name;
	}
	HX_STACK_LINE(579)
	if (((this->_scene == null()))){
		HX_STACK_LINE(581)
		this->_name = value;
		HX_STACK_LINE(582)
		return this->_name;
	}
	HX_STACK_LINE(584)
	if (((this->_name != HX_CSTRING("")))){
		HX_STACK_LINE(584)
		this->_scene->_entityNames->remove(this->_name);
	}
	HX_STACK_LINE(585)
	this->_name = value;
	HX_STACK_LINE(586)
	if (((value != HX_CSTRING("")))){
		HX_STACK_LINE(586)
		this->_scene->_entityNames->set(this->_name,hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(587)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_name,return )

::com::haxepunk::Graphic Entity_obj::addGraphic( ::com::haxepunk::Graphic g){
	HX_STACK_FRAME("com.haxepunk.Entity","addGraphic",0x52da1d99,"com.haxepunk.Entity.addGraphic","com/haxepunk/Entity.hx",597,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(g,"g")
	HX_STACK_LINE(598)
	if (((this->_graphic == null()))){
		HX_STACK_LINE(600)
		this->set_graphic(g);
	}
	else{
		HX_STACK_LINE(602)
		if ((::Std_obj::is(this->_graphic,hx::ClassOf< ::com::haxepunk::graphics::Graphiclist >()))){
			HX_STACK_LINE(604)
			(hx::TCast< com::haxepunk::graphics::Graphiclist >::cast(this->_graphic))->add(g);
		}
		else{
			HX_STACK_LINE(608)
			::com::haxepunk::graphics::Graphiclist list = ::com::haxepunk::graphics::Graphiclist_obj::__new(null());		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(609)
			list->add(this->_graphic);
			HX_STACK_LINE(610)
			list->add(g);
			HX_STACK_LINE(611)
			this->set_graphic(list);
		}
	}
	HX_STACK_LINE(613)
	return g;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,addGraphic,return )

Void Entity_obj::setHitbox( hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_originX,hx::Null< int >  __o_originY){
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int originX = __o_originX.Default(0);
int originY = __o_originY.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","setHitbox",0x1ea9d408,"com.haxepunk.Entity.setHitbox","com/haxepunk/Entity.hx",624,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(originX,"originX")
	HX_STACK_ARG(originY,"originY")
{
		HX_STACK_LINE(625)
		this->width = width;
		HX_STACK_LINE(626)
		this->height = height;
		HX_STACK_LINE(627)
		this->originX = originX;
		HX_STACK_LINE(628)
		this->originY = originY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,setHitbox,(void))

Void Entity_obj::setHitboxTo( Dynamic o){
{
		HX_STACK_FRAME("com.haxepunk.Entity","setHitboxTo",0x7bcd2fa3,"com.haxepunk.Entity.setHitboxTo","com/haxepunk/Entity.hx",636,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o,"o")
		HX_STACK_LINE(637)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(637)
		_g = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("width"),true)) );
		HX_STACK_LINE(637)
		this->width = _g;
		HX_STACK_LINE(638)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(638)
		_g1 = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("height"),true)) );
		HX_STACK_LINE(638)
		this->height = _g1;
		HX_STACK_LINE(640)
		if (((  ((::Reflect_obj::hasField(o,HX_CSTRING("originX")))) ? bool(::Reflect_obj::hasField(o,HX_CSTRING("originY"))) : bool(false) ))){
			HX_STACK_LINE(642)
			Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(642)
			_g2 = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("originX"),true)) );
			HX_STACK_LINE(642)
			this->originX = _g2;
			HX_STACK_LINE(643)
			Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(643)
			_g3 = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("originY"),true)) );
			HX_STACK_LINE(643)
			this->originY = _g3;
		}
		else{
			HX_STACK_LINE(647)
			Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(647)
			_g4 = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("x"),true)) );
			HX_STACK_LINE(647)
			this->originX = _g4;
			HX_STACK_LINE(648)
			Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(648)
			_g5 = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("y"),true)) );
			HX_STACK_LINE(648)
			this->originY = _g5;
			HX_STACK_LINE(650)
			this->originX = -(this->originX);
			HX_STACK_LINE(651)
			this->originY = -(this->originY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setHitboxTo,(void))

Void Entity_obj::setOrigin( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","setOrigin",0x12830056,"com.haxepunk.Entity.setOrigin","com/haxepunk/Entity.hx",661,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(662)
		this->originX = x;
		HX_STACK_LINE(663)
		this->originY = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,setOrigin,(void))

Void Entity_obj::centerOrigin( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","centerOrigin",0x5b20412d,"com.haxepunk.Entity.centerOrigin","com/haxepunk/Entity.hx",670,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(671)
		int _g = ::Std_obj::_int((Float(this->width) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(671)
		this->originX = _g;
		HX_STACK_LINE(672)
		int _g1 = ::Std_obj::_int((Float(this->height) / Float((int)2)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(672)
		this->originY = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,centerOrigin,(void))

Float Entity_obj::distanceFrom( ::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","distanceFrom",0x4281a2d1,"com.haxepunk.Entity.distanceFrom","com/haxepunk/Entity.hx",683,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(683)
		if ((!(useHitboxes))){
			HX_STACK_LINE(683)
			return ::Math_obj::sqrt(((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - ((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )))) * ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - ((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ))))) + (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - ((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )))) * ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - ((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )))))));
		}
		else{
			HX_STACK_LINE(684)
			return ::com::haxepunk::HXP_obj::distanceRects((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY),this->width,this->height,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(683)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,distanceFrom,return )

Float Entity_obj::distanceToPoint( Float px,Float py,hx::Null< bool >  __o_useHitbox){
bool useHitbox = __o_useHitbox.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","distanceToPoint",0x5e261dce,"com.haxepunk.Entity.distanceToPoint","com/haxepunk/Entity.hx",696,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(useHitbox,"useHitbox")
{
		HX_STACK_LINE(696)
		if ((!(useHitbox))){
			HX_STACK_LINE(696)
			return ::Math_obj::sqrt(((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - px)) * ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - px))) + (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - py)) * ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - py)))));
		}
		else{
			HX_STACK_LINE(697)
			return ::com::haxepunk::HXP_obj::distanceRectPoint(px,py,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY),this->width,this->height);
		}
		HX_STACK_LINE(696)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,distanceToPoint,return )

Float Entity_obj::distanceToRect( Float rx,Float ry,Float rwidth,Float rheight){
	HX_STACK_FRAME("com.haxepunk.Entity","distanceToRect",0xebe71d66,"com.haxepunk.Entity.distanceToRect","com/haxepunk/Entity.hx",710,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rwidth,"rwidth")
	HX_STACK_ARG(rheight,"rheight")
	HX_STACK_LINE(710)
	return ::com::haxepunk::HXP_obj::distanceRects(rx,ry,rwidth,rheight,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY),this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,distanceToRect,return )

::String Entity_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.Entity","toString",0x55991f3e,"com.haxepunk.Entity.toString","com/haxepunk/Entity.hx",719,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(719)
	return this->_class;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,toString,return )

Void Entity_obj::moveBy( Float x,Float y,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveBy",0x5d33e95a,"com.haxepunk.Entity.moveBy","com/haxepunk/Entity.hx",730,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(731)
		hx::AddEq(this->_moveX,x);
		HX_STACK_LINE(732)
		hx::AddEq(this->_moveY,y);
		HX_STACK_LINE(733)
		int _g = ::Math_obj::round(this->_moveX);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(733)
		x = _g;
		HX_STACK_LINE(734)
		int _g1 = ::Math_obj::round(this->_moveY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(734)
		y = _g1;
		HX_STACK_LINE(735)
		hx::SubEq(this->_moveX,x);
		HX_STACK_LINE(736)
		hx::SubEq(this->_moveY,y);
		HX_STACK_LINE(737)
		if (((solidType != null()))){
			HX_STACK_LINE(739)
			int sign;		HX_STACK_VAR(sign,"sign");
			HX_STACK_LINE(739)
			::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(740)
			if (((x != (int)0))){
				struct _Function_3_1{
					inline static bool Block( ::com::haxepunk::Entity_obj *__this,Float &x,::com::haxepunk::ds::Either &solidType,bool &sweep){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Entity.hx",742,0x8aea1c42)
						{
							struct _Function_4_1{
								inline static bool Block( ::com::haxepunk::Entity_obj *__this,Float &x,::com::haxepunk::ds::Either &solidType){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Entity.hx",742,0x8aea1c42)
									{
										HX_STACK_LINE(742)
										::com::haxepunk::Entity _g2 = __this->collideTypes(solidType,(((  ((__this->followCamera)) ? Float((__this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(__this->x) )) + x),(  ((__this->followCamera)) ? Float((__this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(__this->y) ));		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(742)
										return (_g2 != null());
									}
									return null();
								}
							};
							HX_STACK_LINE(742)
							return (  ((!(sweep))) ? bool(_Function_4_1::Block(__this,x,solidType)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(742)
				if (((  ((this->collidable)) ? bool(_Function_3_1::Block(this,x,solidType,sweep)) : bool(false) ))){
					HX_STACK_LINE(744)
					if (((x > (int)0))){
						HX_STACK_LINE(744)
						sign = (int)1;
					}
					else{
						HX_STACK_LINE(744)
						sign = (int)-1;
					}
					HX_STACK_LINE(745)
					while((true)){
						HX_STACK_LINE(745)
						if ((!(((x != (int)0))))){
							HX_STACK_LINE(745)
							break;
						}
						HX_STACK_LINE(747)
						::com::haxepunk::Entity _g3 = this->collideTypes(solidType,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + sign),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(747)
						::com::haxepunk::Entity _g4 = e = _g3;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(747)
						if (((_g4 != null()))){
							HX_STACK_LINE(749)
							if ((this->moveCollideX(e))){
								HX_STACK_LINE(749)
								break;
							}
							else{
								HX_STACK_LINE(750)
								::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(750)
								_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + sign);
							}
						}
						else{
							HX_STACK_LINE(754)
							::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(754)
							_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + sign);
						}
						HX_STACK_LINE(756)
						hx::SubEq(x,sign);
					}
				}
				else{
					HX_STACK_LINE(759)
					::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(759)
					_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + x);
				}
			}
			HX_STACK_LINE(761)
			if (((y != (int)0))){
				struct _Function_3_1{
					inline static bool Block( ::com::haxepunk::Entity_obj *__this,Float &y,::com::haxepunk::ds::Either &solidType,bool &sweep){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Entity.hx",763,0x8aea1c42)
						{
							struct _Function_4_1{
								inline static bool Block( ::com::haxepunk::Entity_obj *__this,Float &y,::com::haxepunk::ds::Either &solidType){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Entity.hx",763,0x8aea1c42)
									{
										HX_STACK_LINE(763)
										::com::haxepunk::Entity _g5 = __this->collideTypes(solidType,(  ((__this->followCamera)) ? Float((__this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(__this->x) ),(((  ((__this->followCamera)) ? Float((__this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(__this->y) )) + y));		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(763)
										return (_g5 != null());
									}
									return null();
								}
							};
							HX_STACK_LINE(763)
							return (  ((!(sweep))) ? bool(_Function_4_1::Block(__this,y,solidType)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(763)
				if (((  ((this->collidable)) ? bool(_Function_3_1::Block(this,y,solidType,sweep)) : bool(false) ))){
					HX_STACK_LINE(765)
					if (((y > (int)0))){
						HX_STACK_LINE(765)
						sign = (int)1;
					}
					else{
						HX_STACK_LINE(765)
						sign = (int)-1;
					}
					HX_STACK_LINE(766)
					while((true)){
						HX_STACK_LINE(766)
						if ((!(((y != (int)0))))){
							HX_STACK_LINE(766)
							break;
						}
						HX_STACK_LINE(768)
						::com::haxepunk::Entity _g6 = this->collideTypes(solidType,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + sign));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(768)
						::com::haxepunk::Entity _g7 = e = _g6;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(768)
						if (((_g7 != null()))){
							HX_STACK_LINE(770)
							if ((this->moveCollideY(e))){
								HX_STACK_LINE(770)
								break;
							}
							else{
								HX_STACK_LINE(771)
								::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(771)
								_g2->y = (((  ((_g2->followCamera)) ? Float((_g2->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g2->y) )) + sign);
							}
						}
						else{
							HX_STACK_LINE(775)
							::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(775)
							_g2->y = (((  ((_g2->followCamera)) ? Float((_g2->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g2->y) )) + sign);
						}
						HX_STACK_LINE(777)
						hx::SubEq(y,sign);
					}
				}
				else{
					HX_STACK_LINE(780)
					::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(780)
					_g2->y = (((  ((_g2->followCamera)) ? Float((_g2->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g2->y) )) + y);
				}
			}
		}
		else{
			HX_STACK_LINE(785)
			{
				HX_STACK_LINE(785)
				::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(785)
				_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + x);
			}
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(786)
				::com::haxepunk::Entity _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(786)
				_g2->y = (((  ((_g2->followCamera)) ? Float((_g2->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g2->y) )) + y);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveBy,(void))

Void Entity_obj::moveTo( Float x,Float y,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveTo",0x5d33f8fe,"com.haxepunk.Entity.moveTo","com/haxepunk/Entity.hx",799,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(799)
		this->moveBy((x - ((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ))),(y - ((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ))),solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveTo,(void))

Void Entity_obj::moveTowards( Float x,Float y,Float amount,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveTowards",0xbf3240f9,"com.haxepunk.Entity.moveTowards","com/haxepunk/Entity.hx",811,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(812)
		this->_point->x = (x - ((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )));
		HX_STACK_LINE(813)
		this->_point->y = (y - ((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )));
		HX_STACK_LINE(814)
		if (((((this->_point->x * this->_point->x) + (this->_point->y * this->_point->y)) > (amount * amount)))){
			HX_STACK_LINE(816)
			this->_point->normalize(amount);
		}
		HX_STACK_LINE(818)
		this->moveBy(this->_point->x,this->_point->y,solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Entity_obj,moveTowards,(void))

Void Entity_obj::moveAtAngle( Float angle,Float amount,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveAtAngle",0x99cf5f7d,"com.haxepunk.Entity.moveAtAngle","com/haxepunk/Entity.hx",829,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(830)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(831)
		Float _g = ::Math_obj::cos(angle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(831)
		Float _g1 = (_g * amount);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(831)
		Float _g2 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(831)
		Float _g3 = (_g2 * amount);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(831)
		this->moveBy(_g1,_g3,solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveAtAngle,(void))

bool Entity_obj::moveCollideX( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Entity","moveCollideX",0xa9f576dd,"com.haxepunk.Entity.moveCollideX","com/haxepunk/Entity.hx",842,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(842)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideX,return )

bool Entity_obj::moveCollideY( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Entity","moveCollideY",0xa9f576de,"com.haxepunk.Entity.moveCollideY","com/haxepunk/Entity.hx",853,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(853)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideY,return )

Void Entity_obj::clampHorizontal( Float left,Float right,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","clampHorizontal",0xd243a36d,"com.haxepunk.Entity.clampHorizontal","com/haxepunk/Entity.hx",863,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(864)
		if ((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) < (left + padding)))){
			HX_STACK_LINE(864)
			this->x = ((left + this->originX) + padding);
		}
		HX_STACK_LINE(865)
		if (((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) + this->width) > (right - padding)))){
			HX_STACK_LINE(865)
			this->x = (((right - this->width) + this->originX) - padding);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampHorizontal,(void))

Void Entity_obj::clampVertical( Float top,Float bottom,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","clampVertical",0x18697ebf,"com.haxepunk.Entity.clampVertical","com/haxepunk/Entity.hx",875,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(876)
		if ((((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) < (top + padding)))){
			HX_STACK_LINE(876)
			this->y = ((top + this->originY) + padding);
		}
		HX_STACK_LINE(877)
		if (((((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) + this->height) > (bottom - padding)))){
			HX_STACK_LINE(877)
			this->y = (((bottom - this->height) + this->originY) - padding);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampVertical,(void))

Void Entity_obj::centerGraphicInRect( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","centerGraphicInRect",0x93dfc80a,"com.haxepunk.Entity.centerGraphicInRect","com/haxepunk/Entity.hx",885,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(885)
		if (((this->_graphic != null()))){
			HX_STACK_LINE(887)
			this->_graphic->x = (Float(this->width) / Float((int)2));
			HX_STACK_LINE(888)
			this->_graphic->y = (Float(this->height) / Float((int)2));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,centerGraphicInRect,(void))

::com::haxepunk::Entity Entity_obj::_EMPTY;


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(collidable,"collidable");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(followCamera,"followCamera");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(renderTarget,"renderTarget");
	HX_MARK_MEMBER_NAME(onCamera,"onCamera");
	HX_MARK_MEMBER_NAME(halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(centerX,"centerX");
	HX_MARK_MEMBER_NAME(centerY,"centerY");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_layer,"_layer");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_MARK_MEMBER_NAME(HITBOX,"HITBOX");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Tweener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(collidable,"collidable");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(followCamera,"followCamera");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(renderTarget,"renderTarget");
	HX_VISIT_MEMBER_NAME(onCamera,"onCamera");
	HX_VISIT_MEMBER_NAME(halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(centerX,"centerX");
	HX_VISIT_MEMBER_NAME(centerY,"centerY");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_layer,"_layer");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_VISIT_MEMBER_NAME(HITBOX,"HITBOX");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Tweener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp ? get_y() : y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return inCallProp ? get_top() : top; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return inCallProp ? get_left() : left; }
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { return get_name(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		if (HX_FIELD_EQ(inName,"world") ) { return get_world(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		if (HX_FIELD_EQ(inName,"right") ) { return inCallProp ? get_right() : right; }
		if (HX_FIELD_EQ(inName,"layer") ) { return get_layer(); }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_EMPTY") ) { return _EMPTY; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return inCallProp ? get_bottom() : bottom; }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return moveBy_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_layer") ) { return _layer; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { return HITBOX; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"removed") ) { return removed_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"centerX") ) { return inCallProp ? get_centerX() : centerX; }
		if (HX_FIELD_EQ(inName,"centerY") ) { return inCallProp ? get_centerY() : centerY; }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"graphic") ) { return get_graphic(); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCamera") ) { return inCallProp ? get_onCamera() : onCamera; }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphic") ) { return _graphic; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return inCallProp ? get_halfWidth() : halfWidth; }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layer") ) { return get_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitbox") ) { return setHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"setOrigin") ) { return setOrigin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collidable") ) { return collidable; }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return inCallProp ? get_halfHeight() : halfHeight; }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideWith") ) { return collideWith_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"collideInto") ) { return collideInto_dyn(); }
		if (HX_FIELD_EQ(inName,"get_centerX") ) { return get_centerX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_centerY") ) { return get_centerY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphic") ) { return get_graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitboxTo") ) { return setHitboxTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowards") ) { return moveTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"moveAtAngle") ) { return moveAtAngle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"followCamera") ) { return followCamera; }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { return renderTarget; }
		if (HX_FIELD_EQ(inName,"collideTypes") ) { return collideTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onCamera") ) { return get_onCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceFrom") ) { return distanceFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { return _recycleNext; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_halfWidth") ) { return get_halfWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"clampVertical") ) { return clampVertical_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_halfHeight") ) { return get_halfHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToRect") ) { return distanceToRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"clampHorizontal") ) { return clampHorizontal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideTypesInto") ) { return collideTypesInto_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"centerGraphicInRect") ) { return centerGraphicInRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { return set_type(inValue); }
		if (HX_FIELD_EQ(inName,"mask") ) { return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { return set_name(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { return set_layer(inValue); }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_EMPTY") ) { _EMPTY=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layer") ) { _layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { HITBOX=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerX") ) { centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerY") ) { centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphic") ) { return set_graphic(inValue); }
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCamera") ) { onCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast< ::com::haxepunk::Graphic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collidable") ) { collidable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"followCamera") ) { followCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { renderTarget=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { _recycleNext=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("collidable"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("followCamera"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("renderTarget"));
	outFields->push(HX_CSTRING("onCamera"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("halfWidth"));
	outFields->push(HX_CSTRING("halfHeight"));
	outFields->push(HX_CSTRING("centerX"));
	outFields->push(HX_CSTRING("centerY"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("graphic"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_layer"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("_recycleNext"));
	outFields->push(HX_CSTRING("HITBOX"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_graphic"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_camera"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_EMPTY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Entity_obj,visible),HX_CSTRING("visible")},
	{hx::fsBool,(int)offsetof(Entity_obj,collidable),HX_CSTRING("collidable")},
	{hx::fsFloat,(int)offsetof(Entity_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Entity_obj,y),HX_CSTRING("y")},
	{hx::fsBool,(int)offsetof(Entity_obj,followCamera),HX_CSTRING("followCamera")},
	{hx::fsInt,(int)offsetof(Entity_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Entity_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(Entity_obj,originX),HX_CSTRING("originX")},
	{hx::fsInt,(int)offsetof(Entity_obj,originY),HX_CSTRING("originY")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(Entity_obj,renderTarget),HX_CSTRING("renderTarget")},
	{hx::fsBool,(int)offsetof(Entity_obj,onCamera),HX_CSTRING("onCamera")},
	{hx::fsFloat,(int)offsetof(Entity_obj,halfWidth),HX_CSTRING("halfWidth")},
	{hx::fsFloat,(int)offsetof(Entity_obj,halfHeight),HX_CSTRING("halfHeight")},
	{hx::fsFloat,(int)offsetof(Entity_obj,centerX),HX_CSTRING("centerX")},
	{hx::fsFloat,(int)offsetof(Entity_obj,centerY),HX_CSTRING("centerY")},
	{hx::fsFloat,(int)offsetof(Entity_obj,left),HX_CSTRING("left")},
	{hx::fsFloat,(int)offsetof(Entity_obj,right),HX_CSTRING("right")},
	{hx::fsFloat,(int)offsetof(Entity_obj,top),HX_CSTRING("top")},
	{hx::fsFloat,(int)offsetof(Entity_obj,bottom),HX_CSTRING("bottom")},
	{hx::fsString,(int)offsetof(Entity_obj,_class),HX_CSTRING("_class")},
	{hx::fsObject /*::com::haxepunk::Scene*/ ,(int)offsetof(Entity_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsString,(int)offsetof(Entity_obj,_type),HX_CSTRING("_type")},
	{hx::fsInt,(int)offsetof(Entity_obj,_layer),HX_CSTRING("_layer")},
	{hx::fsString,(int)offsetof(Entity_obj,_name),HX_CSTRING("_name")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Entity_obj,_recycleNext),HX_CSTRING("_recycleNext")},
	{hx::fsObject /*::com::haxepunk::Mask*/ ,(int)offsetof(Entity_obj,HITBOX),HX_CSTRING("HITBOX")},
	{hx::fsObject /*::com::haxepunk::Mask*/ ,(int)offsetof(Entity_obj,_mask),HX_CSTRING("_mask")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_x),HX_CSTRING("_x")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_y),HX_CSTRING("_y")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_moveX),HX_CSTRING("_moveX")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_moveY),HX_CSTRING("_moveY")},
	{hx::fsObject /*::com::haxepunk::Graphic*/ ,(int)offsetof(Entity_obj,_graphic),HX_CSTRING("_graphic")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Entity_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Entity_obj,_camera),HX_CSTRING("_camera")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("visible"),
	HX_CSTRING("collidable"),
	HX_CSTRING("x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("followCamera"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("originX"),
	HX_CSTRING("originY"),
	HX_CSTRING("renderTarget"),
	HX_CSTRING("added"),
	HX_CSTRING("removed"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("collide"),
	HX_CSTRING("collideTypes"),
	HX_CSTRING("collideWith"),
	HX_CSTRING("collideRect"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collideInto"),
	HX_CSTRING("collideTypesInto"),
	HX_CSTRING("onCamera"),
	HX_CSTRING("get_onCamera"),
	HX_CSTRING("get_world"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("halfWidth"),
	HX_CSTRING("get_halfWidth"),
	HX_CSTRING("halfHeight"),
	HX_CSTRING("get_halfHeight"),
	HX_CSTRING("centerX"),
	HX_CSTRING("get_centerX"),
	HX_CSTRING("centerY"),
	HX_CSTRING("get_centerY"),
	HX_CSTRING("left"),
	HX_CSTRING("get_left"),
	HX_CSTRING("right"),
	HX_CSTRING("get_right"),
	HX_CSTRING("top"),
	HX_CSTRING("get_top"),
	HX_CSTRING("bottom"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("get_layer"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("get_type"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_mask"),
	HX_CSTRING("set_mask"),
	HX_CSTRING("get_graphic"),
	HX_CSTRING("set_graphic"),
	HX_CSTRING("get_name"),
	HX_CSTRING("set_name"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("setHitbox"),
	HX_CSTRING("setHitboxTo"),
	HX_CSTRING("setOrigin"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("distanceFrom"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("distanceToRect"),
	HX_CSTRING("toString"),
	HX_CSTRING("moveBy"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("moveTowards"),
	HX_CSTRING("moveAtAngle"),
	HX_CSTRING("moveCollideX"),
	HX_CSTRING("moveCollideY"),
	HX_CSTRING("clampHorizontal"),
	HX_CSTRING("clampVertical"),
	HX_CSTRING("centerGraphicInRect"),
	HX_CSTRING("_class"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_type"),
	HX_CSTRING("_layer"),
	HX_CSTRING("_name"),
	HX_CSTRING("_recycleNext"),
	HX_CSTRING("HITBOX"),
	HX_CSTRING("_mask"),
	HX_CSTRING("_x"),
	HX_CSTRING("_y"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_graphic"),
	HX_CSTRING("_point"),
	HX_CSTRING("_camera"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Entity_obj::_EMPTY,"_EMPTY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Entity_obj::_EMPTY,"_EMPTY");
};

#endif

Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Entity"), hx::TCanCast< Entity_obj> ,sStaticFields,sMemberFields,
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

void Entity_obj::__boot()
{
	_EMPTY= ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());
}

} // end namespace com
} // end namespace haxepunk
