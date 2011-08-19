/* 
***
*** OpenJS library implementation based on micro_httpd code
*** OpenJS adaption by Copyright 2010 Jaakko Heusala <jhh@jhh.me>
*** 
**
** micro_httpd - really small HTTP server
**
** Copyright 1999,2005 by Jef Poskanzer <jef@mail.acme.com>.
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions
** are met:
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 
** THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
** ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
** FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
** DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
** OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
** HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
** LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
** OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
** SUCH DAMAGE.
*/

#include <iostream>
#include <string>

#define SERVER_NAME "microhttpd"
#define SERVER_URL "http://www.acme.com/software/micro_httpd/"
#define PROTOCOL "HTTP/1.0"
#define RFC1123FMT "%a, %d %b %Y %H:%M:%S GMT"

#ifdef DEBUG
 #ifndef MACRO_QUOTE
  #define _MACRO_QUOTE(x) #x
  #define MACRO_QUOTE(x) _MACRO_QUOTE(x)
 #endif

 #define LOG_FUNCTION(NAME, MSG) std::cerr << "[funct] " __FILE__ ":" MACRO_QUOTE(__LINE__) ": " << NAME << " (" << MSG << ")" << std::endl;
 #define LOG_DEBUG(MSG) std::cerr << "[debug] " __FILE__ ":" MACRO_QUOTE(__LINE__) ": " << MSG << std::endl;
#else
 #define LOG_FUNCTION(NAME, MSG) 
 #define LOG_DEBUG(MSG) 
#endif

/* Forwards. */
static void handle_local_request_file( const std::string& file, struct stat& sb );
static void handle_local_request( const std::string& path );
static void handle_request();
static void file_details( const std::string& dir, const std::string& name );
static void send_error( const int status, const std::string& title, const std::string& extra_header, const std::string& text );
static void send_headers( const int status, const std::string& title, const std::string& extra_header, const std::string& mime_type, const off_t length, const time_t mod );
static std::string get_mime_type( const std::string& name, const std::string& charset );
static std::string strdecode( const std::string& from );
static int hexit( const char c );
static std::string strencode( const std::string& from );

/* main */
int main( int argc, char** argv ) {
	LOG_FUNCTION("main", "argc=" << argc << ", argv");
	
	// Parse document root from first argument and change to it
	if ( argc != 2 ) send_error( 500, "Internal Error", "", "Config error - no dir specified." );
	if ( chdir( argv[1] ) < 0 ) send_error( 500, "Internal Error", "", "Config error - couldn't chdir()." );
	
	try {
		handle_request();
		return 0;
	} catch(std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
		send_error( 500, "Internal Error", "", "Exception detected" );
	} catch(...) {
		std::cerr << "Exception: Unknown" << std::endl;
		send_error( 500, "Internal Error", "", "Unknown exception" );
	}
	return 1;
	
} // end of main()

/* Implementation headers */
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <ctype.h>
#include <time.h>
#include <sys/stat.h>

/* Handle request */
static void handle_request() {
	LOG_FUNCTION("handle_request", "");
	
	// Parse method, path, protocol
	char method[10000];
	char path[10000];
	char protocol[10000];
	char line[10000];
	if ( fgets( line, sizeof(line), stdin ) == (char*) 0 ) send_error( 400, "Bad Request", "", "No request found." );
	if ( sscanf( line, "%[^ ] %[^ ] %[^ ]", method, path, protocol ) != 3 ) send_error( 400, "Bad Request", "", "Can't parse request." );
	while ( fgets( line, sizeof(line), stdin ) != (char*) 0 ) {
		if ( strcmp( line, "\n" ) == 0 || strcmp( line, "\r\n" ) == 0) break;
	}
	
	// Check method
	if ( strcasecmp( method, "get" ) != 0 ) send_error( 501, "Not Implemented", "", "That method is not implemented." );
	
	// 
	handle_local_request(std::string(path, strlen(path)));
}

/* Handle local file */
static void handle_local_request( const std::string& path ) {
	LOG_FUNCTION("handle_local_request", "path='" << path << "'");
	
	// Check filename
	if ( path[0] != '/' ) send_error( 400, "Bad Request", "", "Bad filename." );
	
	std::string file( path.begin()+1, path.end() );
	LOG_DEBUG("1 file = '" << file << "'");
	file = strdecode(file);
	LOG_DEBUG("2 file = '" << file << "'");
	if (file.empty()) file = "./";
	LOG_DEBUG("3 file = '" << file << "'");
	size_t len = file.size();
	LOG_DEBUG("4, len=" << len);
	if ( (file[0] == '/')
	 || (file == "..")
	 || (file.substr(0, 3) == "../")
	 || (file.find("/../") != std::string::npos) 
	 || ( (len >= 3) && (file.substr(len-3) == "/..")) ) {
		send_error( 400, "Bad Request", "", "Illegal filename." );
	}
	
	LOG_DEBUG("5");
	struct stat sb;
	
	if ( stat( file.c_str(), &sb ) < 0 ) send_error( 404, "Not Found", "", "File not found." );
	
	LOG_DEBUG("6. Check dir");
	if ( S_ISDIR( sb.st_mode ) ) {
		LOG_DEBUG("6.1. S_ISDIR");
		if ( file[len-1] != '/' ) {
			char location[20000];
			snprintf(location, sizeof(location), "Location: %s/", path.c_str() );
			send_error( 302, "Found", location, "Directories must end with a slash." );
	    }
		LOG_DEBUG("6.2.");
		char idx[20000];
		snprintf( idx, sizeof(idx), "%sindex.html", file.c_str() );
		if ( stat( idx, &sb ) >= 0 ) {
			handle_local_request_file(idx, sb);
			return;
		}
		LOG_DEBUG("6.3.");
		send_headers( 200, "Ok", "", "text/html", -1, sb.st_mtime );
		printf( "<html><head><title>Index of %s</title></head>\n<body bgcolor=\"#99cc99\"><h4>Index of %s</h4>\n<pre>\n", file.c_str(), file.c_str() );
		LOG_DEBUG("6.4.");
		struct dirent **dl;
		int n = scandir( file.c_str(), &dl, NULL, alphasort );
		if ( n < 0 ) {
			perror( "scandir" );
		} else {
			for ( int i = 0; i < n; ++i ) file_details( file.c_str(), dl[i]->d_name );
		}
		LOG_DEBUG("6.5.");
		printf( "</pre>\n<hr>\n<address><a href=\"%s\">%s</a></address>\n</body></html>\n", SERVER_URL, SERVER_NAME );
		fflush( stdout );
		return;
	}
	LOG_DEBUG("8");
	handle_local_request_file(file, sb);
}
 
/* Retrieve local file */
static void handle_local_request_file( const std::string& file, struct stat& sb ) {
	LOG_FUNCTION("handle_local_request_file", "file='" << file << "', sb");
	FILE* fp = fopen( file.c_str(), "r" );
	if ( fp == (FILE*) 0 ) send_error( 403, "Forbidden", "", "File is protected." );
	send_headers( 200, "Ok", "", get_mime_type( file, "UTF-8" ), sb.st_size, sb.st_mtime );
	int ich;
	while ( ( ich = getc(fp) ) != EOF ) putchar( ich );
	fflush( stdout );
}

/* file_details */
static void file_details( const std::string& dir, const std::string& name ) {
	LOG_FUNCTION("file_details", "dir='" << dir << "', name='" << name << "'");
	std::string encoded_name = strencode(name);
	std::string path = dir + "/" + name;
	struct stat sb;
	if ( lstat( path.c_str(), &sb ) < 0 ) {
		printf( "<a href=\"%s\">%-32.32s</a>    ???\n", encoded_name.c_str(), name.c_str() );
	} else {
		char timestr[16] = {0};
		strftime( timestr, 16, "%d%b%Y %H:%M", localtime( &sb.st_mtime ) );
		printf( "<a href=\"%s\">%-32.32s</a>    %15s %14lld\n", encoded_name.c_str(), name.c_str(), timestr, (int64_t) sb.st_size );
	}
}

/* send_error */
static void send_error( const int status, const std::string& title, const std::string& extra_header, const std::string& text ) {
	LOG_FUNCTION("send_error", "status=" << status << ", title='" << title << "', extra_header='" << extra_header << "', text='" << text << "'");
	send_headers( status, title, extra_header, "text/html", -1, -1 );
	printf( "<html><head><title>%d %s</title></head>\n<body bgcolor=\"#cc9999\"><h4>%d %s</h4>\n", status, title.c_str(), status, title.c_str() );
	printf( "%s\n", text.c_str() );
	printf( "<hr>\n<address><a href=\"%s\">%s</a></address>\n</body></html>\n", SERVER_URL, SERVER_NAME );
	fflush( stdout );
	exit( 1 );
}

/* send_headers */
static void send_headers( const int status, const std::string& title, const std::string& extra_header, const std::string& mime_type, const off_t length, const time_t mod ) {
	LOG_FUNCTION("send_headers", "status=" << status << ", title='" << title << "', extra_header='" << extra_header << "'. mime_type='" << mime_type << "', length=" << length << ", mod=" << mod);
	
	printf( "%s %d %s\015\012", PROTOCOL, status, title.c_str() );
	printf( "Server: %s\015\012", SERVER_NAME );
	time_t now = time( (time_t*) 0 );
	char timebuf[100] = {};
	strftime( timebuf, 100, RFC1123FMT, gmtime( &now ) );
	printf( "Date: %s\015\012", timebuf );
	if ( !extra_header.empty() ) printf( "%s\015\012", extra_header.c_str() );
	if ( !mime_type.empty() ) (void) printf( "Content-Type: %s\015\012", mime_type.c_str() );
	if ( length >= 0 ) (void) printf( "Content-Length: %lld\015\012", (int64_t) length );
	if ( mod != (time_t) -1 ) {
		strftime( timebuf, sizeof(timebuf), RFC1123FMT, gmtime( &mod ) );
		printf( "Last-Modified: %s\015\012", timebuf );
	}
    printf( "Connection: close\015\012" );
    printf( "\015\012" );
}

/* get_mime_type */
static std::string get_mime_type( const std::string& name, const std::string& charset ) {
	LOG_FUNCTION("get_mime_type", "name='" << name << "', charset='" << charset << "'");
	const std::string end = name.substr( name.find_last_of(".") );
	if ( end.empty() ) return "text/plain; charset="+charset;
	if ( (end == ".html") || (end == ".htm") ) return "text/html; charset="+charset;
	if ( (end == ".jpg") || (end == ".jpeg") ) return "image/jpeg";
	if ( (end == ".gif") ) return "image/gif";
	if ( (end == ".png") ) return "image/png";
	if ( (end == ".css") ) return "text/css";
	if ( (end == ".au") ) return "audio/basic";
	if ( (end == ".wav") ) return "audio/wav";
	if ( (end == ".avi") ) return "video/x-msvideo";
	if ( (end == ".mov") || (end == ".qt") ) return "video/quicktime";
	if ( (end == ".mpeg") || (end == ".mpe") ) return "video/mpeg";
	if ( (end == ".vrml") || (end == ".wrl") ) return "model/vrml";
	if ( (end == ".midi") || (end == ".mid") ) return "audio/midi";
	if ( (end == ".mp3") ) return "audio/mpeg";
	if ( (end == ".ogg") ) return "application/ogg";
	if ( (end == ".pac") ) return "application/x-ns-proxy-autoconfig";
	return "text/plain; charset=" + charset;
}

/* strdecode */
static std::string strdecode( const std::string& from_str ) {
	LOG_FUNCTION("strdecode", "from_str='" << from_str << "'");
	std::string to;
	const char* from = from_str.c_str();
	for ( ; *from != '\0'; ++from ) {
		if ( from[0] == '%' && isxdigit( from[1] ) && isxdigit( from[2] ) ) {
			to += hexit( from[1] ) * 16 + hexit( from[2] );
			from += 2;
		} else {
			to += *from;
		}
	}
	LOG_DEBUG("returns: to='" << to << "'");
	return to;
}

/* hexit */
static int hexit( const char c ) {
	LOG_FUNCTION("hexit", "c='" << c << "'");
	if ( c >= '0' && c <= '9' ) return c - '0';
	if ( c >= 'a' && c <= 'f' ) return c - 'a' + 10;
	if ( c >= 'A' && c <= 'F' ) return c - 'A' + 10;
	return 0;		/* shouldn't happen, we're guarded by isxdigit() */
}

/* strencode */
static std::string strencode(const std::string& from_str ) {
	LOG_FUNCTION("strencode", "from_str='" << from_str << "'");
	std::string to;
	const char* from = from_str.c_str();
	for (; *from != '\0'; ++from ) {
		if ( isalnum(*from) || strchr( "/_.-~", *from ) != (char*) 0 ) {
			to += *from;
		} else {
			char buffer[4] = {0};
			sprintf( buffer, "%%%02x", (int) *from & 0xff );
			to += buffer;
		}
	}
	LOG_DEBUG("returns: to='" << to << "'");
	return to;
}

/* EOF */
