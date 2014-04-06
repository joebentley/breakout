#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_flash_display_StageQuality
#include <flash/display/StageQuality.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{

Void Engine_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode)
{
HX_STACK_FRAME("com.haxepunk.Engine","new",0x48f87b2d,"com.haxepunk.Engine.new","com/haxepunk/Engine.hx",23,0xecb35503)

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")

HX_STACK_ARG(__o_frameRate,"frameRate")

HX_STACK_ARG(__o_fixed,"fixed")

HX_STACK_ARG(renderMode,"renderMode")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
Float frameRate = __o_frameRate.Default(60);
bool fixed = __o_fixed.Default(false);
{
	HX_STACK_LINE(427)
	this->_scenes = ::List_obj::__new();
	HX_STACK_LINE(426)
	this->_scene = ::com::haxepunk::Scene_obj::__new();
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(58)
	::flash::geom::Rectangle _g = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	::com::haxepunk::HXP_obj::bounds = _g;
	HX_STACK_LINE(59)
	::com::haxepunk::HXP_obj::assignedFrameRate = frameRate;
	HX_STACK_LINE(60)
	::com::haxepunk::HXP_obj::fixed = fixed;
	HX_STACK_LINE(63)
	::com::haxepunk::HXP_obj::engine = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(64)
	::com::haxepunk::HXP_obj::width = width;
	HX_STACK_LINE(65)
	::com::haxepunk::HXP_obj::height = height;
	HX_STACK_LINE(67)
	if (((renderMode != null()))){
		HX_STACK_LINE(69)
		::com::haxepunk::HXP_obj::renderMode = renderMode;
		HX_STACK_LINE(69)
		if (((::com::haxepunk::HXP_obj::screen == null()))){
			HX_STACK_LINE(69)
			::com::haxepunk::Screen _g1 = ::com::haxepunk::Screen_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			::com::haxepunk::HXP_obj::screen = _g1;
		}
		else{
			HX_STACK_LINE(69)
			::com::haxepunk::HXP_obj::screen->init();
		}
		HX_STACK_LINE(69)
		renderMode;
	}
	else{
		HX_STACK_LINE(73)
		::com::haxepunk::RenderMode value = ::com::haxepunk::RenderMode_obj::HARDWARE;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(73)
		::com::haxepunk::HXP_obj::renderMode = value;
		HX_STACK_LINE(73)
		if (((::com::haxepunk::HXP_obj::screen == null()))){
			HX_STACK_LINE(73)
			::com::haxepunk::Screen _g2 = ::com::haxepunk::Screen_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(73)
			::com::haxepunk::HXP_obj::screen = _g2;
		}
		else{
			HX_STACK_LINE(73)
			::com::haxepunk::HXP_obj::screen->init();
		}
		HX_STACK_LINE(73)
		value;
	}
	HX_STACK_LINE(77)
	if (((::com::haxepunk::HXP_obj::randomSeed == (int)0))){
		HX_STACK_LINE(77)
		Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(77)
		Float _g4 = ((int)2147483647 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(77)
		int value = ::Std_obj::_int(_g4);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(77)
		Float _g5 = ::com::haxepunk::HXP_obj::clamp(value,1.0,(int)2147483646);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(77)
		int _g6 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(77)
		::com::haxepunk::HXP_obj::_seed = _g6;
		HX_STACK_LINE(77)
		::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
		HX_STACK_LINE(77)
		::com::haxepunk::HXP_obj::_seed;
	}
	HX_STACK_LINE(79)
	::com::haxepunk::Entity _g7 = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(79)
	::com::haxepunk::HXP_obj::entity = _g7;
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		Float value = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(80)
		::com::haxepunk::HXP_obj::_time = value;
		HX_STACK_LINE(80)
		::com::haxepunk::HXP_obj::_time;
	}
	HX_STACK_LINE(82)
	this->paused = false;
	HX_STACK_LINE(83)
	this->maxElapsed = 0.0333;
	HX_STACK_LINE(84)
	this->maxFrameSkip = (int)5;
	HX_STACK_LINE(85)
	this->tickRate = (int)4;
	HX_STACK_LINE(86)
	Array< int > _g8 = Array_obj< int >::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(86)
	this->_frameList = _g8;
	HX_STACK_LINE(87)
	int _g9 = this->_frameListSum = (int)0;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(87)
	Float _g10 = this->_delta = _g9;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(87)
	this->_systemTime = _g10;
	HX_STACK_LINE(88)
	this->_frameLast = (int)0;
	HX_STACK_LINE(95)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onStage_dyn(),null(),null(),null());
	HX_STACK_LINE(96)
	::flash::Lib_obj::get_current()->addChild(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(__o_width,__o_height,__o_frameRate,__o_fixed,renderMode);
	return result;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Engine_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","init",0x8d2c03a3,"com.haxepunk.Engine.init","com/haxepunk/Engine.hx",103,0xecb35503)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,init,(void))

Void Engine_obj::focusGained( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","focusGained",0x6916ac63,"com.haxepunk.Engine.focusGained","com/haxepunk/Engine.hx",108,0xecb35503)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusGained,(void))

Void Engine_obj::focusLost( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","focusLost",0x08734469,"com.haxepunk.Engine.focusLost","com/haxepunk/Engine.hx",113,0xecb35503)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusLost,(void))

Void Engine_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","update",0x22a7d95c,"com.haxepunk.Engine.update","com/haxepunk/Engine.hx",119,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		this->_scene->updateLists(null());
		struct _Function_1_1{
			inline static bool Block( ::com::haxepunk::Engine_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Engine.hx",121,0xecb35503)
				{
					HX_STACK_LINE(121)
					::com::haxepunk::Scene _g = __this->_scenes->first();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(121)
					return (_g != __this->_scene);
				}
				return null();
			}
		};
		HX_STACK_LINE(121)
		if (((  (((  (((this->_scene != null()))) ? bool(!(this->_scenes->isEmpty())) : bool(false) ))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(121)
			this->_scene->end();
			HX_STACK_LINE(121)
			this->_scene->updateLists(null());
			HX_STACK_LINE(121)
			if (((  ((this->_scene->autoClear)) ? bool(this->_scene->get_hasTween()) : bool(false) ))){
				HX_STACK_LINE(121)
				this->_scene->clearTweens();
			}
			HX_STACK_LINE(121)
			if ((this->contains(this->_scene->sprite))){
				HX_STACK_LINE(121)
				this->removeChild(this->_scene->sprite);
			}
			HX_STACK_LINE(121)
			::com::haxepunk::Scene _g1 = this->_scenes->first();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			this->_scene = _g1;
			HX_STACK_LINE(121)
			this->addChild(this->_scene->sprite);
			HX_STACK_LINE(121)
			::com::haxepunk::HXP_obj::camera = this->_scene->camera;
			HX_STACK_LINE(121)
			this->_scene->updateLists(null());
			HX_STACK_LINE(121)
			this->_scene->begin();
			HX_STACK_LINE(121)
			this->_scene->updateLists(null());
		}
		HX_STACK_LINE(122)
		if (((  ((::com::haxepunk::HXP_obj::tweener->active)) ? bool(::com::haxepunk::HXP_obj::tweener->get_hasTween()) : bool(false) ))){
			HX_STACK_LINE(122)
			::com::haxepunk::HXP_obj::tweener->updateTweens();
		}
		HX_STACK_LINE(123)
		if ((this->_scene->active)){
			HX_STACK_LINE(125)
			if ((this->_scene->get_hasTween())){
				HX_STACK_LINE(125)
				this->_scene->updateTweens();
			}
			HX_STACK_LINE(126)
			this->_scene->update();
		}
		HX_STACK_LINE(128)
		this->_scene->updateLists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,update,(void))

Void Engine_obj::render( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","render",0xa0cbbea9,"com.haxepunk.Engine.render","com/haxepunk/Engine.hx",135,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		if ((::com::haxepunk::HXP_obj::screen->needsResize)){
			HX_STACK_LINE(136)
			::com::haxepunk::HXP_obj::resize(::com::haxepunk::HXP_obj::windowWidth,::com::haxepunk::HXP_obj::windowHeight);
		}
		HX_STACK_LINE(139)
		Float t = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(140)
		if (((this->_frameLast == (int)0))){
			HX_STACK_LINE(140)
			int _g = ::Std_obj::_int(t);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(140)
			this->_frameLast = _g;
		}
		HX_STACK_LINE(143)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(145)
			::com::haxepunk::HXP_obj::screen->swap();
			HX_STACK_LINE(146)
			::com::haxepunk::HXP_obj::screen->refresh();
		}
		HX_STACK_LINE(148)
		::com::haxepunk::utils::Draw_obj::resetTarget();
		HX_STACK_LINE(150)
		if ((this->_scene->visible)){
			HX_STACK_LINE(150)
			this->_scene->render();
		}
		HX_STACK_LINE(152)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(154)
			::com::haxepunk::HXP_obj::screen->redraw();
		}
		HX_STACK_LINE(158)
		int _g1 = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		t = _g1;
		HX_STACK_LINE(159)
		int _g2 = this->_frameList[this->_frameList->length] = ::Std_obj::_int((t - this->_frameLast));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(159)
		hx::AddEq(this->_frameListSum,_g2);
		HX_STACK_LINE(160)
		if (((this->_frameList->length > (int)10))){
			HX_STACK_LINE(160)
			Dynamic _g3 = this->_frameList->shift();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(160)
			hx::SubEq(this->_frameListSum,_g3);
		}
		HX_STACK_LINE(161)
		::com::haxepunk::HXP_obj::frameRate = (Float((int)1000) / Float(((Float(this->_frameListSum) / Float(this->_frameList->length)))));
		HX_STACK_LINE(162)
		this->_frameLast = t;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,render,(void))

Void Engine_obj::setStageProperties( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","setStageProperties",0x5137daa2,"com.haxepunk.Engine.setStageProperties","com/haxepunk/Engine.hx",169,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		::com::haxepunk::HXP_obj::stage->set_frameRate(::com::haxepunk::HXP_obj::assignedFrameRate);
		HX_STACK_LINE(171)
		::com::haxepunk::HXP_obj::stage->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(172)
		::com::haxepunk::HXP_obj::stage->set_quality(::flash::display::StageQuality_obj::HIGH);
		HX_STACK_LINE(173)
		::com::haxepunk::HXP_obj::stage->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(174)
		::com::haxepunk::HXP_obj::stage->set_displayState(::flash::display::StageDisplayState_obj::NORMAL);
		HX_STACK_LINE(175)
		int _g1 = ::com::haxepunk::HXP_obj::stage->get_stageWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		::com::haxepunk::HXP_obj::windowWidth = _g1;
		HX_STACK_LINE(176)
		int _g11 = ::com::haxepunk::HXP_obj::stage->get_stageHeight();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(176)
		::com::haxepunk::HXP_obj::windowHeight = _g11;
		HX_STACK_LINE(178)
		this->resize();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::flash::events::Event e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/haxepunk/Engine.hx",182,0xecb35503)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(182)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->resize();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(181)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::RESIZE, Dynamic(new _Function_1_1(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(::flash::events::Event e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/haxepunk/Engine.hx",185,0xecb35503)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(186)
				::com::haxepunk::HXP_obj::focused = true;
				HX_STACK_LINE(187)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->focusGained();
				HX_STACK_LINE(188)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->_scene->focusGained();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(185)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::ACTIVATE, Dynamic(new _Function_1_2(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(::flash::events::Event e){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","com/haxepunk/Engine.hx",191,0xecb35503)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(192)
				::com::haxepunk::HXP_obj::focused = false;
				HX_STACK_LINE(193)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->focusLost();
				HX_STACK_LINE(194)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->_scene->focusLost();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(191)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::DEACTIVATE, Dynamic(new _Function_1_3(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,_g)
		bool run(int orientation){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","com/haxepunk/Engine.hx",198,0xecb35503)
			HX_STACK_ARG(orientation,"orientation")
			{
				HX_STACK_LINE(199)
				if (((::com::haxepunk::HXP_obj::orientations->indexOf(orientation,null()) == (int)-1))){
					HX_STACK_LINE(199)
					return false;
				}
				HX_STACK_LINE(200)
				int tmp = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(201)
				::com::haxepunk::HXP_obj::height = ::com::haxepunk::HXP_obj::width;
				HX_STACK_LINE(202)
				::com::haxepunk::HXP_obj::width = tmp;
				HX_STACK_LINE(203)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->resize();
				HX_STACK_LINE(204)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(198)
		::flash::display::Stage_obj::shouldRotateInterface =  Dynamic(new _Function_1_4(_g));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,setStageProperties,(void))

Void Engine_obj::resize( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","resize",0xa41dad47,"com.haxepunk.Engine.resize","com/haxepunk/Engine.hx",211,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		if (((::com::haxepunk::HXP_obj::width == (int)0))){
			HX_STACK_LINE(212)
			int _g = ::com::haxepunk::HXP_obj::stage->get_stageWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(212)
			::com::haxepunk::HXP_obj::width = _g;
		}
		HX_STACK_LINE(213)
		if (((::com::haxepunk::HXP_obj::height == (int)0))){
			HX_STACK_LINE(213)
			int _g1 = ::com::haxepunk::HXP_obj::stage->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(213)
			::com::haxepunk::HXP_obj::height = _g1;
		}
		HX_STACK_LINE(215)
		int _g2 = ::com::haxepunk::HXP_obj::stage->get_stageWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(215)
		::com::haxepunk::HXP_obj::windowWidth = _g2;
		HX_STACK_LINE(216)
		int _g3 = ::com::haxepunk::HXP_obj::stage->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(216)
		::com::haxepunk::HXP_obj::windowHeight = _g3;
		HX_STACK_LINE(217)
		int _g4 = ::com::haxepunk::HXP_obj::stage->get_stageWidth();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(217)
		Float _g5 = (Float(_g4) / Float(::com::haxepunk::HXP_obj::width));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(217)
		::com::haxepunk::HXP_obj::screen->set_scaleX(_g5);
		HX_STACK_LINE(218)
		int _g6 = ::com::haxepunk::HXP_obj::stage->get_stageHeight();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(218)
		Float _g7 = (Float(_g6) / Float(::com::haxepunk::HXP_obj::height));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(218)
		::com::haxepunk::HXP_obj::screen->set_scaleY(_g7);
		HX_STACK_LINE(219)
		int _g8 = ::com::haxepunk::HXP_obj::stage->get_stageWidth();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(219)
		int _g9 = ::com::haxepunk::HXP_obj::stage->get_stageHeight();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(219)
		::com::haxepunk::HXP_obj::resize(_g8,_g9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,resize,(void))

Void Engine_obj::onStage( ::flash::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.Engine","onStage",0xacaf9e6c,"com.haxepunk.Engine.onStage","com/haxepunk/Engine.hx",224,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(232)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onStage_dyn(),null());
		HX_STACK_LINE(233)
		::flash::display::Stage _g = this->get_stage();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		::com::haxepunk::HXP_obj::stage = _g;
		HX_STACK_LINE(235)
		this->setStageProperties();
		HX_STACK_LINE(238)
		::com::haxepunk::utils::Input_obj::enable();
		struct _Function_1_1{
			inline static bool Block( ::com::haxepunk::Engine_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Engine.hx",241,0xecb35503)
				{
					HX_STACK_LINE(241)
					::com::haxepunk::Scene _g1 = __this->_scenes->first();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(241)
					return (_g1 != __this->_scene);
				}
				return null();
			}
		};
		HX_STACK_LINE(241)
		if (((  (((  (((this->_scene != null()))) ? bool(!(this->_scenes->isEmpty())) : bool(false) ))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(241)
			this->_scene->end();
			HX_STACK_LINE(241)
			this->_scene->updateLists(null());
			HX_STACK_LINE(241)
			if (((  ((this->_scene->autoClear)) ? bool(this->_scene->get_hasTween()) : bool(false) ))){
				HX_STACK_LINE(241)
				this->_scene->clearTweens();
			}
			HX_STACK_LINE(241)
			if ((this->contains(this->_scene->sprite))){
				HX_STACK_LINE(241)
				this->removeChild(this->_scene->sprite);
			}
			HX_STACK_LINE(241)
			::com::haxepunk::Scene _g2 = this->_scenes->first();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(241)
			this->_scene = _g2;
			HX_STACK_LINE(241)
			this->addChild(this->_scene->sprite);
			HX_STACK_LINE(241)
			::com::haxepunk::HXP_obj::camera = this->_scene->camera;
			HX_STACK_LINE(241)
			this->_scene->updateLists(null());
			HX_STACK_LINE(241)
			this->_scene->begin();
			HX_STACK_LINE(241)
			this->_scene->updateLists(null());
		}
		HX_STACK_LINE(244)
		::com::haxepunk::utils::Draw_obj::init();
		HX_STACK_LINE(245)
		this->init();
		HX_STACK_LINE(248)
		this->_rate = (Float((int)1000) / Float(::com::haxepunk::HXP_obj::assignedFrameRate));
		HX_STACK_LINE(249)
		if ((::com::haxepunk::HXP_obj::fixed)){
			HX_STACK_LINE(252)
			this->_skip = (this->_rate * ((this->maxFrameSkip + (int)1)));
			HX_STACK_LINE(253)
			int _g3 = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(253)
			Float _g4 = this->_prev = _g3;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(253)
			this->_last = _g4;
			HX_STACK_LINE(254)
			::haxe::Timer _g5 = ::haxe::Timer_obj::__new(this->tickRate);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(254)
			this->_timer = _g5;
			HX_STACK_LINE(255)
			this->_timer->run = this->onTimer_dyn();
		}
		else{
			HX_STACK_LINE(260)
			int _g6 = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(260)
			this->_last = _g6;
			HX_STACK_LINE(261)
			this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(265)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onStage,(void))

Void Engine_obj::onEnterFrame( ::flash::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.Engine","onEnterFrame",0xccabb987,"com.haxepunk.Engine.onEnterFrame","com/haxepunk/Engine.hx",286,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(288)
		int _g = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(288)
		Float _g1 = this->_gameTime = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(288)
		this->_time = _g1;
		HX_STACK_LINE(289)
		::com::haxepunk::HXP_obj::_systemTime = (this->_time - this->_systemTime);
		HX_STACK_LINE(290)
		this->_updateTime = this->_time;
		HX_STACK_LINE(291)
		::com::haxepunk::HXP_obj::elapsed = (Float(((this->_time - this->_last))) / Float((int)1000));
		HX_STACK_LINE(292)
		if (((::com::haxepunk::HXP_obj::elapsed > this->maxElapsed))){
			HX_STACK_LINE(292)
			::com::haxepunk::HXP_obj::elapsed = this->maxElapsed;
		}
		HX_STACK_LINE(293)
		hx::MultEq(::com::haxepunk::HXP_obj::elapsed,::com::haxepunk::HXP_obj::rate);
		HX_STACK_LINE(294)
		this->_last = this->_time;
		HX_STACK_LINE(297)
		if ((!(this->paused))){
			HX_STACK_LINE(297)
			this->update();
		}
		HX_STACK_LINE(300)
		if ((::com::haxepunk::HXP_obj::consoleEnabled())){
			struct _Function_2_1{
				inline static ::com::haxepunk::debug::Console Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Engine.hx",300,0xecb35503)
					{
						HX_STACK_LINE(300)
						if (((::com::haxepunk::HXP_obj::_console == null()))){
							HX_STACK_LINE(300)
							::com::haxepunk::debug::Console _g2 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(300)
							::com::haxepunk::HXP_obj::_console = _g2;
						}
						HX_STACK_LINE(300)
						return ::com::haxepunk::HXP_obj::_console;
					}
					return null();
				}
			};
			HX_STACK_LINE(300)
			(_Function_2_1::Block())->update();
		}
		HX_STACK_LINE(303)
		::com::haxepunk::utils::Input_obj::update();
		HX_STACK_LINE(306)
		int _g3 = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(306)
		Float _g4 = this->_renderTime = _g3;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(306)
		this->_time = _g4;
		HX_STACK_LINE(307)
		::com::haxepunk::HXP_obj::_updateTime = (this->_time - this->_updateTime);
		HX_STACK_LINE(310)
		if ((this->paused)){
			HX_STACK_LINE(310)
			this->_frameLast = this->_time;
		}
		else{
			HX_STACK_LINE(311)
			this->render();
		}
		HX_STACK_LINE(314)
		int _g5 = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(314)
		Float _g6 = this->_systemTime = _g5;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(314)
		this->_time = _g6;
		HX_STACK_LINE(315)
		::com::haxepunk::HXP_obj::_renderTime = (this->_time - this->_renderTime);
		HX_STACK_LINE(316)
		::com::haxepunk::HXP_obj::_gameTime = (this->_time - this->_gameTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onEnterFrame,(void))

Void Engine_obj::onTimer( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","onTimer",0x38d9f373,"com.haxepunk.Engine.onTimer","com/haxepunk/Engine.hx",321,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(323)
		int _g = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		this->_time = _g;
		HX_STACK_LINE(324)
		hx::AddEq(this->_delta,(this->_time - this->_last));
		HX_STACK_LINE(325)
		this->_last = this->_time;
		HX_STACK_LINE(328)
		if (((this->_delta < this->_rate))){
			HX_STACK_LINE(328)
			return null();
		}
		HX_STACK_LINE(331)
		int _g1 = ::Std_obj::_int(this->_time);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(331)
		this->_gameTime = _g1;
		HX_STACK_LINE(332)
		::com::haxepunk::HXP_obj::_systemTime = (this->_time - this->_systemTime);
		HX_STACK_LINE(335)
		if (((this->_delta > this->_skip))){
			HX_STACK_LINE(335)
			this->_delta = this->_skip;
		}
		HX_STACK_LINE(336)
		while((true)){
			HX_STACK_LINE(336)
			if ((!(((this->_delta >= this->_rate))))){
				HX_STACK_LINE(336)
				break;
			}
			HX_STACK_LINE(338)
			::com::haxepunk::HXP_obj::elapsed = ((this->_rate * ::com::haxepunk::HXP_obj::rate) * 0.001);
			HX_STACK_LINE(341)
			this->_updateTime = this->_time;
			HX_STACK_LINE(342)
			hx::SubEq(this->_delta,this->_rate);
			HX_STACK_LINE(343)
			this->_prev = this->_time;
			HX_STACK_LINE(346)
			if ((!(this->paused))){
				HX_STACK_LINE(346)
				this->update();
			}
			HX_STACK_LINE(349)
			if ((::com::haxepunk::HXP_obj::consoleEnabled())){
				struct _Function_3_1{
					inline static ::com::haxepunk::debug::Console Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Engine.hx",349,0xecb35503)
						{
							HX_STACK_LINE(349)
							if (((::com::haxepunk::HXP_obj::_console == null()))){
								HX_STACK_LINE(349)
								::com::haxepunk::debug::Console _g2 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(349)
								::com::haxepunk::HXP_obj::_console = _g2;
							}
							HX_STACK_LINE(349)
							return ::com::haxepunk::HXP_obj::_console;
						}
						return null();
					}
				};
				HX_STACK_LINE(349)
				(_Function_3_1::Block())->update();
			}
			HX_STACK_LINE(352)
			::com::haxepunk::utils::Input_obj::update();
			HX_STACK_LINE(355)
			int _g3 = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(355)
			this->_time = _g3;
			HX_STACK_LINE(356)
			::com::haxepunk::HXP_obj::_updateTime = (this->_time - this->_updateTime);
		}
		HX_STACK_LINE(360)
		this->_renderTime = this->_time;
		HX_STACK_LINE(363)
		if ((!(this->paused))){
			HX_STACK_LINE(363)
			this->render();
		}
		HX_STACK_LINE(366)
		int _g4 = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(366)
		Float _g5 = this->_systemTime = _g4;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(366)
		this->_time = _g5;
		HX_STACK_LINE(367)
		::com::haxepunk::HXP_obj::_renderTime = (this->_time - this->_renderTime);
		HX_STACK_LINE(368)
		::com::haxepunk::HXP_obj::_gameTime = (this->_time - this->_gameTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,onTimer,(void))

Void Engine_obj::checkScene( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","checkScene",0xa9cbd437,"com.haxepunk.Engine.checkScene","com/haxepunk/Engine.hx",374,0xecb35503)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( ::com::haxepunk::Engine_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Engine.hx",374,0xecb35503)
				{
					HX_STACK_LINE(374)
					::com::haxepunk::Scene _g = __this->_scenes->first();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(374)
					return (_g != __this->_scene);
				}
				return null();
			}
		};
		HX_STACK_LINE(374)
		if (((  (((  (((this->_scene != null()))) ? bool(!(this->_scenes->isEmpty())) : bool(false) ))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(376)
			this->_scene->end();
			HX_STACK_LINE(377)
			this->_scene->updateLists(null());
			HX_STACK_LINE(378)
			if (((  ((this->_scene->autoClear)) ? bool(this->_scene->get_hasTween()) : bool(false) ))){
				HX_STACK_LINE(378)
				this->_scene->clearTweens();
			}
			HX_STACK_LINE(379)
			if ((this->contains(this->_scene->sprite))){
				HX_STACK_LINE(379)
				this->removeChild(this->_scene->sprite);
			}
			HX_STACK_LINE(381)
			::com::haxepunk::Scene _g1 = this->_scenes->first();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(381)
			this->_scene = _g1;
			HX_STACK_LINE(383)
			this->addChild(this->_scene->sprite);
			HX_STACK_LINE(384)
			::com::haxepunk::HXP_obj::camera = this->_scene->camera;
			HX_STACK_LINE(385)
			this->_scene->updateLists(null());
			HX_STACK_LINE(386)
			this->_scene->begin();
			HX_STACK_LINE(387)
			this->_scene->updateLists(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,checkScene,(void))

Void Engine_obj::pushScene( ::com::haxepunk::Scene value){
{
		HX_STACK_FRAME("com.haxepunk.Engine","pushScene",0xa61d839f,"com.haxepunk.Engine.pushScene","com/haxepunk/Engine.hx",397,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(397)
		this->_scenes->push(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,pushScene,(void))

::com::haxepunk::Scene Engine_obj::popScene( ){
	HX_STACK_FRAME("com.haxepunk.Engine","popScene",0x69342c0e,"com.haxepunk.Engine.popScene","com/haxepunk/Engine.hx",405,0xecb35503)
	HX_STACK_THIS(this)
	HX_STACK_LINE(405)
	return this->_scenes->pop();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,popScene,return )

::com::haxepunk::Scene Engine_obj::get_scene( ){
	HX_STACK_FRAME("com.haxepunk.Engine","get_scene",0xa5ab7830,"com.haxepunk.Engine.get_scene","com/haxepunk/Engine.hx",413,0xecb35503)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,get_scene,return )

::com::haxepunk::Scene Engine_obj::set_scene( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("com.haxepunk.Engine","set_scene",0x88fc643c,"com.haxepunk.Engine.set_scene","com/haxepunk/Engine.hx",415,0xecb35503)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(416)
	if (((this->_scene == value))){
		HX_STACK_LINE(416)
		return value;
	}
	HX_STACK_LINE(417)
	if (((this->_scenes->length > (int)0))){
		HX_STACK_LINE(419)
		this->_scenes->pop();
	}
	HX_STACK_LINE(421)
	this->_scenes->push(value);
	HX_STACK_LINE(422)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,set_scene,return )


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_MARK_MEMBER_NAME(tickRate,"tickRate");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_scenes,"_scenes");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_rate,"_rate");
	HX_MARK_MEMBER_NAME(_skip,"_skip");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(_systemTime,"_systemTime");
	HX_MARK_MEMBER_NAME(_frameLast,"_frameLast");
	HX_MARK_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_MARK_MEMBER_NAME(_frameList,"_frameList");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_VISIT_MEMBER_NAME(tickRate,"tickRate");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_scenes,"_scenes");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_rate,"_rate");
	HX_VISIT_MEMBER_NAME(_skip,"_skip");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(_systemTime,"_systemTime");
	HX_VISIT_MEMBER_NAME(_frameLast,"_frameLast");
	HX_VISIT_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_VISIT_MEMBER_NAME(_frameList,"_frameList");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Engine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"_rate") ) { return _rate; }
		if (HX_FIELD_EQ(inName,"_skip") ) { return _skip; }
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStage") ) { return onStage_dyn(); }
		if (HX_FIELD_EQ(inName,"onTimer") ) { return onTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"_scenes") ) { return _scenes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { return tickRate; }
		if (HX_FIELD_EQ(inName,"popScene") ) { return popScene_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"pushScene") ) { return pushScene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { return maxElapsed; }
		if (HX_FIELD_EQ(inName,"checkScene") ) { return checkScene_dyn(); }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { return _frameLast; }
		if (HX_FIELD_EQ(inName,"_frameList") ) { return _frameList; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { return _systemTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { return maxFrameSkip; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { return _frameListSum; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setStageProperties") ) { return setStageProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return set_scene(inValue); }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rate") ) { _rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skip") ) { _skip=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scenes") ) { _scenes=inValue.Cast< ::List >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { tickRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { _frameLast=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameList") ) { _frameList=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { _systemTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { maxFrameSkip=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { _frameListSum=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("maxElapsed"));
	outFields->push(HX_CSTRING("maxFrameSkip"));
	outFields->push(HX_CSTRING("tickRate"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_scenes"));
	outFields->push(HX_CSTRING("_delta"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_rate"));
	outFields->push(HX_CSTRING("_skip"));
	outFields->push(HX_CSTRING("_prev"));
	outFields->push(HX_CSTRING("_updateTime"));
	outFields->push(HX_CSTRING("_renderTime"));
	outFields->push(HX_CSTRING("_gameTime"));
	outFields->push(HX_CSTRING("_systemTime"));
	outFields->push(HX_CSTRING("_frameLast"));
	outFields->push(HX_CSTRING("_frameListSum"));
	outFields->push(HX_CSTRING("_frameList"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Engine_obj,paused),HX_CSTRING("paused")},
	{hx::fsFloat,(int)offsetof(Engine_obj,maxElapsed),HX_CSTRING("maxElapsed")},
	{hx::fsInt,(int)offsetof(Engine_obj,maxFrameSkip),HX_CSTRING("maxFrameSkip")},
	{hx::fsInt,(int)offsetof(Engine_obj,tickRate),HX_CSTRING("tickRate")},
	{hx::fsObject /*::com::haxepunk::Scene*/ ,(int)offsetof(Engine_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Engine_obj,_scenes),HX_CSTRING("_scenes")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_delta),HX_CSTRING("_delta")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_time),HX_CSTRING("_time")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_last),HX_CSTRING("_last")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Engine_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_rate),HX_CSTRING("_rate")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_skip),HX_CSTRING("_skip")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_prev),HX_CSTRING("_prev")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_updateTime),HX_CSTRING("_updateTime")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_renderTime),HX_CSTRING("_renderTime")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_gameTime),HX_CSTRING("_gameTime")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_systemTime),HX_CSTRING("_systemTime")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_frameLast),HX_CSTRING("_frameLast")},
	{hx::fsInt,(int)offsetof(Engine_obj,_frameListSum),HX_CSTRING("_frameListSum")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Engine_obj,_frameList),HX_CSTRING("_frameList")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("paused"),
	HX_CSTRING("maxElapsed"),
	HX_CSTRING("maxFrameSkip"),
	HX_CSTRING("tickRate"),
	HX_CSTRING("init"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("focusLost"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("setStageProperties"),
	HX_CSTRING("resize"),
	HX_CSTRING("onStage"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onTimer"),
	HX_CSTRING("checkScene"),
	HX_CSTRING("pushScene"),
	HX_CSTRING("popScene"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_scenes"),
	HX_CSTRING("_delta"),
	HX_CSTRING("_time"),
	HX_CSTRING("_last"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_rate"),
	HX_CSTRING("_skip"),
	HX_CSTRING("_prev"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_systemTime"),
	HX_CSTRING("_frameLast"),
	HX_CSTRING("_frameListSum"),
	HX_CSTRING("_frameList"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#endif

Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Engine"), hx::TCanCast< Engine_obj> ,sStaticFields,sMemberFields,
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

void Engine_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
