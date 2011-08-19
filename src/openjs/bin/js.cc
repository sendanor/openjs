/* OpenJS.org Interpreter -- Source Code for core program
 * $Id: js.cc 10465 2009-12-31 18:18:53Z jheusala $
 */

#include <sendanor/exception.h>   // for RUNTIME_ERROR
#include "openjs/core/v8.h"          // for v8
#include "openjs/core/log.h"         // for SENDANOR_LOGGER_* and SENDANOR_LOG_JS_EXCEPTION
#include "openjs/core/convert.h"     // for openjs::convert
#include "openjs/core/extension_context.h"     // for openjs::core::extension_context
#include "openjs/core/extension.h"             // for openjs::core::extension
#include <glibmm/exception.h>     // for Glib::Exception
#include <glibmm/ustring.h>       // for Glib::ustring
#include <fstream>                // for std::ifstream
#include <cstring>                // for std::strlen
#include "Modular/Modular.h"      // for Modular::*
#include "Modular/Modular.hcc"    // for Modular::*
#include "openjs/core/config.h"     // for openjs::config_* etc
#include <cstdlib>              // for std::getenv and environ
#include <cstdio>               // for environ
extern char **environ;

namespace po = boost::program_options;

namespace openjs {
	namespace core {
		Glib::ustring parse_source_code(const Glib::ustring& source_file);
		int run_script(const Glib::ustring& source_code, const Glib::ustring& source_file);
		int run_script(const Glib::ustring& source_file);
		void fatal_error_callback(const char* location, const char* message);
	}
}

/** Parse source code. First line will be ignored if it contains '#' at the begining. */
Glib::ustring openjs::core::parse_source_code(const Glib::ustring& source_file) {
    SENDANOR_LOGGER_FUNCTION("parse_source_code", "source_file=`" << source_file << "'");
	std::ifstream input(source_file.c_str());
	if(!input) throw RUNTIME_ERROR("Failed to read file: " + source_file);
	Glib::ustring source_code;
	std::string linebuf;
	if(std::getline(input, linebuf) && (linebuf[0] != '#')) source_code += linebuf + "\n";
	while(std::getline(input, linebuf)) source_code += linebuf + "\n";
	//SENDANOR_LOGGER_DEBUG("source code = `" << source_code << "'" );
	return source_code;
}

/** Run JavaScript code */
int openjs::core::run_script(const Glib::ustring& source_code, const Glib::ustring& source_file) {
    SENDANOR_LOGGER_FUNCTION("run_script", "source_code=`" << source_code << "', source_file=`" << source_file << "'");
	v8::Handle<v8::String> v8_source = openjs::convert<v8::Handle<v8::Value> >(source_code)->ToString();
	v8::Handle<v8::Integer> v8_line_offset = v8::Integer::New(0);
	v8::Handle<v8::Integer> v8_col_offset = v8::Integer::New(0);
	v8::ScriptOrigin v8_origin( openjs::convert<v8::Handle<v8::Value> >(source_file), v8_line_offset, v8_col_offset );
	
	v8::TryCatch v8_try_catch;
	v8::Handle<v8::Script> v8_script = v8::Script::Compile(v8_source, &v8_origin);
	
	// Check compilation errors
	if(v8_script.IsEmpty()) {
		SENDANOR_LOG_JS_EXCEPTION(v8_try_catch);
		return 1;
	}
	
	v8::Handle<v8::Value> v8_result = v8_script->Run();
	
	// Check errors during execution
	if(v8_result.IsEmpty()) {
		SENDANOR_LOG_JS_EXCEPTION(v8_try_catch);
		return 1;
	}
	
	return 0;
}

/** Run JavaScript code */
int openjs::core::run_script(const Glib::ustring& source_file) {
	SENDANOR_LOGGER_FUNCTION("run_script", "source_file=`" << source_file << "'");
	Glib::ustring source_code;
	try {
		source_code = parse_source_code(source_file);
	} catch(const Glib::Exception& e) {
		SENDANOR_LOGGER_ERROR("Exception caught: Glib: " << e.what());
		return 1;
	} catch(const std::exception& e) {
		SENDANOR_LOGGER_ERROR("Exception caught: " << e.what());
		//const sendanor::backtraceable* be = dynamic_cast<const sendanor::backtraceable*>(&e);
		//if(be) {
		//	SENDANOR_LOGGER_INFO( be->trace() );
		//}
		return 1;
	} catch(...) {
		SENDANOR_LOGGER_ERROR("Exception caught: Unknown type");
		return 1;
	}
	return run_script(source_code, source_file);
}

/** Fatal error callback */
void openjs::core::fatal_error_callback(const char* location, const char* message) {
	SENDANOR_LOGGER_FUNCTION("openjs_fatal_error_callback", "location=`" << location << "', message='" << message << "'");
	std::cerr << "v8 Fatal Error: " << location << ": " << message << std::endl;
}


/** Parse locales */
void parse_locales(const std::string& rawnames, std::vector<std::string>& names) {
	std::istringstream in(rawnames);
	std::string name;
	while (std::getline(in, name, '\n')) names.push_back(name);
}

/** Search default locale */
std::locale search_default_locale(const std::vector<std::string>& names) {
	for(std::vector<std::string>::const_iterator i=names.begin(); i!=names.end(); ++i) {
		try {
			return std::locale(i->c_str());
		} catch (...) {
			continue;
		}
	}
	return std::locale();
}


/** Main */
int main(int argc, char* argv[]) {
    SENDANOR_LOGGER_FUNCTION("main", "argc=`" << argc << "', argv");
	try {
		
		SENDANOR_LOGGER_INFO("Configuring");
		sendanor::Logger::log().level_limit( 100000 );
		
		// Save standard C++ locale
		std::locale stdloc;
		std::string our_v8_args;
		
		/* Parse configuration */
		openjs::po_configuration config;
		openjs::parse_args(config, argc, argv);
		
		// -h --help
		if(config.opts.count("help")) {
			po::options_description visible("Allowed options");
			visible.add(config.generic_opts_desc).add(config.config_opts_desc);
			std::cout << visible << std::endl;
			return 0;
		}
		
		// --version
		if(config.opts.count("version")) {
			std::cout << "OpenJS versions:" << std::endl
			          << "* OpenJS: " OPENJS_VERSION << std::endl
			          << "* V8:     " << v8::V8::GetVersion() << std::endl;
			return 0;
		}
		
		// Prepare log file
		sendanor::Logger::log().level_limit( config.verbose_level );
		SENDANOR_LOGGER_INFO("Log target: " << config.log_target);
		sendanor::ScopedLoggerTarget log_target_scope(config.log_target);
		sendanor::Logger::log().imbue(stdloc);
		
		// Set v8 things
		v8::Locker locker;
		v8::V8::SetFatalErrorHandler(openjs::core::fatal_error_callback);
		v8::V8::SetFlagsFromString(config.v8_args.c_str(), config.v8_args.size());
		
		/* Parse ENV arguments */
		
		/* Set locale */
		{
			v8::Unlocker unlocker;
			SENDANOR_LOGGER_DEBUG("Setting locale");
			parse_locales(DEFAULT_LOCALES, config.locales);
			std::locale loc(search_default_locale(config.locales));
			std::locale::global(loc);
			SENDANOR_LOGGER_DEBUG( "locale=`" << loc.name() << "'" );
		}
		
		/* Configure v8 */
		v8::V8::SetFatalErrorHandler(openjs::core::fatal_error_callback);
		v8::V8::SetFlagsFromString(our_v8_args.c_str(), our_v8_args.size());
		
		// These might be interesting to implement someday...
		//v8::SetFailedAccessCheckCallbackFunction(openjs_failed_access_check_callback);
		//SetGlobalGCPrologueCallback(GCCallback);
		//SetGlobalGCEpilogueCallback(GCCallback);
		
		/* Prepare v8 */
		SENDANOR_LOGGER_INFO("Preparing v8");
		
		// Initialize from snapshot if possible
		if(!v8::V8::Initialize()) {
			SENDANOR_LOGGER_ERROR("v8::Initialize() failed");
		}
		
		v8::HandleScope v8_handle_scope;
		openjs::core::extension_context ext_context;
		ext_context.m_v8_context = v8::Context::New();
		v8::Context::Scope context_scope(ext_context.m_v8_context);
		
		ext_context.m_config = &config;
		
		/* Prepare CLI arguments */
		Glib::ustring source_file;
		{
			v8::Unlocker unlocker;
			SENDANOR_LOGGER_INFO("Preparing CLI arguments");
			source_file = config.source_file;
			
			SENDANOR_LOGGER_DEBUG("Setup command line arguments for the script");
			std::vector<Glib::ustring>& args = ext_context.m_args;
			for(int i=config.source_file_place; i<argc; ++i) {
				SENDANOR_LOGGER_DEBUG("argv[" << i-1 << "] = `" << argv[i] << "'");
				std::string strbuf(argv[i], std::strlen(argv[i]));
				Glib::ustring tmp = openjs::convert<Glib::ustring>(strbuf);
				tmp = tmp.normalize();
				SENDANOR_LOGGER_DEBUG("tmp = `" << tmp << "'");
				args.push_back(tmp);
			}
			
			/* Prepare ENV */
			SENDANOR_LOGGER_INFO("Preparing ENV");
			openjs::core::parse_environ(environ, ext_context.m_environ);
			
		}
		
		/* Prepare extensions */
		SENDANOR_LOGGER_INFO("Preparing extensions");
		Modular::ModuleRegister<openjs::core::extension> extensions;
		ext_context.m_register = &extensions;
		
		Modular::LoadedModule<openjs::core::extension>* modloader = extensions.load(PLUGIN_PATH "/" EXTENSION_DIR "/loader.so", config);
		if(!modloader) throw RUNTIME_ERROR("Could not load module: " PLUGIN_PATH "/" EXTENSION_DIR "/loader.so");
		modloader->module()->init(ext_context);
		
		/* Run core JavaScript */
		int ret = 0;
		
		try {
			
			SENDANOR_LOGGER_INFO("Running " PLUGIN_PATH "/" EXTENSION_DIR "/loader.js");
			ret = openjs::core::run_script(PLUGIN_PATH "/" EXTENSION_DIR "/loader.js");
			if(ret != 0) throw RUNTIME_ERROR("Failed to load: " PLUGIN_PATH "/" EXTENSION_DIR "/loader.js");
			
			//SENDANOR_LOGGER_INFO("Running " PLUGIN_PATH "/" EXTENSION_DIR "/core/main.js");
			//ret = openjs::core::run_script(PLUGIN_PATH "/" EXTENSION_DIR "/core/main.js");
			//if(ret != 0) throw RUNTIME_ERROR("Failed to load: " PLUGIN_PATH "/" EXTENSION_DIR "/main.js");
			
			SENDANOR_LOGGER_INFO("Running " << source_file);
			ret = openjs::core::run_script(source_file);
			
		} catch(...) {
			ext_context.m_v8_context.Dispose();
			throw;
		}
		
		SENDANOR_LOGGER_INFO("Exiting with status " << ret);
		ext_context.m_v8_context.Dispose();
		
		return ret;
		
	} catch(const Glib::Exception& e) {
		SENDANOR_LOGGER_ERROR("Exception caught: Glib: " << e.what());
		return 1;
	} catch(const std::exception& e) {
		SENDANOR_LOGGER_ERROR("Exception caught: " << e.what());
		const sendanor::backtraceable* be = dynamic_cast<const sendanor::backtraceable*>(&e);
		if(be) {
			SENDANOR_LOGGER_INFO( be->trace() );
		}
		return 1;
	} catch(...) {
		SENDANOR_LOGGER_ERROR("Unknown exception caught!");
		throw;
	}
}

/* EOF */
