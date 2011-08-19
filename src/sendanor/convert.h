/* Convert everything to everything -- Specifically strings without removing locales charsets.
 * $Id: convert.h 10128 2009-11-17 11:06:08Z jheusala $
 */

#ifndef SENDANOR_CONVERT_H
#define SENDANOR_CONVERT_H

#include <ostream>                  // for std::ostream
#include <string>                   // for std::string
#include <locale>                   // for std::locale
#include <boost/lexical_cast.hpp>   // for boost::lexical_cast
#include <list>                     // for std::list
#include "ScopedLocale.h"           // for Sendanor::System::ScopedLocale

#ifdef USE_GLIB
#include <glibmm/ustring.h>         // for Glib::ustring
#endif // USE_GLIB

#ifdef USE_V8
#include <v8/v8.h>                  // for v8::*
#endif // USE_V8

#include "logger.h" // for SENDANOR_LOGGER_FUNCTION

namespace sendanor {
	
	/** Convert T object to R type. Default specialization. */
	template<class R, class T>
	inline R convert(const T& value);
	
	
	/** Convert std::wstring to std::string and preserve charset. It means that 
	 * std::string will contain UTF-8 when user's locale has suitable codecvt.
	 */
    extern inline std::wstring do_string_convert_to_wstring(const std::string& tmp, const std::locale& loc);
	
	/** Convert std::string to std::wstring and preserve charset. It means that 
	 * when user's locale has suitable codecvt, then std::string that has UTF-8 
	 * characters will be converted correctly to std::wstring.
	 */
    extern inline std::string do_wstring_convert_to_string(const std::wstring& tmp, const std::locale& loc);
	
	/** Convert std::wstring to std::string and preserve charset. It means that 
	 * std::string will contain UTF-8 when user's locale has suitable codecvt.
	 */
	template<>
	inline std::string convert<std::string, std::wstring >(const std::wstring& value) {
		SENDANOR_LOGGER_FUNCTION("convert<std::string, std::wstring >", "value");
		return do_wstring_convert_to_string(value, std::locale(""));
	}
	
	/** Convert std::string to std::wstring and preserve charset. It means that 
	 * when user's locale has suitable codecvt, then std::string that has UTF-8 
	 * characters will be converted correctly to std::wstring.
	 */
	template<>
	inline std::wstring convert<std::wstring, std::string>(const std::string& value) {
		SENDANOR_LOGGER_FUNCTION("convert<std::wstring, std::string>", "value");
		return do_string_convert_to_wstring(value, std::locale(""));
	}
	
	
	/* Include Glib code if USE_GLIB is set */
	#ifdef USE_GLIB
	
	/** Convert std::string to Glib::ustring and preserve charset. It uses user's prevered locale. */
	extern inline Glib::ustring do_string_convert_to_ustring(const std::string& value);
	
	/** Convert Glib::ustring to std::string and preserve charset. It uses user's prevered locale. */
	extern inline std::string do_ustring_convert_to_string(const Glib::ustring& value);
	
	/** Convert Glib::ustring to std::string and preserve charset. It uses user's prevered locale. */
	template<>
	inline std::string convert<std::string, Glib::ustring >(const Glib::ustring& value) {
		SENDANOR_LOGGER_FUNCTION("convert<std::string, Glib::ustring >", "value");
		return do_ustring_convert_to_string(value);
	}
	
	/** Convert std::string to Glib::ustring and preserve charset. It uses user's prevered locale. */
	template<>
	inline Glib::ustring convert<Glib::ustring, std::string>(const std::string& value) {
		SENDANOR_LOGGER_FUNCTION("convert<Glib::ustring, std::string>", "value");
		return do_string_convert_to_ustring(value);
	}
	
	#endif // USE_GLIB
	
	
	/* Include Google V8 code if USE_V8 is set */
	#ifdef USE_V8
	
	extern inline std::string do_v8_convert_to_string(v8::Handle<v8::Value> value);
	extern inline std::wstring do_v8_convert_to_wstring(v8::Handle<v8::Value> value);
	extern inline v8::Handle<v8::Value> do_string_convert_to_v8(const std::string& value);
	
	/** Convert v8string to string */
	template<>
	inline std::string convert<std::string, v8::Handle<v8::Value> >(const v8::Handle<v8::Value>& value) {
		SENDANOR_LOGGER_FUNCTION("convert<std::string,v8::Handle<v8::Value>>", "value");
		return do_v8_convert_to_string(value);
	}
	
	/** Convert v8string to string */
	template<>
	inline std::string convert<std::string, v8::Local<v8::Value> >(const v8::Local<v8::Value>& value) {
		SENDANOR_LOGGER_FUNCTION("convert<std::string,v8::Local<v8::Value>>", "value");
		return do_v8_convert_to_string(value);
	}
	
	/** Convert string to v8string */
	template<>
	inline v8::Handle<v8::Value> convert<v8::Handle<v8::Value>, std::string>(const std::string& value) {
		SENDANOR_LOGGER_FUNCTION("convert<v8::Handle<v8::Value>,std::string>", "value");
		return do_string_convert_to_v8(value);
	}
	
	/* Include Glib code if USE_GLIB is not set */
	#ifdef USE_GLIB
	
	extern inline Glib::ustring do_v8_convert_to_ustring(v8::Handle<v8::Value> value);
	extern inline v8::Handle<v8::Value> do_ustring_convert_to_v8(const Glib::ustring& value);
	
	/** Convert v8string to ustring */
	template<>
	inline Glib::ustring convert<Glib::ustring, v8::Handle<v8::Value> >(const v8::Handle<v8::Value>& value) {
		SENDANOR_LOGGER_FUNCTION("convert<Glib::ustring,v8::Handle<v8::Value>>", "value");
		return do_v8_convert_to_ustring(value);
	}
	
	/** Convert v8string to ustring */
	template<>
	inline Glib::ustring convert<Glib::ustring, v8::Local<v8::Value> >(const v8::Local<v8::Value>& value) {
		SENDANOR_LOGGER_FUNCTION("convert<Glib::ustring,v8::Local<v8::Value>>", "value");
		return do_v8_convert_to_ustring(value);
	}
	
	/** Convert ustring to v8string */
	template<>
	inline v8::Handle<v8::Value> convert<v8::Handle<v8::Value>, Glib::ustring>(const Glib::ustring& value) {
		SENDANOR_LOGGER_FUNCTION("convert<v8::Handle<v8::Value>,std::string>", "value");
		return do_ustring_convert_to_v8(value);
	}
	
	#endif // USE_GLIB
	
	#endif // USE_V8
	
}


/** The source implementation */


//#include <iostream>                                     // for std::cerr
#include <fstream>                                      // for std::fstream
#include <cstdlib>                                      // 
#include <vector>                                       // for std::vector
#include <sstream>                                      // for std::ostringstream
#include "exception.h"                         // for RUNTIME_ERROR
#include <boost/iostreams/stream.hpp>                   // for boost::iostreams::stream
#include <boost/iostreams/code_converter.hpp>           // for boost::iostreams::code_converter
#include <boost/iostreams/device/array.hpp>             // for boost::iostreams::array_source
#include <boost/iostreams/device/back_inserter.hpp>     // for boost::iostreams::back_insert_device
#include <cwchar>                                       // for std::mbstate_t

#ifdef USE_GLIB
#include <glibmm/convert.h>                             // for Glib::locale_to_utf8
#endif // USE_GLIB

#ifdef USE_V8
#include <v8/v8.h>                                      // for v8::*
#endif // USE_V8

#include "logger.h" // for SENDANOR_LOGGER_DEBUG


/* String to wstring conversion */
inline std::wstring sendanor::do_string_convert_to_wstring(const std::string& tmp, const std::locale& loc) {
    SENDANOR_LOGGER_FUNCTION("do_string_convert_to_wstring", "tmp, loc=`" << loc.name() << "'" );
	
    // Check codecvt facet
    if(std::has_facet< std::codecvt<wchar_t, char, std::mbstate_t> >(loc)) {
        SENDANOR_LOGGER_DEBUG("convert: codecvt support");
        boost::iostreams::stream<boost::iostreams::code_converter<boost::iostreams::array_source> > in(tmp.c_str(), tmp.size());
        in.imbue(loc);
        std::wstring buf;
        wchar_t ch;
        while(in.get(ch)) buf += ch;
        return buf;
    }
    
    // Check for widen support
    if(std::has_facet< std::ctype<wchar_t> >(loc)) {
		SENDANOR_LOGGER_DEBUG("convert: ctype support");
        std::wstring buf;
        for(std::string::const_iterator i = tmp.begin(); i!=tmp.end(); ++i) {
            buf += std::use_facet< std::ctype<wchar_t> >(loc).widen(*i);
        }
        return buf;
    }
    
    // Unknown case
    throw RUNTIME_ERROR("Cannot convert: unimplemented case.");
}

/** Specialization for wstring to string conversion */
inline std::string sendanor::do_wstring_convert_to_string(const std::wstring& tmp, const std::locale& loc) {
    SENDANOR_LOGGER_FUNCTION("do_wstring_convert_to_string", "tmp, loc=`" << loc.name() << "'" );
	
    // Check for codecvt support
    if(std::has_facet< std::codecvt<wchar_t, char, std::mbstate_t> >(loc)) {
		SENDANOR_LOGGER_DEBUG("convert: codecvt support");
        typedef boost::iostreams::code_converter<boost::iostreams::back_insert_device<std::string> > code_converter;
        std::string buffer;
        { // We need to call out's destructor before we use buffer
            boost::iostreams::stream<code_converter> out(buffer);
            out.imbue(loc);
            out << tmp;
        }
        return buffer;
    }
    
    // Check for narrow support
    if(std::has_facet< std::ctype<wchar_t> >(loc)) {
        SENDANOR_LOGGER_DEBUG("convert: ctype support");
        std::string buf;
        for(std::wstring::const_iterator i = tmp.begin(); i!=tmp.end(); ++i) {
            buf += std::use_facet< std::ctype<wchar_t> >(loc).narrow(*i, '?');
        }
        return buf;
    }
    
    // Unknown case
    throw RUNTIME_ERROR("Cannot convert: unimplemented case.");
}


/* Include code for Glib::ustring if USE_GLIB is set */
#ifdef USE_GLIB

/** Convert ustring to string with UTF-8, using user's current locale */
inline std::string sendanor::do_ustring_convert_to_string(const Glib::ustring& value) {
    SENDANOR_LOGGER_FUNCTION("do_ustring_convert_to_string", "value" );
	//std::locale loc("");
	const std::string strbuf = Glib::locale_from_utf8(value);
	//const std::string strbuf = Glib::convert(value.str(), "UTF-8", "UTF-8");
	//const std::string strbuf = value.raw();
	SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'");
	return strbuf;
}

/** Convert string with UTF-8 to ustring, usign user's current locale */
inline Glib::ustring sendanor::do_string_convert_to_ustring(const std::string& value) {
    SENDANOR_LOGGER_FUNCTION("do_string_convert_to_ustring", "value" );
	//std::locale loc("");
	const Glib::ustring buf = Glib::locale_to_utf8(value);
	//const Glib::ustring buf = Glib::convert(value, "UTF-8", "UTF-8");
	SENDANOR_LOGGER_DEBUG("buf=`" << buf << "'");
	return buf;
}

#endif // USE_GLIB


/* Include code for Google's V8 strings if USE_V8 is set */
#ifdef USE_V8

#ifdef USE_GLIB

/** */
inline Glib::ustring sendanor::do_v8_convert_to_ustring(v8::Handle<v8::Value> value) {
	SENDANOR_LOGGER_FUNCTION("do_v8_convert_to_ustring", "value(v8)" );
	const std::string strbuf = sendanor::do_v8_convert_to_string(value);
	SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'");
	const Glib::ustring buf = sendanor::do_string_convert_to_ustring(strbuf);
	SENDANOR_LOGGER_DEBUG("buf=`" << buf << "'");
	return buf;
}

/** */
inline v8::Handle<v8::Value> sendanor::do_ustring_convert_to_v8(const Glib::ustring& value) {
	SENDANOR_LOGGER_FUNCTION("do_ustring_convert_to_v8", "value" );
	const std::string strbuf = sendanor::do_ustring_convert_to_string(value);
	SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'");
	v8::Handle<v8::Value> ret = sendanor::do_string_convert_to_v8(strbuf);
	const std::string strbuf2 = sendanor::do_v8_convert_to_string(ret);
	SENDANOR_LOGGER_DEBUG("strbuf2=`" << strbuf2 << "'");
	if(strbuf != strbuf2) throw RUNTIME_ERROR("strbuf != strbuf2");
	return ret;
}

#endif // USE_GLIB

/** Convert v8 string to 16-bit std::wstring
 */
inline std::wstring sendanor::do_v8_convert_to_wstring(v8::Handle<v8::Value> value) {
	SENDANOR_LOGGER_FUNCTION("do_v8_convert_to_wstring", "value(v8)" );
	v8::Local<v8::String> tmp = value->ToString();
	v8::String::Value int16value(tmp);
	uint16_t* uintbuf = *int16value;
	if(sizeof(uint16_t) > sizeof(wchar_t)) throw LOGIC_ERROR("sizeof(uint16_t) > sizeof(wchar_t) !");
	std::wstring wstrbuf;
	for(int i=0; i<int16value.length(); ++i) {
		wstrbuf += uintbuf[i];
	}
	return wstrbuf;
	//std::string strbuf = do_wstring_convert_to_string(wstrbuf, std::locale() );
	//SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'");
	//return strbuf;
}

/** Convert v8 string to UTF-8 std::string */
inline std::string sendanor::do_v8_convert_to_string(v8::Handle<v8::Value> value) {
	SENDANOR_LOGGER_FUNCTION("do_v8_convert_to_string", "value(v8)" );
	v8::Local<v8::String> tmp = value->ToString();
	v8::String::Utf8Value uvalue(tmp);
	std::string strbuf( *uvalue, uvalue.length() );
	SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'");
	return strbuf;
}

/** Convert UTF-8 std::string to v8 data type */
inline v8::Handle<v8::Value> sendanor::do_string_convert_to_v8(const std::string& value) {
	SENDANOR_LOGGER_FUNCTION("do_string_convert_to_v8", "value" );
	return v8::String::New(value.c_str(), value.size());
	//const std::string strbuf2 = sendanor::do_v8_convert_to_string(ret);
	//SENDANOR_LOGGER_DEBUG("strbuf2=`" << strbuf2 << "'");
	//if(value != strbuf2) throw RUNTIME_ERROR("strbuf != strbuf2");
	//return ret;
}

#endif // USE_V8

#endif // SENDANOR_CONVERT_H
/* EOF */
