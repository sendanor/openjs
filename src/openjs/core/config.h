/* XSP -- JavaScript CGI
 * $Id: js-orig.cc 10449 2009-12-30 12:22:00Z jheusala $
 */

#ifndef SENDANOR_OPENJS_CORE_CONFIG_H
#define SENDANOR_OPENJS_CORE_CONFIG_H 1

#include <vector>                     // for std::vector
#include <string>                     // for std::string
#include <boost/program_options.hpp>  // for boost::program_options::*
#include <glibmm/ustring.h>           // for Glib::ustring

namespace openjs {
	
	/** OpenJS configuration */
	struct configuration {
		std::vector<std::string> libraries;
		std::vector<std::string> locales;
		std::string v8_args;
		std::string log_target_format;
		std::string log_target;
		Glib::ustring source_file;
		int verbose_level;
		int source_file_place;
		std::string output_file;
		
		/* Constructor */
		configuration();
	};
	
	/** OpenJS configuration with boost::program_options */
	struct po_configuration : public configuration {
		boost::program_options::variables_map opts;
		boost::program_options::options_description generic_opts_desc;
		boost::program_options::options_description config_opts_desc;
		
		/* Constructor */
		po_configuration();
	};
	
	/** Parse arguments */
	void parse_args(po_configuration& config, int argc, char* argv[]);
	
}


/* The Source Implementation */

/* XSP -- JavaScript CGI
 * $Id: js-orig.cc 10449 2009-12-30 12:22:00Z jheusala $
 */

#include <sendanor/logger.h>    // for sendanor::ScopedLoggerSink
#include <boost/filesystem.hpp>          // for boost::filesystem
#include <boost/filesystem/fstream.hpp>  // for boost::filesystem::ifstream

/** Constructor */
openjs::configuration::configuration() 
 : verbose_level(0)
 , source_file_place(1)
 { }

/** Constructor */
openjs::po_configuration::po_configuration() 
 : generic_opts_desc("Generic options")
 , config_opts_desc("Configuration")
 {
	namespace fs = boost::filesystem;
	namespace po = boost::program_options;
	
	generic_opts_desc.add_options()
		("help,h", "produce help message")
		("version,v", "version information")
	;
	
	config_opts_desc.add_options()
		("verbose", po::value<int>(), "set log verbose level")
		("max-verbose,x", "set log verbose level to maximum")
		("locale,l", po::value< std::vector<std::string> >(), "set locale")
		("extension,e", po::value< std::vector<std::string> >(), "load extension")
		("v8", po::value<std::string>(), "set v8 option(s)")
		("log", po::value<std::string>(), "set log target")
	    ;
	
}

/** Parse arguments */
void openjs::parse_args(openjs::po_configuration& config, int argc, char* argv[]) {
	
	namespace fs = boost::filesystem;
	namespace po = boost::program_options;
	
	config.source_file_place = argc;
	for(int i=1; i<argc; i++) {
		const std::string arg(argv[i], std::strlen(argv[i]));
		if( (arg.size() >= 1) && (arg[0] == '-') ) continue;
		config.source_file = arg;
		config.source_file_place = i;
		break;
	}
	
	po::options_description opts_desc;
	opts_desc.add(config.generic_opts_desc).add(config.config_opts_desc);
	po::store(po::parse_command_line(config.source_file_place, argv, opts_desc), config.opts);
	
	if(fs::exists("openjs.cfg")) {
		SENDANOR_LOGGER_DEBUG("Reading local configuration file openjs.cfg");
		std::ifstream config_file_input("openjs.cfg");
		po::store(po::parse_config_file(config_file_input, config.config_opts_desc), config.opts);
	}
	
	po::notify(config.opts);
	
	if(config.opts.count("max-verbose"))         { config.verbose_level = 100000; }
	if(config.opts.count("verbose"))   { config.verbose_level = config.opts["verbose"].as<int>(); }
	
	if(config.opts.count("locale"))    {
		std::vector<std::string> locales = config.opts["locale"].as< std::vector<std::string> >();
		for(std::vector<std::string>::iterator i=locales.begin(); i!=locales.end(); ++i) {
			config.locales.push_back(*i);
		}
	}
	
	if(config.opts.count("extension")) {
		std::vector<std::string> extensions = config.opts["extension"].as< std::vector<std::string> >();
		for(std::vector<std::string>::iterator i=extensions.begin(); i!=extensions.end(); ++i) {
			config.libraries.push_back(*i);
		}
	}
	
	if(config.opts.count("v8")) { config.v8_args = config.opts["v8"].as<std::string>(); }
	if(config.opts.count("log")) { config.log_target_format = config.opts["log"].as<std::string>(); }
	
	// Prepare log file
	config.log_target = sendanor::log_format(config.log_target_format);
}

#endif
/* EOF */
