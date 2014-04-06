#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
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
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Masklist_obj::__construct(Dynamic masks)
{
HX_STACK_FRAME("com.haxepunk.masks.Masklist","new",0xbcd32a7c,"com.haxepunk.masks.Masklist.new","com/haxepunk/masks/Masklist.hx",18,0x7d42d233)

HX_STACK_ARG(masks,"masks")
{
	HX_STACK_LINE(19)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(20)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->_masks = _g;
	HX_STACK_LINE(21)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(21)
	this->_temp = _g1;
	HX_STACK_LINE(22)
	this->_count = (int)0;
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(24)
		while((true)){
			HX_STACK_LINE(24)
			if ((!(((_g2 < masks->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(24)
				break;
			}
			HX_STACK_LINE(24)
			Dynamic m = masks->__GetItem(_g2);		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(24)
			++(_g2);
			HX_STACK_LINE(24)
			this->add(m);
		}
	}
}
;
	return null();
}

//Masklist_obj::~Masklist_obj() { }

Dynamic Masklist_obj::__CreateEmpty() { return  new Masklist_obj; }
hx::ObjectPtr< Masklist_obj > Masklist_obj::__new(Dynamic masks)
{  hx::ObjectPtr< Masklist_obj > result = new Masklist_obj();
	result->__construct(masks);
	return result;}

Dynamic Masklist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Masklist_obj > result = new Masklist_obj();
	result->__construct(inArgs[0]);
	return result;}

bool Masklist_obj::collide( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","collide",0x84d0479a,"com.haxepunk.masks.Masklist.collide","com/haxepunk/masks/Masklist.hx",29,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(32)
			if ((m->collide(mask))){
				HX_STACK_LINE(32)
				return true;
			}
		}
	}
	HX_STACK_LINE(34)
	return false;
}


bool Masklist_obj::collideMasklist( ::com::haxepunk::masks::Masklist other){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","collideMasklist",0x82947104,"com.haxepunk.masks.Masklist.collideMasklist","com/haxepunk/masks/Masklist.hx",39,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			::com::haxepunk::Mask a = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(40)
			++(_g);
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(42)
				Array< ::Dynamic > _g3 = other->_masks;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(42)
				while((true)){
					HX_STACK_LINE(42)
					if ((!(((_g2 < _g3->length))))){
						HX_STACK_LINE(42)
						break;
					}
					HX_STACK_LINE(42)
					::com::haxepunk::Mask b = _g3->__get(_g2).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(42)
					++(_g2);
					HX_STACK_LINE(44)
					if ((a->collide(b))){
						HX_STACK_LINE(44)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(47)
	return true;
}


::com::haxepunk::Mask Masklist_obj::add( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","add",0xbcc94c3d,"com.haxepunk.masks.Masklist.add","com/haxepunk/masks/Masklist.hx",56,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(57)
	int _g = (this->_count)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	this->_masks[_g] = mask;
	HX_STACK_LINE(58)
	mask->list = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(59)
	mask->set_parent((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) ));
	HX_STACK_LINE(60)
	this->update();
	HX_STACK_LINE(61)
	return mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,add,return )

::com::haxepunk::Mask Masklist_obj::remove( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","remove",0x711f7ba8,"com.haxepunk.masks.Masklist.remove","com/haxepunk/masks/Masklist.hx",70,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(71)
	int _g = this->_masks->indexOf(mask,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	if (((_g < (int)0))){
		HX_STACK_LINE(71)
		return mask;
	}
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(72)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		Array< ::Dynamic > _g11 = this->_masks;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			if ((!(((_g1 < _g11->length))))){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			::com::haxepunk::Mask m = _g11->__get(_g1).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(73)
			++(_g1);
			HX_STACK_LINE(75)
			if (((m == mask))){
				HX_STACK_LINE(77)
				mask->list = null();
				HX_STACK_LINE(78)
				mask->set_parent(null());
				HX_STACK_LINE(79)
				(this->_count)--;
				HX_STACK_LINE(80)
				this->update();
			}
			else{
				HX_STACK_LINE(82)
				this->_temp[this->_temp->length] = m;
			}
		}
	}
	HX_STACK_LINE(84)
	Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(85)
	this->_masks = this->_temp;
	HX_STACK_LINE(86)
	this->_temp = temp;
	HX_STACK_LINE(87)
	return mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,remove,return )

Void Masklist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","removeAt",0x94b3eebb,"com.haxepunk.masks.Masklist.removeAt","com/haxepunk/masks/Masklist.hx",95,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(96)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(97)
		int i = this->_masks->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(98)
		hx::ModEq(index,i);
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			int _g = (i)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(101)
			if (((i == index))){
				HX_STACK_LINE(103)
				this->_masks->__get(index).StaticCast< ::com::haxepunk::Mask >()->list = null();
				HX_STACK_LINE(104)
				(this->_count)--;
				HX_STACK_LINE(105)
				this->update();
			}
			else{
				HX_STACK_LINE(107)
				this->_temp[this->_temp->length] = this->_masks->__get(index).StaticCast< ::com::haxepunk::Mask >();
			}
		}
		HX_STACK_LINE(109)
		Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(110)
		this->_masks = this->_temp;
		HX_STACK_LINE(111)
		this->_temp = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,removeAt,(void))

Void Masklist_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","removeAll",0x88bcee59,"com.haxepunk.masks.Masklist.removeAll","com/haxepunk/masks/Masklist.hx",118,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(119)
				++(_g);
				HX_STACK_LINE(119)
				m->list = null();
			}
		}
		HX_STACK_LINE(120)
		this->_count = (int)0;
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			Dynamic array = this->_masks;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(121)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(122)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(123)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,removeAll,(void))

::com::haxepunk::Mask Masklist_obj::getMask( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","getMask",0xb24588be,"com.haxepunk.masks.Masklist.getMask","com/haxepunk/masks/Masklist.hx",133,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(133)
		return this->_masks->__get(hx::Mod(index,this->_masks->length)).StaticCast< ::com::haxepunk::Mask >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,getMask,return )

::com::haxepunk::Entity Masklist_obj::set_parent( ::com::haxepunk::Entity parent){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","set_parent",0x408774cb,"com.haxepunk.masks.Masklist.set_parent","com/haxepunk/masks/Masklist.hx",137,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parent,"parent")
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		while((true)){
			HX_STACK_LINE(138)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(138)
				break;
			}
			HX_STACK_LINE(138)
			::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(138)
			++(_g);
			HX_STACK_LINE(138)
			m->set_parent(parent);
		}
	}
	HX_STACK_LINE(139)
	return this->super::set_parent(parent);
}


Void Masklist_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","update",0xf39c656d,"com.haxepunk.masks.Masklist.update","com/haxepunk/masks/Masklist.hx",144,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		int t = (int)0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(146)
		int l = (int)0;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(146)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(146)
		int b = (int)0;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(146)
		::com::haxepunk::masks::Hitbox h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			while((true)){
				HX_STACK_LINE(147)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(147)
					break;
				}
				HX_STACK_LINE(147)
				::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(147)
				++(_g);
				HX_STACK_LINE(149)
				::com::haxepunk::masks::Hitbox _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(149)
				_g2 = hx::TCast< com::haxepunk::masks::Hitbox >::cast(m);
				HX_STACK_LINE(149)
				::com::haxepunk::masks::Hitbox _g11 = h = _g2;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(149)
				if (((_g11 != null()))){
					HX_STACK_LINE(151)
					int _g21 = h->get_x();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(151)
					if (((_g21 < l))){
						HX_STACK_LINE(151)
						int _g3 = h->get_x();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(151)
						l = _g3;
					}
					HX_STACK_LINE(152)
					int _g4 = h->get_y();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(152)
					if (((_g4 < t))){
						HX_STACK_LINE(152)
						int _g5 = h->get_y();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(152)
						t = _g5;
					}
					HX_STACK_LINE(153)
					int _g6 = h->get_x();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(153)
					int _g7 = h->get_width();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(153)
					int _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(153)
					if (((_g8 > r))){
						HX_STACK_LINE(153)
						int _g9 = h->get_x();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(153)
						int _g10 = h->get_width();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(153)
						int _g111 = (_g9 + _g10);		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(153)
						r = _g111;
					}
					HX_STACK_LINE(154)
					int _g12 = h->get_y();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(154)
					int _g13 = h->get_height();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(154)
					int _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(154)
					if (((_g14 > b))){
						HX_STACK_LINE(154)
						int _g15 = h->get_y();		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(154)
						int _g16 = h->get_height();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(154)
						int _g17 = (_g15 + _g16);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(154)
						b = _g17;
					}
				}
			}
		}
		HX_STACK_LINE(159)
		this->_x = l;
		HX_STACK_LINE(160)
		this->_y = t;
		HX_STACK_LINE(161)
		this->_width = (r - l);
		HX_STACK_LINE(162)
		this->_height = (b - t);
		HX_STACK_LINE(163)
		this->super::update();
	}
return null();
}


Void Masklist_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","debugDraw",0xe393a713,"com.haxepunk.masks.Masklist.debugDraw","com/haxepunk/masks/Masklist.hx",168,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(168)
			m->debugDraw(graphics,scaleX,scaleY);
		}
	}
return null();
}


int Masklist_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","get_count",0x4be47842,"com.haxepunk.masks.Masklist.get_count","com/haxepunk/masks/Masklist.hx",175,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,get_count,return )


Masklist_obj::Masklist_obj()
{
}

void Masklist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Masklist);
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(_masks,"_masks");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_count,"_count");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Masklist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(_masks,"_masks");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Masklist_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp ? get_count() : count; }
		if (HX_FIELD_EQ(inName,"_temp") ) { return _temp; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_masks") ) { return _masks; }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"getMask") ) { return getMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Masklist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_masks") ) { _masks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Masklist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("_masks"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Masklist_obj,count),HX_CSTRING("count")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Masklist_obj,_masks),HX_CSTRING("_masks")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Masklist_obj,_temp),HX_CSTRING("_temp")},
	{hx::fsInt,(int)offsetof(Masklist_obj,_count),HX_CSTRING("_count")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("collide"),
	HX_CSTRING("collideMasklist"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("getMask"),
	HX_CSTRING("set_parent"),
	HX_CSTRING("update"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("count"),
	HX_CSTRING("get_count"),
	HX_CSTRING("_masks"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_count"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

#endif

Class Masklist_obj::__mClass;

void Masklist_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Masklist"), hx::TCanCast< Masklist_obj> ,sStaticFields,sMemberFields,
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

void Masklist_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
