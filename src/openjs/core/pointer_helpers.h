/* open-gdome -- gdome -- OpenJS Extension
 * $Id: pointer_helpers.h 10465 2009-12-31 18:18:53Z jheusala $
 * $Date: 2009-12-31 20:18:53 +0200 (Thu, 31 Dec 2009) $
 */

#ifndef OPENJS_CORE_POINTER_HELPERS_H
#define OPENJS_CORE_POINTER_HELPERS_H 1

#include "extension.h"          // for openjs::core::extension
#include "extension_context.h"  // for openjs::core::extension_context
#include "convert.h"            // for openjs::convert
#include "v8_util.h"            // for openjs::unwrap

#include <sendanor/logger.h>             // for SENDANOR_LOGGER_FUNCTION
//#include <sendanor/exception.h>          // for sendanor::exception

#include "int_pointer_type.h" // for int_pointer_type

namespace openjs {
	extern v8::Handle<v8::Value> ptr_to_v8(const int_pointer_type i, const std::string& type);
	extern int_pointer_type ptr_from_v8(const v8::Handle<v8::Value> a, const std::string& a_type);
}

/* Pointer converter to v8
 * @TODO Start using this function as the primary internal pointer implementation instead of v8's internal system
 */
v8::Handle<v8::Value> openjs::ptr_to_v8(const int_pointer_type i, const std::string& type) {
	SENDANOR_LOGGER_FUNCTION("ptr_to_v8", "address=" << i << ", type='" << type << "'");
	v8::Handle<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("address"), v8::Integer::New(i) );
	obj->Set(v8::String::New("type"), openjs::convert<v8::Handle<v8::Value> >(type)->ToString() );
	return obj;
}

/* Pointer converter from v8 */
int_pointer_type openjs::ptr_from_v8(const v8::Handle<v8::Value> a, const std::string& a_type) {
	SENDANOR_LOGGER_FUNCTION("ptr_from_v8", "a, a_type='" << a_type << "'");
	if(!a->IsObject()) throw RUNTIME_ERROR("!a.IsObject()");
	v8::Handle<v8::Object> obj = a->ToObject();
	
	if(!obj->Has(v8::String::New("type"))) throw RUNTIME_ERROR("!obj.Has('type')");
	v8::Handle<v8::Value> v8_type = obj->Get(v8::String::New("type"));
	if(!v8_type->IsString()) throw RUNTIME_ERROR("!v8_type->IsString()");
	std::string p_type = openjs::convert<std::string>( v8_type );
	
	if(!obj->Has(v8::String::New("address"))) throw RUNTIME_ERROR("!obj.Has('address')");
	v8::Handle<v8::Value> v8_address = obj->Get(v8::String::New("address"));
	if(!v8_address->IsNumber()) throw RUNTIME_ERROR("!v8_address->IsNumber()");
	int_pointer_type i = v8_address->Uint32Value();
	
	SENDANOR_LOGGER_DEBUG("type='" << p_type << "', address='" << i << "'");
	if(p_type != a_type) throw RUNTIME_ERROR(std::string("p_type (") + p_type + ") != a_type (" + a_type + ")");
	return i;
}

#endif
/* EOF */
