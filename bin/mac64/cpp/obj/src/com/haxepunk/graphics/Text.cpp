#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_
#include <com/haxepunk/graphics/_Text/StyleType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Text_obj::__construct(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{
HX_STACK_FRAME("com.haxepunk.graphics.Text","new",0xe2ef4009,"com.haxepunk.graphics.Text.new","com/haxepunk/graphics/Text.hx",60,0x6110fd86)

HX_STACK_ARG(text,"text")

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")

HX_STACK_ARG(options,"options")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(66)
	this->resizable = true;
	HX_STACK_LINE(97)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",97,0x6110fd86)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		options = _Function_2_1::Block();
	}
	HX_STACK_LINE(98)
	if (((text == null()))){
		HX_STACK_LINE(98)
		text = HX_CSTRING("");
	}
	HX_STACK_LINE(101)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("font"))))){
		HX_STACK_LINE(101)
		options->__FieldRef(HX_CSTRING("font")) = ::com::haxepunk::HXP_obj::defaultFont;
	}
	HX_STACK_LINE(102)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("size"))))){
		HX_STACK_LINE(102)
		options->__FieldRef(HX_CSTRING("size")) = (int)16;
	}
	HX_STACK_LINE(103)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("align"))))){
		HX_STACK_LINE(103)
		options->__FieldRef(HX_CSTRING("align")) = HX_CSTRING("left");
	}
	HX_STACK_LINE(104)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("color"))))){
		HX_STACK_LINE(104)
		options->__FieldRef(HX_CSTRING("color")) = (int)16777215;
	}
	HX_STACK_LINE(105)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("resizable"))))){
		HX_STACK_LINE(105)
		options->__FieldRef(HX_CSTRING("resizable")) = true;
	}
	HX_STACK_LINE(106)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("wordWrap"))))){
		HX_STACK_LINE(106)
		options->__FieldRef(HX_CSTRING("wordWrap")) = false;
	}
	HX_STACK_LINE(107)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("leading"))))){
		HX_STACK_LINE(107)
		options->__FieldRef(HX_CSTRING("leading")) = (int)0;
	}
	HX_STACK_LINE(109)
	::flash::text::Font fontObj = ::openfl::Assets_obj::getFont(options->__Field(HX_CSTRING("font"),true),null());		HX_STACK_VAR(fontObj,"fontObj");
	HX_STACK_LINE(110)
	::flash::text::TextFormat _g = ::flash::text::TextFormat_obj::__new(fontObj->fontName,options->__Field(HX_CSTRING("size"),true),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(110)
	this->_format = _g;
	HX_STACK_LINE(111)
	this->_format->align = options->__Field(HX_CSTRING("align"),true);
	HX_STACK_LINE(112)
	this->_format->leading = options->__Field(HX_CSTRING("leading"),true);
	HX_STACK_LINE(114)
	::flash::text::TextField _g1 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(114)
	this->_field = _g1;
	HX_STACK_LINE(118)
	this->_field->set_wordWrap(options->__Field(HX_CSTRING("wordWrap"),true));
	HX_STACK_LINE(119)
	this->_field->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(120)
	::String _g2 = this->_text = text;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(120)
	this->_field->set_text(_g2);
	HX_STACK_LINE(121)
	this->_field->set_selectable(false);
	HX_STACK_LINE(123)
	this->resizable = options->__Field(HX_CSTRING("resizable"),true);
	HX_STACK_LINE(124)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(124)
	this->_styles = _g3;
	HX_STACK_LINE(126)
	int _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(126)
	if (((width == (int)0))){
		HX_STACK_LINE(126)
		Float _g4 = this->_field->get_textWidth();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(126)
		Float _g5 = (_g4 + (int)4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(126)
		_g6 = ::Std_obj::_int(_g5);
	}
	else{
		HX_STACK_LINE(126)
		_g6 = width;
	}
	HX_STACK_LINE(126)
	this->_width = _g6;
	HX_STACK_LINE(127)
	int _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(127)
	if (((height == (int)0))){
		HX_STACK_LINE(127)
		Float _g7 = this->_field->get_textHeight();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(127)
		Float _g8 = (_g7 + (int)4);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(127)
		_g9 = ::Std_obj::_int(_g8);
	}
	else{
		HX_STACK_LINE(127)
		_g9 = height;
	}
	HX_STACK_LINE(127)
	this->_height = _g9;
	HX_STACK_LINE(129)
	::flash::display::BitmapData source = ::com::haxepunk::HXP_obj::createBitmap(this->_width,this->_height,true,null());		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(130)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
		HX_STACK_LINE(132)
		this->_source = source;
		HX_STACK_LINE(133)
		::flash::geom::Rectangle _g10 = source->get_rect();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(133)
		this->_sourceRect = _g10;
		HX_STACK_LINE(134)
		::com::haxepunk::graphics::atlas::AtlasData _g11;		HX_STACK_VAR(_g11,"_g11");
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::com::haxepunk::graphics::Text_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",134,0x6110fd86)
				{
					HX_STACK_LINE(134)
					::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(__this->_source,null(),null());		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(134)
					return data;
				}
				return null();
			}
		};
		HX_STACK_LINE(134)
		_g11 = _Function_2_1::Block(this);
		HX_STACK_LINE(134)
		::com::haxepunk::graphics::atlas::AtlasRegion _g12 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(134)
		this->_region = _g12;
		HX_STACK_LINE(135)
		this->blit = true;
		HX_STACK_LINE(136)
		super::__construct(null(),null());
	}
	else{
		HX_STACK_LINE(140)
		::com::haxepunk::ds::Either _g15;		HX_STACK_VAR(_g15,"_g15");
		struct _Function_2_1{
			inline static ::com::haxepunk::ds::Either Block( ::flash::display::BitmapData &source){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",140,0x6110fd86)
				{
					HX_STACK_LINE(140)
					::com::haxepunk::graphics::atlas::AtlasData _g13;		HX_STACK_VAR(_g13,"_g13");
					struct _Function_3_1{
						inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::flash::display::BitmapData &source){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",140,0x6110fd86)
							{
								HX_STACK_LINE(140)
								::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(data,"data");
								HX_STACK_LINE(140)
								return data;
							}
							return null();
						}
					};
					HX_STACK_LINE(140)
					_g13 = _Function_3_1::Block(source);
					HX_STACK_LINE(140)
					::com::haxepunk::graphics::atlas::AtlasRegion _g14 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(140)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g14);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(140)
					return e;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::com::haxepunk::ds::Either Block( ::flash::display::BitmapData &source){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",140,0x6110fd86)
				{
					HX_STACK_LINE(140)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(source);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(140)
					return e;
				}
				return null();
			}
		};
		HX_STACK_LINE(140)
		_g15 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block(source)) : ::com::haxepunk::ds::Either(_Function_2_2::Block(source)) );
		HX_STACK_LINE(140)
		super::__construct(_g15,null());
	}
	HX_STACK_LINE(143)
	this->blit = (::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER);
	HX_STACK_LINE(144)
	this->updateTextBuffer();
	HX_STACK_LINE(146)
	this->set_color(options->__Field(HX_CSTRING("color"),true));
	HX_STACK_LINE(147)
	this->x = x;
	HX_STACK_LINE(148)
	this->y = y;
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(text,__o_x,__o_y,__o_width,__o_height,options);
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Text_obj::addStyle( ::String tagName,::flash::text::TextFormat params){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","addStyle",0xf85cf707,"com.haxepunk.graphics.Text.addStyle","com/haxepunk/graphics/Text.hx",159,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tagName,"tagName")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(160)
		::flash::text::TextFormat _g = ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::toTextformat(params);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		this->_styles->set(tagName,_g);
		HX_STACK_LINE(161)
		if (((this->_richText != null()))){
			HX_STACK_LINE(161)
			this->updateTextBuffer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Text_obj,addStyle,(void))

Void Text_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","updateColorTransform",0x276271a9,"com.haxepunk.graphics.Text.updateColorTransform","com/haxepunk/graphics/Text.hx",166,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		if (((this->_richText != null()))){
			HX_STACK_LINE(168)
			if (((this->_alpha == (int)1))){
				HX_STACK_LINE(170)
				this->_tint = null();
			}
			else{
				HX_STACK_LINE(174)
				this->_tint = this->_colorTransform;
				HX_STACK_LINE(175)
				this->_tint->redMultiplier = (int)1;
				HX_STACK_LINE(176)
				this->_tint->greenMultiplier = (int)1;
				HX_STACK_LINE(177)
				this->_tint->blueMultiplier = (int)1;
				HX_STACK_LINE(178)
				this->_tint->redOffset = (int)0;
				HX_STACK_LINE(179)
				this->_tint->greenOffset = (int)0;
				HX_STACK_LINE(180)
				this->_tint->blueOffset = (int)0;
				HX_STACK_LINE(181)
				this->_tint->alphaMultiplier = this->_alpha;
			}
			HX_STACK_LINE(184)
			if (((this->_format->color != this->_color))){
				HX_STACK_LINE(186)
				this->updateTextBuffer();
			}
			else{
				HX_STACK_LINE(190)
				this->updateBuffer(null());
			}
		}
		else{
			HX_STACK_LINE(195)
			this->super::updateColorTransform();
		}
	}
return null();
}


::String Text_obj::alignConv( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","alignConv",0x598697c2,"com.haxepunk.graphics.Text.alignConv","com/haxepunk/graphics/Text.hx",220,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(220)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,alignConv,return )

Void Text_obj::matchStyles( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","matchStyles",0x017125f0,"com.haxepunk.graphics.Text.matchStyles","com/haxepunk/graphics/Text.hx",226,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		this->_text = this->_richText;
		HX_STACK_LINE(230)
		::String _g = ::com::haxepunk::graphics::Text_obj::tag_re->replace(this->_text,HX_CSTRING("$2"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		this->_field->set_text(_g);
		HX_STACK_LINE(233)
		this->_field->setTextFormat(this->_format,null(),null());
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			if ((!(::com::haxepunk::graphics::Text_obj::tag_re->match(this->_text)))){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(236)
			::String tagName = ::com::haxepunk::graphics::Text_obj::tag_re->matched((int)1);		HX_STACK_VAR(tagName,"tagName");
			HX_STACK_LINE(237)
			::String text = ::com::haxepunk::graphics::Text_obj::tag_re->matched((int)2);		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(238)
			Dynamic p = ::com::haxepunk::graphics::Text_obj::tag_re->matchedPos();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(239)
			::String _g1 = this->_text.substr((int)0,p->__Field(HX_CSTRING("pos"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(239)
			::String _g2 = (_g1 + text);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(239)
			::String _g3 = this->_text.substr((p->__Field(HX_CSTRING("pos"),true) + p->__Field(HX_CSTRING("len"),true)),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(239)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(239)
			this->_text = _g4;
			HX_STACK_LINE(241)
			if ((this->_styles->exists(tagName))){
				HX_STACK_LINE(243)
				::flash::text::TextFormat _g5 = this->_styles->get(tagName);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(243)
				this->_field->setTextFormat(_g5,p->__Field(HX_CSTRING("pos"),true),(p->__Field(HX_CSTRING("pos"),true) + text.length));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,matchStyles,(void))

Void Text_obj::updateTextBuffer( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","updateTextBuffer",0x558847ad,"com.haxepunk.graphics.Text.updateTextBuffer","com/haxepunk/graphics/Text.hx",263,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		this->_format->color = this->_color;
		HX_STACK_LINE(265)
		if (((this->_richText == null()))){
			HX_STACK_LINE(267)
			this->_field->setTextFormat(this->_format,null(),null());
		}
		else{
			HX_STACK_LINE(271)
			this->matchStyles();
		}
		HX_STACK_LINE(274)
		this->_field->set_width(this->_width);
		HX_STACK_LINE(275)
		Float _g = this->_field->get_textWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(275)
		Float _g1 = (_g + (int)4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(275)
		int _g2 = ::Math_obj::ceil(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(275)
		int _g3 = this->textWidth = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(275)
		this->_field->set_width(_g3);
		HX_STACK_LINE(276)
		Float _g4 = this->_field->get_textHeight();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(276)
		Float _g5 = (_g4 + (int)4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(276)
		int _g6 = ::Math_obj::ceil(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(276)
		int _g7 = this->textHeight = _g6;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(276)
		this->_field->set_height(_g7);
		HX_STACK_LINE(278)
		if (((bool(this->resizable) && bool(((bool((this->textWidth > this->_width)) || bool((this->textHeight > this->_height)))))))){
			HX_STACK_LINE(280)
			if (((this->_width < this->textWidth))){
				HX_STACK_LINE(280)
				this->_width = this->textWidth;
			}
			HX_STACK_LINE(281)
			if (((this->_height < this->textHeight))){
				HX_STACK_LINE(281)
				this->_height = this->textHeight;
			}
		}
		HX_STACK_LINE(284)
		int _g8 = this->_source->get_width();		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_1{
			inline static bool Block( ::com::haxepunk::graphics::Text_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",284,0x6110fd86)
				{
					HX_STACK_LINE(284)
					int _g9 = __this->_source->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(284)
					return (__this->_height > _g9);
				}
				return null();
			}
		};
		HX_STACK_LINE(284)
		if (((  ((!(((this->_width > _g8))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(287)
			int _g10 = this->_source->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(287)
			Float _g11 = ::Math_obj::max(this->_width,_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(287)
			int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(288)
			int _g13 = this->_source->get_height();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(288)
			Float _g14 = ::Math_obj::max(this->_height,_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(288)
			int _g15 = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(286)
			::flash::display::BitmapData _g16 = ::com::haxepunk::HXP_obj::createBitmap(_g12,_g15,true,null());		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(286)
			this->_source = _g16;
			HX_STACK_LINE(291)
			::flash::geom::Rectangle _g17 = this->_source->get_rect();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(291)
			this->_sourceRect = _g17;
			HX_STACK_LINE(292)
			this->createBuffer();
			HX_STACK_LINE(294)
			if ((!(this->blit))){
				HX_STACK_LINE(296)
				if (((this->_region != null()))){
					HX_STACK_LINE(298)
					this->_region->destroy();
				}
				HX_STACK_LINE(300)
				::com::haxepunk::graphics::atlas::AtlasData _g18;		HX_STACK_VAR(_g18,"_g18");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::com::haxepunk::graphics::Text_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",300,0x6110fd86)
						{
							HX_STACK_LINE(300)
							::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(__this->_source,null(),null());		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(300)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(300)
				_g18 = _Function_3_1::Block(this);
				HX_STACK_LINE(300)
				::com::haxepunk::graphics::atlas::AtlasRegion _g19 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(300)
				this->_region = _g19;
			}
		}
		else{
			HX_STACK_LINE(305)
			this->_source->fillRect(this->_sourceRect,(int)0);
		}
		HX_STACK_LINE(308)
		this->_field->set_width(this->_width);
		HX_STACK_LINE(309)
		this->_field->set_height(this->_height);
		HX_STACK_LINE(311)
		this->_source->draw(this->_field,null(),null(),null(),null(),null());
		HX_STACK_LINE(312)
		this->super::updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,updateTextBuffer,(void))

Void Text_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","destroy",0xb9bd2523,"com.haxepunk.graphics.Text.destroy","com/haxepunk/graphics/Text.hx",320,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		if (((this->_region != null()))){
			HX_STACK_LINE(322)
			this->_region->destroy();
		}
	}
return null();
}


::String Text_obj::get_text( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_text",0xc796b3ed,"com.haxepunk.graphics.Text.get_text","com/haxepunk/graphics/Text.hx",330,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_text,return )

::String Text_obj::set_text( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_text",0x75f40d61,"com.haxepunk.graphics.Text.set_text","com/haxepunk/graphics/Text.hx",332,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(333)
	if (((bool((this->_text == value)) && bool((this->_richText == null()))))){
		HX_STACK_LINE(333)
		return value;
	}
	HX_STACK_LINE(334)
	::String _g = this->_text = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(334)
	this->_field->set_text(_g);
	HX_STACK_LINE(335)
	if (((this->_richText == null()))){
		HX_STACK_LINE(337)
		this->updateTextBuffer();
	}
	else{
		HX_STACK_LINE(341)
		this->updateColorTransform();
	}
	HX_STACK_LINE(343)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

::String Text_obj::get_richText( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_richText",0x97da1429,"com.haxepunk.graphics.Text.get_richText","com/haxepunk/graphics/Text.hx",351,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	if (((this->_richText == null()))){
		HX_STACK_LINE(351)
		return this->_text;
	}
	else{
		HX_STACK_LINE(351)
		return this->_richText;
	}
	HX_STACK_LINE(351)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_richText,return )

::String Text_obj::set_richText( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_richText",0xacd3379d,"com.haxepunk.graphics.Text.set_richText","com/haxepunk/graphics/Text.hx",353,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(354)
	if (((this->_richText == value))){
		HX_STACK_LINE(354)
		return value;
	}
	HX_STACK_LINE(355)
	bool fromPlain = (this->_richText == null());		HX_STACK_VAR(fromPlain,"fromPlain");
	HX_STACK_LINE(356)
	this->_richText = value;
	HX_STACK_LINE(357)
	if (((this->_richText == HX_CSTRING("")))){
		HX_STACK_LINE(357)
		::String _g = this->_text = HX_CSTRING("");		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(357)
		this->_field->set_text(_g);
	}
	HX_STACK_LINE(358)
	if (((bool(fromPlain) && bool((this->_richText != null()))))){
		HX_STACK_LINE(360)
		this->_format->color = (int)-1;
		HX_STACK_LINE(361)
		Float _g1 = this->_blue = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(361)
		Float _g2 = this->_green = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(361)
		this->_red = _g2;
		HX_STACK_LINE(362)
		this->updateColorTransform();
	}
	else{
		HX_STACK_LINE(366)
		this->updateTextBuffer();
	}
	HX_STACK_LINE(368)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_richText,return )

::String Text_obj::set_font( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_font",0x6cba9e83,"com.haxepunk.graphics.Text.set_font","com/haxepunk/graphics/Text.hx",376,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(377)
	if (((this->font == value))){
		HX_STACK_LINE(377)
		return value;
	}
	HX_STACK_LINE(378)
	value = ::openfl::Assets_obj::getFont(value,null())->fontName;
	HX_STACK_LINE(379)
	::String _g = this->font = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(379)
	this->_format->font = _g;
	HX_STACK_LINE(380)
	this->updateTextBuffer();
	HX_STACK_LINE(381)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

int Text_obj::set_size( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_size",0x754de175,"com.haxepunk.graphics.Text.set_size","com/haxepunk/graphics/Text.hx",389,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(390)
	if (((this->size == value))){
		HX_STACK_LINE(390)
		return value;
	}
	HX_STACK_LINE(391)
	int _g = this->size = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(391)
	this->_format->size = _g;
	HX_STACK_LINE(392)
	this->updateTextBuffer();
	HX_STACK_LINE(393)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_size,return )

::String Text_obj::set_align( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_align",0xd38fb391,"com.haxepunk.graphics.Text.set_align","com/haxepunk/graphics/Text.hx",401,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(402)
	if (((this->align == value))){
		HX_STACK_LINE(402)
		return value;
	}
	HX_STACK_LINE(403)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		::String value1 = this->align = value;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(403)
		_g = value1;
	}
	HX_STACK_LINE(403)
	this->_format->align = _g;
	HX_STACK_LINE(404)
	this->updateTextBuffer();
	HX_STACK_LINE(405)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_align,return )

int Text_obj::set_leading( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_leading",0xfd495a92,"com.haxepunk.graphics.Text.set_leading","com/haxepunk/graphics/Text.hx",413,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(414)
	if (((this->leading == value))){
		HX_STACK_LINE(414)
		return value;
	}
	HX_STACK_LINE(415)
	int _g = this->leading = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(415)
	this->_format->leading = _g;
	HX_STACK_LINE(416)
	this->updateTextBuffer();
	HX_STACK_LINE(417)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_leading,return )

bool Text_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_wordWrap",0x7815bf68,"com.haxepunk.graphics.Text.set_wordWrap","com/haxepunk/graphics/Text.hx",425,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(426)
	if (((this->wordWrap == value))){
		HX_STACK_LINE(426)
		return value;
	}
	HX_STACK_LINE(427)
	bool _g = this->wordWrap = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(427)
	this->_field->set_wordWrap(_g);
	HX_STACK_LINE(428)
	this->updateTextBuffer();
	HX_STACK_LINE(429)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_wordWrap,return )

int Text_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_width",0x991026c6,"com.haxepunk.graphics.Text.get_width","com/haxepunk/graphics/Text.hx",432,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(432)
	return ::Std_obj::_int(this->_width);
}


int Text_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_height",0x0b613f27,"com.haxepunk.graphics.Text.get_height","com/haxepunk/graphics/Text.hx",433,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(433)
	return ::Std_obj::_int(this->_height);
}


::EReg Text_obj::tag_re;


Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_richText,"_richText");
	HX_MARK_MEMBER_NAME(_field,"_field");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	::com::haxepunk::graphics::Image_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_richText,"_richText");
	HX_VISIT_MEMBER_NAME(_field,"_field");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	::com::haxepunk::graphics::Image_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tag_re") ) { return tag_re; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_field") ) { return _field; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"richText") ) { return get_richText(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { return resizable; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"alignConv") ) { return alignConv_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_richText") ) { return _richText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matchStyles") ) { return matchStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"set_leading") ) { return set_leading_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_richText") ) { return get_richText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_richText") ) { return set_richText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateTextBuffer") ) { return updateTextBuffer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return set_font(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp) return set_align(inValue);align=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tag_re") ) { tag_re=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_field") ) { _field=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { if (inCallProp) return set_leading(inValue);leading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"richText") ) { return set_richText(inValue); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_richText") ) { _richText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("resizable"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("richText"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("leading"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("_richText"));
	outFields->push(HX_CSTRING("_field"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_styles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tag_re"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Text_obj,resizable),HX_CSTRING("resizable")},
	{hx::fsInt,(int)offsetof(Text_obj,textWidth),HX_CSTRING("textWidth")},
	{hx::fsInt,(int)offsetof(Text_obj,textHeight),HX_CSTRING("textHeight")},
	{hx::fsString,(int)offsetof(Text_obj,font),HX_CSTRING("font")},
	{hx::fsInt,(int)offsetof(Text_obj,size),HX_CSTRING("size")},
	{hx::fsString,(int)offsetof(Text_obj,align),HX_CSTRING("align")},
	{hx::fsInt,(int)offsetof(Text_obj,leading),HX_CSTRING("leading")},
	{hx::fsBool,(int)offsetof(Text_obj,wordWrap),HX_CSTRING("wordWrap")},
	{hx::fsInt,(int)offsetof(Text_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(Text_obj,_height),HX_CSTRING("_height")},
	{hx::fsString,(int)offsetof(Text_obj,_text),HX_CSTRING("_text")},
	{hx::fsString,(int)offsetof(Text_obj,_richText),HX_CSTRING("_richText")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Text_obj,_field),HX_CSTRING("_field")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(Text_obj,_format),HX_CSTRING("_format")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Text_obj,_styles),HX_CSTRING("_styles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resizable"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("addStyle"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("alignConv"),
	HX_CSTRING("matchStyles"),
	HX_CSTRING("updateTextBuffer"),
	HX_CSTRING("destroy"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_richText"),
	HX_CSTRING("set_richText"),
	HX_CSTRING("font"),
	HX_CSTRING("set_font"),
	HX_CSTRING("size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("align"),
	HX_CSTRING("set_align"),
	HX_CSTRING("leading"),
	HX_CSTRING("set_leading"),
	HX_CSTRING("wordWrap"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_text"),
	HX_CSTRING("_richText"),
	HX_CSTRING("_field"),
	HX_CSTRING("_format"),
	HX_CSTRING("_styles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Text_obj::tag_re,"tag_re");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Text_obj::tag_re,"tag_re");
};

#endif

Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
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

void Text_obj::__boot()
{
	tag_re= ::EReg_obj::__new(HX_CSTRING("<([^>]+)>([^(?:</)]+)</[^>]+>"),HX_CSTRING("g"));
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
