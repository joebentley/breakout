#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_Ease
#include <com/haxepunk/utils/Ease.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Ease_obj::__construct()
{
	return null();
}

//Ease_obj::~Ease_obj() { }

Dynamic Ease_obj::__CreateEmpty() { return  new Ease_obj; }
hx::ObjectPtr< Ease_obj > Ease_obj::__new()
{  hx::ObjectPtr< Ease_obj > result = new Ease_obj();
	result->__construct();
	return result;}

Dynamic Ease_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ease_obj > result = new Ease_obj();
	result->__construct();
	return result;}

Float Ease_obj::quadIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quadIn",0x118a7ef6,"com.haxepunk.utils.Ease.quadIn","com/haxepunk/utils/Ease.hx",13,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(13)
	return (t * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadIn,return )

Float Ease_obj::quadOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quadOut",0x47a92c5d,"com.haxepunk.utils.Ease.quadOut","com/haxepunk/utils/Ease.hx",19,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(19)
	return (-(t) * ((t - (int)2)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadOut,return )

Float Ease_obj::quadInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quadInOut",0xec6f1738,"com.haxepunk.utils.Ease.quadInOut","com/haxepunk/utils/Ease.hx",25,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(25)
	if (((t <= .5))){
		HX_STACK_LINE(25)
		return ((t * t) * (int)2);
	}
	else{
		HX_STACK_LINE(25)
		Float _g = --(t);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		Float _g2 = (_g1 * (int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(25)
		return ((int)1 - _g2);
	}
	HX_STACK_LINE(25)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadInOut,return )

Float Ease_obj::cubeIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","cubeIn",0x79356aa4,"com.haxepunk.utils.Ease.cubeIn","com/haxepunk/utils/Ease.hx",31,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(31)
	return ((t * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeIn,return )

Float Ease_obj::cubeOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","cubeOut",0x958c78ef,"com.haxepunk.utils.Ease.cubeOut","com/haxepunk/utils/Ease.hx",36,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(37)
	Float _g = --(t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(37)
	return ((int)1 + _g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeOut,return )

Float Ease_obj::cubeInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","cubeInOut",0xf32c2c4a,"com.haxepunk.utils.Ease.cubeInOut","com/haxepunk/utils/Ease.hx",43,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(43)
	if (((t <= .5))){
		HX_STACK_LINE(43)
		return (((t * t) * t) * (int)4);
	}
	else{
		HX_STACK_LINE(43)
		Float _g = --(t);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(43)
		Float _g3 = (_g2 * (int)4);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(43)
		return ((int)1 + _g3);
	}
	HX_STACK_LINE(43)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeInOut,return )

Float Ease_obj::quartIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quartIn",0x5106161a,"com.haxepunk.utils.Ease.quartIn","com/haxepunk/utils/Ease.hx",49,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(49)
	return (((t * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartIn,return )

Float Ease_obj::quartOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quartOut",0x9451d4b9,"com.haxepunk.utils.Ease.quartOut","com/haxepunk/utils/Ease.hx",54,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(55)
	Float _g = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(55)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(55)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(55)
	return ((int)1 - _g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartOut,return )

Float Ease_obj::quartInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quartInOut",0x32d78e94,"com.haxepunk.utils.Ease.quartInOut","com/haxepunk/utils/Ease.hx",61,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(61)
	if (((t <= .5))){
		HX_STACK_LINE(61)
		return ((((t * t) * t) * t) * (int)8);
	}
	else{
		HX_STACK_LINE(61)
		Float _g = t = ((t * (int)2) - (int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(61)
		Float _g4 = ((int)1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(61)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(61)
		return (_g5 + .5);
	}
	HX_STACK_LINE(61)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartInOut,return )

Float Ease_obj::quintIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quintIn",0xe995dfa6,"com.haxepunk.utils.Ease.quintIn","com/haxepunk/utils/Ease.hx",67,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(67)
	return ((((t * t) * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintIn,return )

Float Ease_obj::quintOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quintOut",0x799265ad,"com.haxepunk.utils.Ease.quintOut","com/haxepunk/utils/Ease.hx",72,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(73)
	Float _g = t = (t - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(73)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(73)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(73)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(73)
	Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(73)
	return (_g4 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintOut,return )

Float Ease_obj::quintInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quintInOut",0x56154488,"com.haxepunk.utils.Ease.quintInOut","com/haxepunk/utils/Ease.hx",78,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(79)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(79)
	if (((_g < (int)1))){
		HX_STACK_LINE(79)
		return (Float(((((t * t) * t) * t) * t)) / Float((int)2));
	}
	else{
		HX_STACK_LINE(79)
		Float _g1 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(79)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(79)
		Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(79)
		Float _g5 = (_g4 * t);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(79)
		Float _g6 = (_g5 + (int)2);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(79)
		return (Float(_g6) / Float((int)2));
	}
	HX_STACK_LINE(79)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintInOut,return )

Float Ease_obj::sineIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","sineIn",0xfe0ac9fc,"com.haxepunk.utils.Ease.sineIn","com/haxepunk/utils/Ease.hx",84,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(85)
	Float _g = ::com::haxepunk::utils::Ease_obj::get_PI2();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(85)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(85)
	Float _g2 = -(::Math_obj::cos(_g1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(85)
	return (_g2 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineIn,return )

Float Ease_obj::sineOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","sineOut",0x4b6a8697,"com.haxepunk.utils.Ease.sineOut","com/haxepunk/utils/Ease.hx",90,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(91)
	Float _g = ::com::haxepunk::utils::Ease_obj::get_PI2();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(91)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(91)
	return ::Math_obj::sin(_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineOut,return )

Float Ease_obj::sineInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","sineInOut",0x66e6f3f2,"com.haxepunk.utils.Ease.sineInOut","com/haxepunk/utils/Ease.hx",96,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(97)
	Float _g = ::com::haxepunk::utils::Ease_obj::get_PI();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(97)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(97)
	Float _g2 = -(::Math_obj::cos(_g1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(97)
	Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(97)
	return (_g3 + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineInOut,return )

Float Ease_obj::bounceIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","bounceIn",0xe7392c77,"com.haxepunk.utils.Ease.bounceIn","com/haxepunk/utils/Ease.hx",102,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(103)
	t = ((int)1 - t);
	HX_STACK_LINE(104)
	if (((t < 0.363636363636363646))){
		HX_STACK_LINE(104)
		return ((int)1 - ((7.5625 * t) * t));
	}
	HX_STACK_LINE(105)
	if (((t < 0.727272727272727293))){
		HX_STACK_LINE(105)
		return ((int)1 - ((((7.5625 * ((t - 0.545454545454545414))) * ((t - 0.545454545454545414))) + .75)));
	}
	HX_STACK_LINE(106)
	if (((t < 0.909090909090909061))){
		HX_STACK_LINE(106)
		return ((int)1 - ((((7.5625 * ((t - 0.818181818181818232))) * ((t - 0.818181818181818232))) + .9375)));
	}
	HX_STACK_LINE(107)
	return ((int)1 - ((((7.5625 * ((t - 0.954545454545454586))) * ((t - 0.954545454545454586))) + .984375)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceIn,return )

Float Ease_obj::bounceOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","bounceOut",0x6ad24fbc,"com.haxepunk.utils.Ease.bounceOut","com/haxepunk/utils/Ease.hx",112,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(113)
	if (((t < 0.363636363636363646))){
		HX_STACK_LINE(113)
		return ((7.5625 * t) * t);
	}
	HX_STACK_LINE(114)
	if (((t < 0.727272727272727293))){
		HX_STACK_LINE(114)
		return (((7.5625 * ((t - 0.545454545454545414))) * ((t - 0.545454545454545414))) + .75);
	}
	HX_STACK_LINE(115)
	if (((t < 0.909090909090909061))){
		HX_STACK_LINE(115)
		return (((7.5625 * ((t - 0.818181818181818232))) * ((t - 0.818181818181818232))) + .9375);
	}
	HX_STACK_LINE(116)
	return (((7.5625 * ((t - 0.954545454545454586))) * ((t - 0.954545454545454586))) + .984375);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceOut,return )

Float Ease_obj::bounceInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","bounceInOut",0x06af1057,"com.haxepunk.utils.Ease.bounceInOut","com/haxepunk/utils/Ease.hx",121,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(122)
	if (((t < .5))){
		HX_STACK_LINE(124)
		t = ((int)1 - (t * (int)2));
		HX_STACK_LINE(125)
		if (((t < 0.363636363636363646))){
			HX_STACK_LINE(125)
			return (Float((((int)1 - ((7.5625 * t) * t)))) / Float((int)2));
		}
		HX_STACK_LINE(126)
		if (((t < 0.727272727272727293))){
			HX_STACK_LINE(126)
			return (Float((((int)1 - ((((7.5625 * ((t - 0.545454545454545414))) * ((t - 0.545454545454545414))) + .75))))) / Float((int)2));
		}
		HX_STACK_LINE(127)
		if (((t < 0.909090909090909061))){
			HX_STACK_LINE(127)
			return (Float((((int)1 - ((((7.5625 * ((t - 0.818181818181818232))) * ((t - 0.818181818181818232))) + .9375))))) / Float((int)2));
		}
		HX_STACK_LINE(128)
		return (Float((((int)1 - ((((7.5625 * ((t - 0.954545454545454586))) * ((t - 0.954545454545454586))) + .984375))))) / Float((int)2));
	}
	HX_STACK_LINE(130)
	t = ((t * (int)2) - (int)1);
	HX_STACK_LINE(131)
	if (((t < 0.363636363636363646))){
		HX_STACK_LINE(131)
		return ((Float(((7.5625 * t) * t)) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(132)
	if (((t < 0.727272727272727293))){
		HX_STACK_LINE(132)
		return ((Float(((((7.5625 * ((t - 0.545454545454545414))) * ((t - 0.545454545454545414))) + .75))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(133)
	if (((t < 0.909090909090909061))){
		HX_STACK_LINE(133)
		return ((Float(((((7.5625 * ((t - 0.818181818181818232))) * ((t - 0.818181818181818232))) + .9375))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(134)
	return ((Float(((((7.5625 * ((t - 0.954545454545454586))) * ((t - 0.954545454545454586))) + .984375))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceInOut,return )

Float Ease_obj::circIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","circIn",0x9af85a06,"com.haxepunk.utils.Ease.circIn","com/haxepunk/utils/Ease.hx",139,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(140)
	Float _g = ::Math_obj::sqrt(((int)1 - (t * t)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(140)
	return -(((_g - (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circIn,return )

Float Ease_obj::circOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","circOut",0xfe5aff4d,"com.haxepunk.utils.Ease.circOut","com/haxepunk/utils/Ease.hx",146,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(146)
	return ::Math_obj::sqrt(((int)1 - (((t - (int)1)) * ((t - (int)1)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circOut,return )

Float Ease_obj::circInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","circInOut",0x116f8628,"com.haxepunk.utils.Ease.circInOut","com/haxepunk/utils/Ease.hx",152,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(152)
	if (((t <= .5))){
		HX_STACK_LINE(152)
		Float _g = ::Math_obj::sqrt(((int)1 - ((t * t) * (int)4)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		Float _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		return (Float(_g1) / Float((int)-2));
	}
	else{
		HX_STACK_LINE(152)
		Float _g2 = ::Math_obj::sqrt(((int)1 - ((((t * (int)2) - (int)2)) * (((t * (int)2) - (int)2)))));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(152)
		Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(152)
		return (Float(_g3) / Float((int)2));
	}
	HX_STACK_LINE(152)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circInOut,return )

Float Ease_obj::expoIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","expoIn",0x09687421,"com.haxepunk.utils.Ease.expoIn","com/haxepunk/utils/Ease.hx",158,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(158)
	return ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoIn,return )

Float Ease_obj::expoOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","expoOut",0x3201bcd2,"com.haxepunk.utils.Ease.expoOut","com/haxepunk/utils/Ease.hx",163,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(164)
	Float _g = -(::Math_obj::pow((int)2,((int)-10 * t)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(164)
	return (_g + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoOut,return )

Float Ease_obj::expoInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","expoInOut",0x8a646eed,"com.haxepunk.utils.Ease.expoInOut","com/haxepunk/utils/Ease.hx",170,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(170)
	if (((t < .5))){
		HX_STACK_LINE(170)
		Float _g = ::Math_obj::pow((int)2,((int)10 * (((t * (int)2) - (int)1))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		return (Float(_g) / Float((int)2));
	}
	else{
		HX_STACK_LINE(170)
		Float _g1 = -(::Math_obj::pow((int)2,((int)-10 * (((t * (int)2) - (int)1)))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(170)
		Float _g2 = (_g1 + (int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(170)
		return (Float(_g2) / Float((int)2));
	}
	HX_STACK_LINE(170)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoInOut,return )

Float Ease_obj::backIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","backIn",0x8f843856,"com.haxepunk.utils.Ease.backIn","com/haxepunk/utils/Ease.hx",176,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(176)
	return ((t * t) * (((2.70158 * t) - 1.70158)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backIn,return )

Float Ease_obj::backOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","backOut",0x0431a6fd,"com.haxepunk.utils.Ease.backOut","com/haxepunk/utils/Ease.hx",181,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(182)
	Float _g = --(t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(182)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(182)
	Float _g2 = (_g1 * (((-2.70158 * t) - 1.70158)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(182)
	return ((int)1 - _g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backOut,return )

Float Ease_obj::backInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","backInOut",0x380379d8,"com.haxepunk.utils.Ease.backInOut","com/haxepunk/utils/Ease.hx",187,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(188)
	hx::MultEq(t,(int)2);
	HX_STACK_LINE(189)
	if (((t < (int)1))){
		HX_STACK_LINE(189)
		return (Float(((t * t) * (((2.70158 * t) - 1.70158)))) / Float((int)2));
	}
	HX_STACK_LINE(190)
	(t)--;
	HX_STACK_LINE(191)
	Float _g = --(t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(191)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(191)
	Float _g2 = (_g1 * (((-2.70158 * t) - 1.70158)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(191)
	Float _g3 = ((int)1 - _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(191)
	Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(191)
	return (_g4 + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backInOut,return )

Float Ease_obj::B1;

Float Ease_obj::B2;

Float Ease_obj::B3;

Float Ease_obj::B4;

Float Ease_obj::B5;

Float Ease_obj::B6;

Float Ease_obj::get_PI( ){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","get_PI",0xe81ae3ac,"com.haxepunk.utils.Ease.get_PI","com/haxepunk/utils/Ease.hx",204,0xcccbf2b9)
	HX_STACK_LINE(204)
	return ::Math_obj::PI;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_PI,return )

Float Ease_obj::get_PI2( ){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","get_PI2",0x2f6c5306,"com.haxepunk.utils.Ease.get_PI2","com/haxepunk/utils/Ease.hx",205,0xcccbf2b9)
	HX_STACK_LINE(205)
	return (Float(::Math_obj::PI) / Float((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_PI2,return )

Float Ease_obj::get_EL( ){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","get_EL",0xe81ada1a,"com.haxepunk.utils.Ease.get_EL","com/haxepunk/utils/Ease.hx",206,0xcccbf2b9)
	HX_STACK_LINE(206)
	Float _g = ::com::haxepunk::utils::Ease_obj::get_PI();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(206)
	Float _g1 = ((int)2 * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(206)
	return (Float(_g1) / Float(0.45));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_EL,return )


Ease_obj::Ease_obj()
{
}

Dynamic Ease_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"PI") ) { return get_PI(); }
		if (HX_FIELD_EQ(inName,"EL") ) { return get_EL(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { return get_PI2(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { return quadIn_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { return cubeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineIn") ) { return sineIn_dyn(); }
		if (HX_FIELD_EQ(inName,"circIn") ) { return circIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoIn") ) { return expoIn_dyn(); }
		if (HX_FIELD_EQ(inName,"backIn") ) { return backIn_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PI") ) { return get_PI_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EL") ) { return get_EL_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { return quadOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { return cubeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quartIn") ) { return quartIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quintIn") ) { return quintIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineOut") ) { return sineOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circOut") ) { return circOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoOut") ) { return expoOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backOut") ) { return backOut_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PI2") ) { return get_PI2_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { return quartOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintOut") ) { return quintOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { return bounceIn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { return quadInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { return cubeInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { return sineInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { return bounceOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circInOut") ) { return circInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { return expoInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backInOut") ) { return backInOut_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { return quartInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { return quintInOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { return bounceInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ease_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Ease_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("quadIn"),
	HX_CSTRING("quadOut"),
	HX_CSTRING("quadInOut"),
	HX_CSTRING("cubeIn"),
	HX_CSTRING("cubeOut"),
	HX_CSTRING("cubeInOut"),
	HX_CSTRING("quartIn"),
	HX_CSTRING("quartOut"),
	HX_CSTRING("quartInOut"),
	HX_CSTRING("quintIn"),
	HX_CSTRING("quintOut"),
	HX_CSTRING("quintInOut"),
	HX_CSTRING("sineIn"),
	HX_CSTRING("sineOut"),
	HX_CSTRING("sineInOut"),
	HX_CSTRING("bounceIn"),
	HX_CSTRING("bounceOut"),
	HX_CSTRING("bounceInOut"),
	HX_CSTRING("circIn"),
	HX_CSTRING("circOut"),
	HX_CSTRING("circInOut"),
	HX_CSTRING("expoIn"),
	HX_CSTRING("expoOut"),
	HX_CSTRING("expoInOut"),
	HX_CSTRING("backIn"),
	HX_CSTRING("backOut"),
	HX_CSTRING("backInOut"),
	HX_CSTRING("B1"),
	HX_CSTRING("B2"),
	HX_CSTRING("B3"),
	HX_CSTRING("B4"),
	HX_CSTRING("B5"),
	HX_CSTRING("B6"),
	HX_CSTRING("get_PI"),
	HX_CSTRING("get_PI2"),
	HX_CSTRING("get_EL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ease_obj::B1,"B1");
	HX_MARK_MEMBER_NAME(Ease_obj::B2,"B2");
	HX_MARK_MEMBER_NAME(Ease_obj::B3,"B3");
	HX_MARK_MEMBER_NAME(Ease_obj::B4,"B4");
	HX_MARK_MEMBER_NAME(Ease_obj::B5,"B5");
	HX_MARK_MEMBER_NAME(Ease_obj::B6,"B6");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ease_obj::B1,"B1");
	HX_VISIT_MEMBER_NAME(Ease_obj::B2,"B2");
	HX_VISIT_MEMBER_NAME(Ease_obj::B3,"B3");
	HX_VISIT_MEMBER_NAME(Ease_obj::B4,"B4");
	HX_VISIT_MEMBER_NAME(Ease_obj::B5,"B5");
	HX_VISIT_MEMBER_NAME(Ease_obj::B6,"B6");
};

#endif

Class Ease_obj::__mClass;

void Ease_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Ease"), hx::TCanCast< Ease_obj> ,sStaticFields,sMemberFields,
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

void Ease_obj::__boot()
{
	B1= 0.363636363636363646;
	B2= 0.727272727272727293;
	B3= 0.545454545454545414;
	B4= 0.909090909090909061;
	B5= 0.818181818181818232;
	B6= 0.954545454545454586;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
