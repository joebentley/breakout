#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
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
namespace com{
namespace haxepunk{
namespace graphics{

Void Graphiclist_obj::__construct(Array< ::Dynamic > graphic)
{
HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","new",0xd76d404e,"com.haxepunk.graphics.Graphiclist.new","com/haxepunk/graphics/Graphiclist.hx",21,0x2585e6c3)

HX_STACK_ARG(graphic,"graphic")
{
	HX_STACK_LINE(22)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	this->_graphics = _g;
	HX_STACK_LINE(23)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	this->_temp = _g1;
	HX_STACK_LINE(24)
	::flash::geom::Point _g2 = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(24)
	this->_camera = _g2;
	HX_STACK_LINE(25)
	this->_count = (int)0;
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	if (((graphic != null()))){
		HX_STACK_LINE(31)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			if ((!(((_g3 < graphic->length))))){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::com::haxepunk::Graphic g = graphic->__get(_g3).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(31)
			++(_g3);
			HX_STACK_LINE(31)
			this->add(g);
		}
	}
}
;
	return null();
}

//Graphiclist_obj::~Graphiclist_obj() { }

Dynamic Graphiclist_obj::__CreateEmpty() { return  new Graphiclist_obj; }
hx::ObjectPtr< Graphiclist_obj > Graphiclist_obj::__new(Array< ::Dynamic > graphic)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(graphic);
	return result;}

Dynamic Graphiclist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphiclist_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","update",0x618c3edb,"com.haxepunk.graphics.Graphiclist.update","com/haxepunk/graphics/Graphiclist.hx",38,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		while((true)){
			HX_STACK_LINE(38)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(38)
				break;
			}
			HX_STACK_LINE(38)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(38)
			++(_g);
			HX_STACK_LINE(40)
			if ((g->active)){
				HX_STACK_LINE(40)
				g->update();
			}
		}
	}
return null();
}


Void Graphiclist_obj::renderList( Dynamic renderFunc,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","renderList",0x1f25a0a6,"com.haxepunk.graphics.Graphiclist.renderList","com/haxepunk/graphics/Graphiclist.hx",45,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderFunc,"renderFunc")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(46)
		hx::AddEq(point->x,this->x);
		HX_STACK_LINE(47)
		hx::AddEq(point->y,this->y);
		HX_STACK_LINE(48)
		hx::MultEq(camera->x,this->scrollX);
		HX_STACK_LINE(49)
		hx::MultEq(camera->y,this->scrollY);
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(51)
			while((true)){
				HX_STACK_LINE(51)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(51)
					break;
				}
				HX_STACK_LINE(51)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(51)
				++(_g);
				HX_STACK_LINE(53)
				if ((g->get_visible())){
					HX_STACK_LINE(55)
					if ((g->relative)){
						HX_STACK_LINE(57)
						this->_point->x = point->x;
						HX_STACK_LINE(58)
						this->_point->y = point->y;
					}
					else{
						HX_STACK_LINE(60)
						Float _g2 = this->_point->y = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(60)
						this->_point->x = _g2;
					}
					HX_STACK_LINE(61)
					this->_camera->x = camera->x;
					HX_STACK_LINE(62)
					this->_camera->y = camera->y;
					HX_STACK_LINE(63)
					renderFunc(g).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphiclist_obj,renderList,(void))

Void Graphiclist_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","render",0xdfb02428,"com.haxepunk.graphics.Graphiclist.render","com/haxepunk/graphics/Graphiclist.hx",70,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(69)
		::com::haxepunk::graphics::Graphiclist _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			hx::AddEq(point->x,this->x);
			HX_STACK_LINE(71)
			hx::AddEq(point->y,this->y);
			HX_STACK_LINE(71)
			hx::MultEq(camera->x,this->scrollX);
			HX_STACK_LINE(71)
			hx::MultEq(camera->y,this->scrollY);
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(71)
				Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(71)
				while((true)){
					HX_STACK_LINE(71)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(71)
						break;
					}
					HX_STACK_LINE(71)
					::com::haxepunk::Graphic g = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(71)
					++(_g1);
					HX_STACK_LINE(71)
					if ((g->get_visible())){
						HX_STACK_LINE(71)
						if ((g->relative)){
							HX_STACK_LINE(71)
							this->_point->x = point->x;
							HX_STACK_LINE(71)
							this->_point->y = point->y;
						}
						else{
							HX_STACK_LINE(71)
							Float _g2 = this->_point->y = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(71)
							this->_point->x = _g2;
						}
						HX_STACK_LINE(71)
						this->_camera->x = camera->x;
						HX_STACK_LINE(71)
						this->_camera->y = camera->y;
						HX_STACK_LINE(72)
						g->render(target,_g->_point,_g->_camera);
					}
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::renderAtlas( int layer,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","renderAtlas",0xd39e8803,"com.haxepunk.graphics.Graphiclist.renderAtlas","com/haxepunk/graphics/Graphiclist.hx",78,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(77)
		::com::haxepunk::graphics::Graphiclist _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			hx::AddEq(point->x,this->x);
			HX_STACK_LINE(79)
			hx::AddEq(point->y,this->y);
			HX_STACK_LINE(79)
			hx::MultEq(camera->x,this->scrollX);
			HX_STACK_LINE(79)
			hx::MultEq(camera->y,this->scrollY);
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(79)
				Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(79)
				while((true)){
					HX_STACK_LINE(79)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(79)
						break;
					}
					HX_STACK_LINE(79)
					::com::haxepunk::Graphic g = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(79)
					++(_g1);
					HX_STACK_LINE(79)
					if ((g->get_visible())){
						HX_STACK_LINE(79)
						if ((g->relative)){
							HX_STACK_LINE(79)
							this->_point->x = point->x;
							HX_STACK_LINE(79)
							this->_point->y = point->y;
						}
						else{
							HX_STACK_LINE(79)
							Float _g2 = this->_point->y = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(79)
							this->_point->x = _g2;
						}
						HX_STACK_LINE(79)
						this->_camera->x = camera->x;
						HX_STACK_LINE(79)
						this->_camera->y = camera->y;
						HX_STACK_LINE(80)
						g->renderAtlas(layer,_g->_point,_g->_camera);
					}
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","destroy",0x7fe12be8,"com.haxepunk.graphics.Graphiclist.destroy","com/haxepunk/graphics/Graphiclist.hx",89,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(89)
			++(_g);
			HX_STACK_LINE(91)
			g->destroy();
		}
	}
return null();
}


::com::haxepunk::Graphic Graphiclist_obj::add( ::com::haxepunk::Graphic graphic){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","add",0xd763620f,"com.haxepunk.graphics.Graphiclist.add","com/haxepunk/graphics/Graphiclist.hx",101,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(102)
	if (((graphic == null()))){
		HX_STACK_LINE(102)
		return graphic;
	}
	HX_STACK_LINE(105)
	if (((this->_count == (int)0))){
		HX_STACK_LINE(105)
		this->blit = graphic->blit;
	}
	else{
		HX_STACK_LINE(106)
		if (((this->blit != graphic->blit))){
			HX_STACK_LINE(106)
			HX_STACK_DO_THROW(HX_CSTRING("Can't add graphic objects with different render methods."));
		}
	}
	HX_STACK_LINE(108)
	int _g = (this->_count)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(108)
	this->_graphics[_g] = graphic;
	HX_STACK_LINE(109)
	if ((!(this->active))){
		HX_STACK_LINE(109)
		this->active = graphic->active;
	}
	HX_STACK_LINE(110)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,add,return )

::com::haxepunk::Graphic Graphiclist_obj::remove( ::com::haxepunk::Graphic graphic){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","remove",0xdf0f5516,"com.haxepunk.graphics.Graphiclist.remove","com/haxepunk/graphics/Graphiclist.hx",119,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(120)
	int _g = this->_graphics->indexOf(graphic,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(120)
	if (((_g < (int)0))){
		HX_STACK_LINE(120)
		return graphic;
	}
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(121)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(123)
		Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			if ((!(((_g1 < _g11->length))))){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(123)
			::com::haxepunk::Graphic g = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(123)
			++(_g1);
			HX_STACK_LINE(125)
			if (((g == graphic))){
				HX_STACK_LINE(125)
				(this->_count)--;
			}
			else{
				HX_STACK_LINE(126)
				this->_temp[this->_temp->length] = g;
			}
		}
	}
	HX_STACK_LINE(128)
	Array< ::Dynamic > temp = this->_graphics;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(129)
	this->_graphics = this->_temp;
	HX_STACK_LINE(130)
	this->_temp = temp;
	HX_STACK_LINE(131)
	this->updateCheck();
	HX_STACK_LINE(132)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,remove,return )

Void Graphiclist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","removeAt",0x415f7fa9,"com.haxepunk.graphics.Graphiclist.removeAt","com/haxepunk/graphics/Graphiclist.hx",140,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(141)
		if (((this->_graphics->length == (int)0))){
			HX_STACK_LINE(141)
			return null();
		}
		HX_STACK_LINE(142)
		hx::ModEq(index,this->_graphics->length);
		HX_STACK_LINE(143)
		this->remove(this->_graphics->__get(hx::Mod(index,this->_graphics->length)).StaticCast< ::com::haxepunk::Graphic >());
		HX_STACK_LINE(144)
		this->updateCheck();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,removeAt,(void))

Void Graphiclist_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","removeAll",0xf2302dab,"com.haxepunk.graphics.Graphiclist.removeAll","com/haxepunk/graphics/Graphiclist.hx",151,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			Dynamic array = this->_graphics;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(152)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(153)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(154)
		this->_count = (int)0;
		HX_STACK_LINE(155)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,removeAll,(void))

Array< ::Dynamic > Graphiclist_obj::get_children( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","get_children",0x327fef9a,"com.haxepunk.graphics.Graphiclist.get_children","com/haxepunk/graphics/Graphiclist.hx",162,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	return this->_graphics;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_children,return )

int Graphiclist_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","get_count",0xb557b794,"com.haxepunk.graphics.Graphiclist.get_count","com/haxepunk/graphics/Graphiclist.hx",168,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_count,return )

Void Graphiclist_obj::updateCheck( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","updateCheck",0x0c5f0fed,"com.haxepunk.graphics.Graphiclist.updateCheck","com/haxepunk/graphics/Graphiclist.hx",174,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(175)
		this->active = false;
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			while((true)){
				HX_STACK_LINE(176)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(176)
					break;
				}
				HX_STACK_LINE(176)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(176)
				++(_g);
				HX_STACK_LINE(178)
				if ((g->active)){
					HX_STACK_LINE(180)
					this->active = true;
					HX_STACK_LINE(181)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,updateCheck,(void))


Graphiclist_obj::Graphiclist_obj()
{
}

void Graphiclist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphiclist);
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphiclist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Graphiclist_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp ? get_children() : children; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderList") ) { return renderList_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCheck") ) { return updateCheck_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphiclist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphiclist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("_graphics"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_camera"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,children),HX_CSTRING("children")},
	{hx::fsInt,(int)offsetof(Graphiclist_obj,count),HX_CSTRING("count")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,_graphics),HX_CSTRING("_graphics")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,_temp),HX_CSTRING("_temp")},
	{hx::fsInt,(int)offsetof(Graphiclist_obj,_count),HX_CSTRING("_count")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Graphiclist_obj,_camera),HX_CSTRING("_camera")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("renderList"),
	HX_CSTRING("render"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("destroy"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("children"),
	HX_CSTRING("get_children"),
	HX_CSTRING("count"),
	HX_CSTRING("get_count"),
	HX_CSTRING("updateCheck"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_count"),
	HX_CSTRING("_camera"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

#endif

Class Graphiclist_obj::__mClass;

void Graphiclist_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Graphiclist"), hx::TCanCast< Graphiclist_obj> ,sStaticFields,sMemberFields,
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

void Graphiclist_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
