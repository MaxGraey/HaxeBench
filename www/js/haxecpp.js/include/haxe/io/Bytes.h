// Generated by Haxe 3.4.7
#ifndef INCLUDED_haxe_io_Bytes
#define INCLUDED_haxe_io_Bytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8a9a9286338c842d_33_new)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Bytes_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Bytes_obj OBJ_;
		Bytes_obj();

	public:
		enum { _hx_ClassId = 0x5b931193 };

		void __construct(int length,::Array< unsigned char > b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.io.Bytes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.io.Bytes"); }

		hx::ObjectPtr< Bytes_obj > __new(int length,::Array< unsigned char > b) {
			hx::ObjectPtr< Bytes_obj > __this = new Bytes_obj();
			__this->__construct(length,b);
			return __this;
		}

		static hx::ObjectPtr< Bytes_obj > __alloc(hx::Ctx *_hx_ctx,int length,::Array< unsigned char > b) {
			Bytes_obj *__this = (Bytes_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bytes_obj), true, "haxe.io.Bytes"));
			*(void **)__this = Bytes_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8a9a9286338c842d_33_new)
HXLINE(  34)		( ( ::haxe::io::Bytes)(__this) )->length = length;
HXLINE(  35)		( ( ::haxe::io::Bytes)(__this) )->b = b;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bytes_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50"); }

		static  ::haxe::io::Bytes alloc(int length);
		static ::Dynamic alloc_dyn();

		int length;
		::Array< unsigned char > b;
};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Bytes */ 
