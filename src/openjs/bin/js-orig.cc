/* XSP -- JavaScript CGI
 * $Id: js-orig.cc 10449 2009-12-30 12:22:00Z jheusala $
 */

#include <sendanor/exception.h> // for RUNTIME_ERROR
#include <sendanor/logger.h>    // for sendanor::ScopedLoggerSink
#include <glibmm/exception.h>   // for Glib::Exception
#include <vector>               // for std::vector
#include <glibmm/ustring.h>     // for Glib::ustring
#include "xsp/core/convert.h"   // for xsp::convert
#include <fstream>              // for std::ifstream
#include <cstring>              // for std::strlen
#include "xsp/core/extension.h" // for xsp::core::extension_plugin_registry
#include "xsp/core/extension_context.h" // for xsp::core::extension_context
#include "xsp/core/extension_registry.h" // for xsp::core::extension_context
#include <plugin/plugin.hpp>             // for plugin::loader

#include <cstdlib>              // for std::getenv and environ
#include <cstdio>               // for environ
extern char **environ;

#include <map>                  // for std::make_pair

#include <boost/filesystem.hpp>          // for boost::filesystem
#include <boost/filesystem/fstream.hpp>  // for boost::filesystem::ifstream
namespace fs = boost::filesystem;

#include <sstream>         // for std::istringstream

#include "xsp/core/log.h" // for SENDANOR_LOG_JS_EXCEPTION

/** Library name and dependencies */
namespace xsp {
	struct library {
		std::string name;
		std::vector<std::string> dependencies;
		fs::path path;
		bool loaded;
		library() :loaded(false) {
		}
		inline bool is_js_source() const { return path.extension() == ".js"; }
		inline bool is_binary() const { return !is_js_source(); }
	};
	
	bool operator< (const library& a, const library& b);
	inline bool operator==(const library& a, const library& b) { return a.name == b.name; }
	inline bool operator!=(const library& a, const library& b) { return !(a==b); }
	inline bool operator> (const library& a, const library& b) { return !(a<b); }
	inline bool operator<=(const library& a, const library& b) { return a==b || a<b; }
	inline bool operator>=(const library& a, const library& b) { return a==b || a>b; }
	
	std::ostream& operator<<(std::ostream& in, const library& a);
	void parse_dep_file(std::vector<std::string>& dependencies, fs::path const& file);

	library& search_library_by_name(std::vector<library>& libraries, const std::string& name);
	bool load_library(library& lib, plugin::loader&, std::vector<library>& libraries
		, xsp::core::extension_context& ext_context);
}

/** */
bool xsp::operator<(const library& a, const library& b) {
	SENDANOR_LOGGER_FUNCTION("xsp::operator<", "a=" << a << ", b=" << b);
	
	// 
	if( a.is_binary() && b.is_js_source() ) return true;
	
	/*
	if( a.is_js_source() && b.is_binary() ) return false;

	// Check if b needs a first
	if(!b.dependencies.empty()) {
		SENDANOR_LOGGER_DEBUG( "searching dependencies for `" << b.name << "'" );
		for(std::vector<std::string>::const_iterator i=b.dependencies.begin(); i!=b.dependencies.end(); ++i) {
			if(a.name == *i) {
				SENDANOR_LOGGER_DEBUG( "FINAL true; ext `" << b.name << "' needs `" << a.name << "' first" );
				SENDANOR_LOGGER_DEBUG( "RESULT: `" << a.name << "' < `" << b.name << "'");
				return true;
			}
			SENDANOR_LOGGER_DEBUG( "dep `" << *i << "' for `" << b.name << "' is not `" << a.name << "'" );
		}
	}
	SENDANOR_LOGGER_DEBUG( "RESULT: `" << a.name << "' >= `" << b.name << "'");
	*/
	
	return false;
	
}

/** Stream output operator for libraries */
std::ostream& xsp::operator<<(std::ostream& in, const library& a) {
	in << a.name << "=(d={";
	for(std::vector<std::string>::const_iterator i=a.dependencies.begin(); i!=a.dependencies.end(); ++i) {
		in << "[" << *i << "]";
	}
	return in << "}, path=[" << a.path << "])";
}

/** Parse dep file */
void xsp::parse_dep_file(std::vector<std::string>& dependencies, fs::path const& file) {
    SENDANOR_LOGGER_FUNCTION("parse_dep_file", "dependencies[" << dependencies.size() << "], file=" << file);
	fs::ifstream in(file);
	std::string name;
	while (std::getline(in, name)) {
		if(!name.empty()) {
			SENDANOR_LOGGER_DEBUG("Inserting `" << name << "' as a dependency for `" << file << "'" );
			dependencies.push_back(name);
		}
	}
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

/** Fatal error callback */
void xsp_fatal_error_callback(const char* location, const char* message) {
    SENDANOR_LOGGER_FUNCTION("xsp_fatal_error_callback", "location=`" << location << "', message='" << message << "'");
	std::cerr << "v8 Fatal Error: " << location << ": " << message << std::endl;
}

/** Search library by name */
xsp::library& xsp::search_library_by_name(std::vector<xsp::library>& libraries, const std::string& name) {
	for (std::vector<xsp::library>::iterator i = libraries.begin(); i!=libraries.end(); ++i) {
		xsp::library& lib = *i;
		if(lib.name == name) return lib;
	}
	throw RUNTIME_ERROR(std::string("No library found: ") + name);
}

/** Load library */
bool xsp::load_library(xsp::library& lib, plugin::loader& plugin_loader, std::vector<xsp::library>& libraries
		, xsp::core::extension_context& ext_context) {

	static bool has_binary_initialized = false;

	xsp::core::extension_registry& extensions = xsp::core::extension_registry::ref();
	
	SENDANOR_LOGGER_DEBUG(lib.path << ": Loading library and its depencies: `" << lib << "'" );
	
	if(lib.loaded) {
		SENDANOR_LOGGER_WARNING(lib.path << ": Library already loaded: `" << lib.name << "'" );
		return false;
	}
	
	if(!lib.dependencies.empty()) {
		SENDANOR_LOGGER_DEBUG(lib.path << ": Loading depencies for `" << lib.name << "'" );
		for(std::vector<std::string>::const_iterator i=lib.dependencies.begin(); i!=lib.dependencies.end(); ++i) {
			xsp::library& dep = search_library_by_name(libraries, *i);
			if(!dep.loaded) {
				SENDANOR_LOGGER_DEBUG(lib.path << ": Loading depency `" << dep.name << "'" );
				xsp::load_library(dep, plugin_loader, libraries, ext_context);
			}
		}
	}
	
	SENDANOR_LOGGER_DEBUG(lib.path << ": Loading library: `" << lib.name << "'" );
	
			// Skip dependency files silently
			if(lib.path.extension() == ".dep") {
				return false;
			// Skip archive files silently
			} else if(lib.path.extension() == ".a") {
				return false;
			// Load normal libraries
			} else if( (lib.path.extension() == ".so") || (lib.path.extension() == ".dll") ) {
				
				if(has_binary_initialized) {
					SENDANOR_LOGGER_INFO(lib.path << ": Binary modules have been initialized already" );
					return false;
				}
				
				SENDANOR_LOGGER_DEBUG(lib.path << ": Loading binary library" );
				if(!plugin_loader.load(lib.path)) {
					SENDANOR_LOGGER_ERROR(lib.path << ": Could not load library (" << lib << ")");
					SENDANOR_LOGGER_DEBUG(lib.path << ": Full library object: " << lib);
				}
				SENDANOR_LOGGER_INFO(lib.path << ": Library loaded" );
				lib.loaded = true;
				return true;
				
			// Load JavaScript libraries
			} else if(lib.path.extension() == ".js") {
				
				if(!has_binary_initialized) {
					SENDANOR_LOGGER_DEBUG("Initializing binary libraries");
					extensions.init(ext_context);
					has_binary_initialized = true;
				}
				
				SENDANOR_LOGGER_DEBUG(lib.path << ": Loading source library" );
				
				// Get source code
				fs::ifstream include_input(lib.path);
				Glib::ustring include_source_code;
				std::string include_linebuf;
				while(std::getline(include_input, include_linebuf)) include_source_code += include_linebuf + "\n";
				//SENDANOR_LOGGER_DEBUG("source code = `" << include_source_code << "'" );
				
				// Create a string containing the JavaScript source code.
				v8::Handle<v8::String> source = xsp::convert<v8::Handle<v8::Value> >(include_source_code)->ToString();
				
				// Create origin
				v8::ScriptOrigin origin( xsp::convert<v8::Handle<v8::Value> >(lib.path.string())
				    , v8::Integer::New(0), v8::Integer::New(0) );
				
				// Compile
				v8::Handle<v8::Script> script = v8::Script::Compile(source, &origin);
				
				v8::TryCatch try_catch;
				v8::Handle<v8::Value> result = script->Run();
				if(result.IsEmpty()) {
					SENDANOR_LOG_JS_EXCEPTION(try_catch);
					return false;
				}
				
				SENDANOR_LOGGER_INFO(lib.path << ": Library loaded" );
				lib.loaded = true;
				return true;
				
			// Unknown library
			} else {
				SENDANOR_LOGGER_WARNING("Skipped unknown library (" << lib.path << ")" );
			}
	return false;
}

/** Enable library if it exists */
void enable_default_library_if_exists(std::vector<std::string>& default_libraries, const std::string& name) {
	std::vector<std::string>::iterator i = find(default_libraries.begin(), default_libraries.end(), name);
	if(i == default_libraries.end()) {
		default_libraries.push_back(name);
	}
}

/** Main */
int main(int argc, char* argv[]) {
    SENDANOR_LOGGER_FUNCTION("main", "argc=`" << argc << "', argv");
	try {
		std::locale stdloc;
		
		// Get source file name
		SENDANOR_LOGGER_DEBUG("Parsing command line arguments");
		std::vector<std::string> default_libraries;
		std::vector<std::string> default_locale_names;
		std::string our_v8_args;
		std::string log_target;
		bool full_loading_mode = false;
		bool base_loading_mode = true;
		bool extjs_loading_mode = false;
		bool cgi_loading_mode = true;
		bool sql_loading_mode = false;
		Glib::ustring source_file;
		int source_file_place = 1;
		for(int i=1; i<argc; i++) {
			const std::string arg(argv[i], std::strlen(argv[i]));
			
			// -h --help
			if((arg == "-h") || (arg == "--help")) {
				std::cout << "USAGE: " << argv[0] << " [-xvdlhe].." << std::endl
				          << "  --help         This help page" << std::endl
				          << "  --version      Version information" << std::endl
				          << "  -x             Set verbose level to 100000" << std::endl
				          << "  -v             Increment verbose level by 1" << std::endl
				          << "  -d N           Set verbose level to N" << std::endl
				          << "  -l LOC         Set locale to LOC" << std::endl
				          << "  --light        Do not load modules" << std::endl
				          << "  --cgi          Load CGI modules, default" << std::endl
				          << "  --sql          Load SQL module" << std::endl
				          << "  --extjs        Load extended JS modules" << std::endl
				          << "  --bloat        Use all modules (bloat mode)" << std::endl
				          << "  -e MOD         Use module MOD. Single '-e none' means no modules will be loaded at all." << std::endl
				          << "  --v8-args STR  Pass STR to v8 as arguments" << std::endl
				          << "  -o FILE        Set log file. Default stderr." << std::endl
				          ;
				
				return 0;
			}
			
			// --version
			if(arg == "--version") {
				std::cout << "XSP version information" << std::endl
				          << "* XSP: $Id: js-orig.cc 10449 2009-12-30 12:22:00Z jheusala $" << std::endl
				          << "* V8:  " << v8::V8::GetVersion() << std::endl;
				return 0;
			}
			
			// -x 
			if(arg == "-x") {
				sendanor::Logger::log().level_limit( 100000 );
				continue;
			}
			
			// -v 
			if(arg == "-v") {
				sendanor::Logger::log().level_limit( sendanor::Logger::log().level_limit() +1 );
				continue;
			}
			
			// -d 
			if(arg == "-d") {
				if(i+1 < argc) {
					++i;
					int limit = boost::lexical_cast<int>( std::string(argv[i], std::strlen(argv[i])) );
					sendanor::Logger::log().level_limit( limit );
				}
				continue;
			}
			
			// -l 
			if(arg == "-l") {
				if(i+1 < argc) {
					++i;
					std::string locname = boost::lexical_cast<std::string>( std::string(argv[i], std::strlen(argv[i])) );
					default_locale_names.push_back(locname);
				}
				continue;
			}
			
			// -e
			if(arg == "-e") {
				if(i+1 < argc) {
					++i;
					std::string name = boost::lexical_cast<std::string>( std::string(argv[i], std::strlen(argv[i])) );
					enable_default_library_if_exists(default_libraries, name);
				}
				continue;
			}
			
			// --light
			if(arg == "--light") {
				full_loading_mode = false;
				base_loading_mode = false;
				extjs_loading_mode = false;
				cgi_loading_mode = false;
				sql_loading_mode = false;
				continue;
			}
			
			// --cgi
			if(arg == "--cgi") {
				full_loading_mode = false;
				base_loading_mode = true;
				extjs_loading_mode = false;
				cgi_loading_mode = true;
				sql_loading_mode = false;
				continue;
			}
			
			// --sql
			if(arg == "--sql") {
				full_loading_mode = false;
				sql_loading_mode = true;
				continue;
			}
			
			// --extjs
			if(arg == "--extjs") {
				full_loading_mode = false;
				extjs_loading_mode = true;
				continue;
			}
			
			// --bloat
			if(arg == "--bloat") {
				full_loading_mode = true;
				base_loading_mode = false;
				extjs_loading_mode = false;
				cgi_loading_mode = false;
				sql_loading_mode = false;
				continue;
			}
			
			// --v8-args
			if(arg == "--v8-args") {
				if(i+1 < argc) {
					++i;
					our_v8_args = boost::lexical_cast<std::string>( std::string(argv[i], std::strlen(argv[i])) );
				}
				continue;
			}
			
			// -o
			if(arg == "-o") {
				if(i+1 < argc) {
					++i;
					log_target = std::string(argv[i], std::strlen(argv[i]));
				}
				continue;
			}
			
			// Unknown argument
			if(arg[0] == '-') {
				throw RUNTIME_ERROR("Unknown argument: '" + arg + "'");
			}
			
			source_file = arg;
			source_file_place = i;
			break;
		}
		
		// Read configuration file
		if(fs::exists("openjs.cfg")) {
			SENDANOR_LOGGER_DEBUG("Reading local configuration file openjs.cfg");
			std::ifstream config_file_input("openjs.cfg");
			
			std::string linebuf;
			while(std::getline(config_file_input, linebuf)) {
				// FIXME: Implement trim
				if(linebuf[0] == '#') continue;
				
				// Enable module
				if( (linebuf[0] == 'e') && (linebuf[1] == ' ') ) {
					std::string name = linebuf.substr(2);
					enable_default_library_if_exists(default_libraries, name);
				}
				
				// Select library mode
				if( (linebuf[0] == 'm') && (linebuf[1] == ' ') ) {
					std::string mode = linebuf.substr(2);
					
					// Base
					if(mode == "base") {
						full_loading_mode = false;
						base_loading_mode = true;
						continue;
					}
					
					// --cgi
					if(mode == "cgi") {
						full_loading_mode = false;
						base_loading_mode = true;
						cgi_loading_mode = true;
						continue;
					}
					
					// --sql
					if(mode == "sql") {
						full_loading_mode = false;
						sql_loading_mode = true;
						continue;
					}
					
					// --extjs
					if(mode == "extjs") {
						full_loading_mode = false;
						extjs_loading_mode = true;
						continue;
					}
					
					// --bloat
					if(mode == "bloat") {
						full_loading_mode = true;
						base_loading_mode = false;
						extjs_loading_mode = false;
						cgi_loading_mode = false;
						sql_loading_mode = false;
						continue;
					}
					
					throw RUNTIME_ERROR("Unknown config mode: '" + mode + "'");
				}
				
				// Change log target
				if( (linebuf[0] == 'o') && (linebuf[1] == ' ') ) {
					log_target = linebuf.substr(2);
				}
				
			}
			SENDANOR_LOGGER_DEBUG("Configurations loaded.");
		}
		
		// Prepare log target
		SENDANOR_LOGGER_DEBUG("Preparing log target...");
		std::string log_file = sendanor::log_format(log_target);
		SENDANOR_LOGGER_INFO("Log target: " << log_file);
		
		// Set log target
		sendanor::ScopedLoggerTarget log_target_scope(log_file);
		sendanor::Logger::log().imbue(stdloc);
		
		// Setup loading modes
		if(base_loading_mode) {
			enable_default_library_if_exists(default_libraries, "basicstream");
			enable_default_library_if_exists(default_libraries, "basicsys");
			enable_default_library_if_exists(default_libraries, "basicfilesystem");
		}
		
		if(extjs_loading_mode) {
			enable_default_library_if_exists(default_libraries, "date");
			enable_default_library_if_exists(default_libraries, "array");
			enable_default_library_if_exists(default_libraries, "string");
		}
		
		if(cgi_loading_mode) {
			enable_default_library_if_exists(default_libraries, "stream");
			enable_default_library_if_exists(default_libraries, "system");
			enable_default_library_if_exists(default_libraries, "include");
			enable_default_library_if_exists(default_libraries, "filesystem");
			enable_default_library_if_exists(default_libraries, "cgi");
		}
		
		if(sql_loading_mode) {
			enable_default_library_if_exists(default_libraries, "sql");
		}
		
		// Set v8 things
		v8::V8::SetFatalErrorHandler(xsp_fatal_error_callback);
		v8::V8::SetFlagsFromString(our_v8_args.c_str(), our_v8_args.size());
		
		// Source file
		if(source_file.empty()) throw RUNTIME_ERROR("No source file set!");
		SENDANOR_LOGGER_DEBUG( "source file = `" << source_file << "'" );
		
		// Set locale
		SENDANOR_LOGGER_DEBUG("Setting locale");
		parse_locales(DEFAULT_LOCALES, default_locale_names);
		std::locale loc(search_default_locale(default_locale_names));
		std::locale::global(loc);
		SENDANOR_LOGGER_DEBUG( "locale=`" << loc.name() << "'" );
		
		// These might be intresting to implement someday...
		//v8::SetFailedAccessCheckCallbackFunction(xsp_failed_access_check_callback);
		//SetGlobalGCPrologueCallback(GCCallback);
		//SetGlobalGCEpilogueCallback(GCCallback);
		
		// Initialize from snapshot if possible
		if(v8::V8::Initialize()) {
			SENDANOR_LOGGER_DEBUG("v8::Initialize() returned true.");
		} else {
			SENDANOR_LOGGER_DEBUG("v8::Initialize() returned false.");
		}
		
		// Get source code
		SENDANOR_LOGGER_DEBUG("Reading script source code");
		std::ifstream input(source_file.c_str());
		Glib::ustring source_code;
		std::string linebuf;
		if(std::getline(input, linebuf) && (linebuf[0] != '#')) source_code += linebuf + "\n";
		while(std::getline(input, linebuf)) source_code += linebuf + "\n";
		//SENDANOR_LOGGER_DEBUG("source code = `" << source_code << "'" );
		
		
		SENDANOR_LOGGER_DEBUG("Creating extension_context etc");
		
		// Get reference to extension registry
		//xsp::core::extension_registry& extensions = xsp::core::extension_registry::ref();
		
		// Create a stack-allocated handle scope.
		SENDANOR_LOGGER_DEBUG("Creating first v8 HandleScope");
		v8::HandleScope handle_scope;
		
		// Extension context
		SENDANOR_LOGGER_DEBUG("Creating v8 context");
		xsp::core::extension_context ext_context;
		ext_context.m_v8_context = v8::Context::New();
		//ext_context.m_out = &std::cout;
		//ext_context.m_err = &std::cerr;
		//ext_context.m_in = &std::cin;
		
		// Create a new context.
		v8::Context::Scope context_scope(ext_context.m_v8_context);
		SENDANOR_LOGGER_DEBUG("Entering v8 context");
		
		// Setup args (without first argument)
		SENDANOR_LOGGER_DEBUG("Setup command line arguments for the script");
		std::vector<Glib::ustring>& args = ext_context.m_args;
		for(int i=source_file_place; i<argc; ++i) {
			SENDANOR_LOGGER_DEBUG("argv[" << i-1 << "] = `" << argv[i] << "'");
			std::string strbuf(argv[i], std::strlen(argv[i]));
			Glib::ustring tmp = xsp::convert<Glib::ustring>(strbuf);
			tmp = tmp.normalize();
			SENDANOR_LOGGER_DEBUG("tmp = `" << tmp << "'");
			args.push_back(tmp);
		}
		
		// Setup envs
		SENDANOR_LOGGER_DEBUG("Setup system environment for the script");
		xsp::core::parse_environ(environ, ext_context.m_environ);
		
		// Load extensions
		SENDANOR_LOGGER_DEBUG("Starting extension loader");
		plugin::loader plugin_loader;
		
		/* Load default_libraries from filesystem */
		fs::path const libpath(fs::path(PLUGIN_PATH) / fs::path(EXTENSION_DIR));
		if(default_libraries.empty() && full_loading_mode) {
			SENDANOR_LOGGER_DEBUG("Loading default library list from `" << libpath << "'" );
			for (fs::directory_iterator i(libpath), end; i != end; ++i) {
				fs::path const& p = i->path();
				SENDANOR_LOGGER_DEBUG("Adding `" << p << "'" );
				
				const bool is_library_file = (p.extension() == ".so")
				                          || (p.extension() == ".dll")
				                          || (p.extension() == ".js");
				
				// Skip non-library files
				if(!is_library_file) {
					SENDANOR_LOGGER_DEBUG("Skipping `" << p << "'" );
					continue;
				}
				
				// 
				enable_default_library_if_exists(default_libraries, p.stem());
			}
			
		}
		
		/* Load library list and dependencies */
		std::vector<xsp::library> libraries;
		SENDANOR_LOGGER_DEBUG("Building library list" );
		for (std::vector<std::string>::const_iterator i=default_libraries.begin(); i!=default_libraries.end(); ++i) {
			fs::path p = libpath / std::string(*i + ".so");
			if(!fs::exists(p)) {
				p = libpath / std::string(*i + ".js");
			}
			if(!fs::exists(p)) {
				p = libpath / std::string(*i + ".dll");
			}
			if(!fs::exists(p)) {
				SENDANOR_LOGGER_DEBUG("Skipping `" << p << "', does not exist." );
				continue;
			}
			SENDANOR_LOGGER_DEBUG("Adding `" << p << "'" );
			
			const bool is_library_file = (p.extension() == ".so")
			                          || (p.extension() == ".dll")
			                          || (p.extension() == ".js");
			
			// Skip non-library files
			if(!is_library_file) {
				SENDANOR_LOGGER_DEBUG("Skipping `" << p << "'" );
				continue;
			}
			
			// 
			xsp::library lib;
			lib.name = p.stem();
			lib.path = p;
			fs::path dep_file(libpath.directory_string() + "/" + p.stem() + ".dep");
			SENDANOR_LOGGER_DEBUG("Searching `" << dep_file << "'" );
			if(fs::exists(dep_file)) {
				SENDANOR_LOGGER_DEBUG("Loading dependencies from `" << dep_file << "'" );
				xsp::parse_dep_file(lib.dependencies, dep_file);
			}
			SENDANOR_LOGGER_DEBUG("Adding library `" << lib << "'" );
			libraries.push_back(lib);
		}
		
		/* Sort library list by dependencies */
		SENDANOR_LOGGER_DEBUG("Sorting libraries" );
		std::sort(libraries.begin(), libraries.end());
		
		#ifdef DEBUG
		SENDANOR_LOGGER_DEBUG("Listing libraries" );
		for (std::vector<xsp::library>::const_iterator i = libraries.begin(); i!=libraries.end(); ++i) {
			const xsp::library& lib = *i;
			SENDANOR_LOGGER_DEBUG("* " << lib);
		}
		#endif
		
		/* Load sorted libraries */
		SENDANOR_LOGGER_DEBUG("Loading libraries" );
		for (std::vector<xsp::library>::iterator i = libraries.begin(); i!=libraries.end(); ++i) {
			xsp::library& lib = *i;
			xsp::load_library(lib, plugin_loader, libraries, ext_context);
		}
		
		// Output loaded binary extensions
		SENDANOR_LOGGER_DEBUG("Loaded binary extensions:");
		for(xsp::core::extension_plugin_registry::iterator i=xsp::core::extension_plugin_registry::begin();
		    i!=xsp::core::extension_plugin_registry::end();
		    ++i) {
			SENDANOR_LOGGER_DEBUG( "* " << (*i).name << " (" << (*i).version << ")" );
		}
		SENDANOR_LOGGER_DEBUG("End of list");
		
		// Create a string containing the JavaScript source code.
		SENDANOR_LOGGER_DEBUG("Creating v8 script source");
		v8::Handle<v8::String> source = xsp::convert<v8::Handle<v8::Value> >(source_code)->ToString();
		SENDANOR_LOGGER_DEBUG("Compiling v8 script source");
		
		// Create origin
		v8::Handle<v8::Integer> line_offset = v8::Integer::New(0);
		v8::Handle<v8::Integer> col_offset = v8::Integer::New(0);
		v8::ScriptOrigin origin( xsp::convert<v8::Handle<v8::Value> >(source_file), line_offset, col_offset );
		
		v8::Handle<v8::Script> script = v8::Script::Compile(source, &origin);
		
		SENDANOR_LOGGER_DEBUG("Running v8 compiled code in a try catch");
		v8::TryCatch try_catch;
		v8::Handle<v8::Value> result = script->Run();
		if(result.IsEmpty()) {
			SENDANOR_LOG_JS_EXCEPTION(try_catch);
			
			// Dispose the persistent context.
			SENDANOR_LOGGER_DEBUG("Disposing v8 context");
			ext_context.m_v8_context.Dispose();
			
			return 1;
		}
		
		// Dispose the persistent context.
		SENDANOR_LOGGER_DEBUG("Disposing v8 context");
		ext_context.m_v8_context.Dispose();
		
        // Convert the result to string and log it
        Glib::ustring ret = xsp::convert<Glib::ustring>(result);
        SENDANOR_LOGGER_DEBUG("javascript output = `" << ret << "'" );
        return 0;
		
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
	}
}

/* EOF */
