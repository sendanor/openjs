/* openjs-sql -- SQL Database Support -- openjs Extension
 * $Id: sql.cc 7615 2009-04-17 15:58:06Z jheusala $
 * $Date: 2009-04-17 18:58:06 +0300 (Fri, 17 Apr 2009) $
 */

#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/convert.h"            // for openjs::convert
#include "../../core/v8_util.h"            // for openjs::unwrap

#include <sendanor/logger.h>             // for SENDANOR_LOGGER_FUNCTION
#include <sendanor/time.h>               // for sendanor::strftime
#include <glibmm/ustring.h>              // for Glib::ustring
#include <sendanor/exception.h>          // for sendanor::exception
#include <vector>                        // for std::vector
#include <sendanor/exec.h>               // for sendanor::exec
#include <soci/soci.h>                   // for SOCI
#include <glibmm/ustring.h>              // for Glib::ustring
#include <glibmm/exception.h>            // for Glib::Exception
#include "sql.h"                         // for openjs::extensions::sql::*

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::sql );

std::string openjs::extensions::sql::name() const { return "sql"; }
std::string openjs::extensions::sql::version() const { return "0.0.20100328"; }

/** Prepare JS value for SQL */
inline std::string prepare_v8_value_for_sql (v8::Handle<v8::Value> arg) {
	SENDANOR_LOGGER_FUNCTION("prepare_v8_value_for_sql", "arg='" << openjs::convert<std::string>(arg) );
	
	// Prepare boolean objects
	if(arg->IsBoolean()) return arg->ToBoolean()->Value() ?"1":"0";
	
	// Prepare date objects
	if(arg->IsDate()) {
		std::time_t time = std::time_t((arg->NumberValue()/1000));
		SENDANOR_LOGGER_DEBUG("time=`" << time << "'" );
		std::tm when;
		localtime_r(&time, &when);
		return sendanor::strftime("%Y-%m-%d %H:%M:%S", &when);
	}
	
	// Prepare everything else as a string
	return openjs::convert<std::string>( arg );
}

/* soci::session::close */
v8::Handle<v8::Value> do_v8_soci_session_close(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_close", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		session->close();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::reconnect */
v8::Handle<v8::Value> do_v8_soci_session_reconnect(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_reconnect", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		session->reconnect();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::begin */
v8::Handle<v8::Value> do_v8_soci_session_begin(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_begin", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		session->begin();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::commit */
v8::Handle<v8::Value> do_v8_soci_session_commit(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_commit", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		session->commit();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::rollback */
v8::Handle<v8::Value> do_v8_soci_session_rollback(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_rollback", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		session->rollback();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::got_data */
v8::Handle<v8::Value> do_v8_soci_session_got_data(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_got_data", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		const bool ret = session->got_data();
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::get_last_query */
v8::Handle<v8::Value> do_v8_soci_session_get_last_query(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_get_last_query", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		const std::string ret = session->get_last_query();
		return handle_scope.Close(openjs::convert<v8::Handle<v8::Value> >(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::uppercase_column_names */
v8::Handle<v8::Value> do_v8_soci_session_uppercase_column_names(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_uppercase_column_names", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		bool forceToUpper = args[0]->ToBoolean()->Value();
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		session->uppercase_column_names(forceToUpper);
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* soci::session::get_backend_name */
v8::Handle<v8::Value> do_v8_soci_session_get_backend_name(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_soci_session_get_backend_name", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		const std::string ret = session->get_backend_name();
		return handle_scope.Close(openjs::convert<v8::Handle<v8::Value> >(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* */
template<class value_type>
v8::Handle<v8::Value> convert_soci_to_v8_string(const soci::row& row, const std::size_t c) {
	std::string strbuf;
	{
		sendanor::ScopedLocale a(std::locale::classic());
		SENDANOR_LOGGER_DEBUG("locale = `" << a.current().name() << "'" );
		strbuf = boost::lexical_cast<std::string>(row.get<value_type>(c));
		SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'" );
	}
	SENDANOR_LOGGER_DEBUG("locale = `" << std::locale().name() << "'" );
	return openjs::convert<v8::Handle<v8::Value> >(strbuf);
}

/* Construct a SQL session
 * \FIXME: Returned long long variables are always strings.
 */
const int query_arg_type_single_object = 1;
const int query_arg_type_normal_arguments = 2;
template<int arg_type>
v8::Handle<v8::Value> do_v8_sql_query(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_sql_query", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		
		// Parse query string
		const Glib::ustring query = openjs::convert<Glib::ustring>(args[0]);
		SENDANOR_LOGGER_DEBUG("query=`" << query << "'" );
		
		// Unwrap soci::session
		soci::session* session = openjs::unwrap<soci::session>(args.Holder(), 0);
		if(!session) throw RUNTIME_ERROR("!session");
		
		// Prepare values
		std::vector<std::pair<std::string, std::string> > values;
		
		// Check if query argument format is single object of named properties
		if( arg_type == query_arg_type_single_object ) {
			SENDANOR_LOGGER_DEBUG("arg_type==query_arg_type_single_object");
			v8::Handle<v8::Object> obj = v8::Handle<v8::Object>::Cast( args[1] );
			if(obj.IsEmpty()) throw RUNTIME_ERROR("obj.IsEmpty()");
			v8::Local<v8::Array> props = obj->GetPropertyNames();
			values.reserve(props->Length());
			for(std::size_t i=0; i<props->Length(); ++i) {
				SENDANOR_LOGGER_DEBUG("i=`" << i << "'" );
				if(!props->Has(v8::Integer::New(i)->ToString())) throw LOGIC_ERROR("!Has");
				v8::Handle<v8::Value> keyword = props->Get(v8::Integer::New(i));
				if(!obj->Has(keyword->ToString())) throw LOGIC_ERROR("!Has");
				SENDANOR_LOGGER_DEBUG("keyword=`" << openjs::convert<std::string>(keyword) << "'" );
				v8::Handle<v8::Value> value = obj->Get(keyword);
				SENDANOR_LOGGER_DEBUG("value=`" << openjs::convert<std::string>(value) << "'" );
				values.push_back( std::make_pair( openjs::convert<std::string>(keyword)
				                         , prepare_v8_value_for_sql(value)
				                         ) );
			}
		// ..or unnamed set of normal function arguments
		} else if(arg_type == query_arg_type_normal_arguments) {
			SENDANOR_LOGGER_DEBUG("arg_type==query_arg_type_normal_arguments");
			values.reserve(args.Length()-1);
			for(int i=1; i<args.Length(); ++i) values.push_back( std::make_pair("", prepare_v8_value_for_sql(args[i])) );
		} else {
			throw LOGIC_ERROR("arg_type unknown");
		}
		
		// Do the query
		
		struct UnblockingQuery {
			
			UnblockingQuery(std::vector<std::pair<std::string, std::string> >& v, soci::session* s, const Glib::ustring& q) 
				: my(s->prepare)
				, foo(my << q)
			{
				for(std::size_t i = 0; i<v.size(); ++i) {
					SENDANOR_LOGGER_DEBUG("values[" << i << "].first=`" << v[i].first << "'" );
					SENDANOR_LOGGER_DEBUG("values[" << i << "].second=`" << v[i].second << "'" );
					if(v[i].first.empty()) {
						SENDANOR_LOGGER_DEBUG("use(`" << v[i].second << "')" );
						foo.operator,(soci::use(v[i].second));
					} else {
						SENDANOR_LOGGER_DEBUG("use(`" << v[i].second << "', `" << v[i].first << "')" );
						foo.operator,(soci::use(v[i].second, v[i].first));
					}
				}
			}
			
			operator soci::details::prepare_temp_type&() {
				return foo;
			}
			
		private:
			UnblockingQuery(const UnblockingQuery&);
			const UnblockingQuery& operator=(const UnblockingQuery&);
			
			v8::Unlocker unlocker;
			soci::details::prepare_type& my;
			soci::details::prepare_temp_type foo;
		};
		
		soci::rowset<soci::row> rs( (soci::details::prepare_temp_type&) UnblockingQuery(values, session, query) );
		SENDANOR_LOGGER_DEBUG("session.get_last_query()=`" << session->get_last_query() << "'" );
		soci::rowset<soci::row>::const_iterator it = rs.begin();
		
		int i = 0;
		v8::Handle<v8::Array> ret_rows = v8::Array::New();
		
		SENDANOR_LOGGER_DEBUG("it==rs.end() `" << ((it==rs.end()) ? Glib::ustring("true") : Glib::ustring("false") ) << "'" );
		
		/* SOCI 3.0.0 has a feature with empty() that it will also call fetch() every time empty() is called. So, DO NOT USE IT. */
		
		for(; it!=rs.end(); ++it) {
			SENDANOR_LOGGER_DEBUG("i=" << i );
			const soci::row& row = *it;
			
			SENDANOR_LOGGER_DEBUG("it==rs.end() `" << ((it==rs.end()) ? Glib::ustring("true") : Glib::ustring("false") ) << "'" );
			SENDANOR_LOGGER_DEBUG("row.size()=`" << row.size() << "'" );
			
			// If there is no columns, query may be an INSERT etc and there will be no (more) results.
			if(row.size() == 0) break;
			
			v8::Handle<v8::Array> ret_row = v8::Array::New(row.size());
			for(std::size_t c = 0; c<row.size(); ++c) {
				SENDANOR_LOGGER_DEBUG("c=" << c );
				
				v8::Handle<v8::Integer> ret_id = v8::Integer::New(c);
				v8::Handle<v8::Value> ret_value;
				v8::Handle<v8::String> ret_name;
				try {
					
					// 
					const soci::column_properties& props = row.get_properties(c);
					Glib::ustring name = props.get_name();
					SENDANOR_LOGGER_DEBUG("prop id=`" << c << "', name=`" << name << "'" );
					ret_name = openjs::convert<v8::Handle<v8::Value> >(name)->ToString();
					soci::indicator c_indicator = row.get_indicator(c);
					
					// Handle NULL values
					if(c_indicator == soci::i_null) {
						SENDANOR_LOGGER_DEBUG("c_indicator==i_null");
						ret_value = v8::Null();
					// Handle other indicators
					} else if(c_indicator != soci::i_ok) {
						throw RUNTIME_ERROR("c_indicator != i_ok");
					// Handle ok indicator
					} else {
						SENDANOR_LOGGER_DEBUG("c_indicator==i_ok");
						
						switch(props.get_data_type()) {
						case soci::dt_string:
							{
								SENDANOR_LOGGER_DEBUG("prop is string" );
								const std::string strbuf = row.get<std::string>(c);
								SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'" );
								ret_value = openjs::convert<v8::Handle<v8::Value> >(strbuf);
								
								#ifdef DEBUG
								const std::string strbuf2 = openjs::convert<std::string>(ret_value);
								SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf2 << "'" );
								
								if(strbuf != strbuf2) throw RUNTIME_ERROR("strbuf != strbuf2");
								#endif // DEBUG
							}
							break;
						case soci::dt_double:
							SENDANOR_LOGGER_DEBUG("prop is double" );
							ret_value = v8::Number::New(row.get<double>(c));
							break;
						case soci::dt_integer:
							SENDANOR_LOGGER_DEBUG("prop is integer" );
							ret_value = v8::Int32::New(row.get<int>(c));
							break;
						case soci::dt_unsigned_long:
							SENDANOR_LOGGER_DEBUG("prop is unsigned long" );
							ret_value = v8::Uint32::New(row.get<unsigned long>(c));
							break;
						case soci::dt_long_long:
							{
								SENDANOR_LOGGER_DEBUG("prop is long long" );
								std::string strbuf;
								{
									sendanor::ScopedLocale a(std::locale::classic());
									SENDANOR_LOGGER_DEBUG("locale = `" << a.current().name() << "'" );
									strbuf = boost::lexical_cast<std::string>(row.get<long long>(c));
									SENDANOR_LOGGER_DEBUG("strbuf=`" << strbuf << "'" );
								}
								SENDANOR_LOGGER_DEBUG("locale = `" << std::locale().name() << "'" );
								ret_value = openjs::convert<v8::Handle<v8::Value> >(strbuf);
							}
							break;
						case soci::dt_date:
							{
								SENDANOR_LOGGER_DEBUG("prop is date" );
								std::tm when = row.get<std::tm>(c);
								std::time_t time = mktime(&when);
								double x = double(time)*1000;
								ret_value = v8::Date::New(x);
							}
							break;
						default:
							throw RUNTIME_ERROR("unknown soci type");
						} // end of switch props.get_data_type()
					} // end of indicator if-elseif-else
					
				} catch (Glib::Exception& e) {
					SENDANOR_LOGGER_DEBUG("Converting value: Glib exception: `" << e.what() << "': Setting value to undefined");
				} catch (std::exception& e) {
					SENDANOR_LOGGER_DEBUG("Converting value: std::exception: `" << e.what() << "': Setting value to undefined");
				} catch (...) {
					SENDANOR_LOGGER_DEBUG("Converting value: Unknown exception: Setting value to undefined");
				} // end of try-catch
				
				if(ret_value.IsEmpty()) ret_value = v8::Undefined();
				if(ret_id.IsEmpty()) throw RUNTIME_ERROR("ret_id.IsEmpty()");
				ret_row->Set(ret_id, ret_value );
				if(!ret_name.IsEmpty()) ret_row->Set(ret_name, ret_value);
			}
			v8::Handle<v8::Integer> ret_id = v8::Integer::New(i);
			ret_rows->Set(ret_id, ret_row);
			i++;
		}
		return handle_scope.Close(ret_rows);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}






/** Construct a SQL session */
v8::Handle<v8::Value> do_v8_sql_constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_sql_constructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		
		// Get configuration string
		const Glib::ustring config = openjs::convert<Glib::ustring>(args[0]);
		
		// Create SQL function template
		static v8::Persistent<v8::FunctionTemplate> function_template;
		if(function_template.IsEmpty()) {
			v8::Handle<v8::FunctionTemplate> tmp = v8::FunctionTemplate::New();
			if(tmp.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
			function_template = v8::Persistent<v8::FunctionTemplate>::New(tmp);
		}
		
		// Create SQL object template
		static v8::Persistent<v8::ObjectTemplate> obj_template;
		if(obj_template.IsEmpty()) {
			v8::Handle<v8::ObjectTemplate> tmp = function_template->InstanceTemplate();
			obj_template = v8::Persistent<v8::ObjectTemplate>::New(tmp);
			obj_template->SetInternalFieldCount(1);
			
			obj_template->Set(v8::String::New("close"), v8::FunctionTemplate::New(do_v8_soci_session_close));
			obj_template->Set(v8::String::New("reconnect"), v8::FunctionTemplate::New(do_v8_soci_session_reconnect));
			obj_template->Set(v8::String::New("begin"), v8::FunctionTemplate::New(do_v8_soci_session_begin));
			obj_template->Set(v8::String::New("commit"), v8::FunctionTemplate::New(do_v8_soci_session_commit));
			obj_template->Set(v8::String::New("rollback"), v8::FunctionTemplate::New(do_v8_soci_session_rollback));
			obj_template->Set(v8::String::New("gotData"), v8::FunctionTemplate::New(do_v8_soci_session_got_data));
			obj_template->Set(v8::String::New("getLastQuery"), v8::FunctionTemplate::New(do_v8_soci_session_get_last_query));
			obj_template->Set(v8::String::New("uppercaseColumnNames"), v8::FunctionTemplate::New(do_v8_soci_session_uppercase_column_names));
			obj_template->Set(v8::String::New("getBackendName"), v8::FunctionTemplate::New(do_v8_soci_session_get_backend_name));
			
			obj_template->Set(v8::String::New("query"), v8::FunctionTemplate::New(do_v8_sql_query<query_arg_type_normal_arguments>));
			obj_template->Set(v8::String::New("queryObject"), v8::FunctionTemplate::New(do_v8_sql_query<query_arg_type_single_object>));
		}
		
		// Create SQL object
		v8::Handle<v8::Object> obj = function_template->GetFunction()->NewInstance();
		
		// Create SQL session
		soci::session* session = new soci::session(config.c_str());
		if(session == 0) throw RUNTIME_ERROR("session == 0");
		
		// Set session pointer to SQL object
		v8::Handle<v8::External> ptr = v8::External::New(session);
		if(ptr.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");	
		obj->SetInternalField(0, ptr);
		
		return handle_scope.Close(obj);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Constructor */
openjs::extensions::sql::sql(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("sql", "");
}

/* Module initializer */
void openjs::extensions::sql::init(openjs::core::extension_context& a_context) {
	
	/* Data */
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
	
	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	//do_init_template();
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	m_template->SetInternalFieldCount(3); // for ostream pointer
	m_template->Set(v8::String::New("connect"), v8::FunctionTemplate::New(do_v8_sql_constructor) );
	
	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("sql"), m_obj );

}

/* EOF */
