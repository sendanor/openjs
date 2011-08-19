#!/usr/bin/js
/* JavaScript CGI test
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

var username = "foo";
var password = "bar";
var credentials = username+":"+password;
var encoded_credentials = credentials.encodeBase64();
system.stderr.writeln("system.env.HTTP_AUTHORIZATION == '" + system.env.HTTP_AUTHORIZATION + "'");

if( cgi.get.logout != undefined ) {
	var content = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\"\n"
	            + " \"http://www.w3.org/TR/1999/REC-html401-19991224/loose.dtd\">\n"
	            + "<html>\n"
	            + "  <head>\n"
	            + "    <title>Logged out</title>\n"
	            + "  </head>\n"
	            + "  <body><p>You have logged out now</p>\n</body>\n"
	            + "</html>\n";
	
	system.stdout.write( "HTTP/1.0 401 UNAUTHORIZED\n"
	                + "Server: HTTPd/1.0\n"
	                + "Date: " + Date() + "\n"
	                + "Content-Type: text/html\n"
	                + "Content-Length: " + content.length + "\n\n"
	                + content );
	system.exit(0);
}

if( system.env.HTTP_AUTHORIZATION != "Basic " + encoded_credentials ) {
	var content = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\"\n"
	            + " \"http://www.w3.org/TR/1999/REC-html401-19991224/loose.dtd\">\n"
	            + "<html>\n"
	            + "  <head>\n"
	            + "    <title>Error</title>\n"
	            + "  </head>\n"
	            + "  <body><h1>401 Unauthorised.</h1>\n</body>\n"
	            + "</html>\n";
	
	system.stdout.write( "HTTP/1.0 401 UNAUTHORIZED\n"
	                + "Server: HTTPd/1.0\n"
	                + "Date: " + Date() + "\n"
	                + "WWW-Authenticate: Basic realm=\"Secure Area\"\n"
	                + "Content-Type: text/html\n"
	                + "Content-Length: " + content.length + "\n\n"
	                + content );
	system.exit(0);
}

var content = "<html>\n"
            + "<head>\n"
            + " <title>Testing JS CGI</title>\n"
            + " <link rel=\"stylesheet\" href=\"default.css\" type=\"text/css\" />\n"
            + "</head>\n"
            + "<body>\n"
            + "<p>[ <a href=\"?logout\">logout</a> ]</p>\n"
            + "<h1>Testing HTTP Authentication</h1>\n"
            + "system.env.HTTP_AUTHORIZATION = '" + system.env.HTTP_AUTHORIZATION + "'"
            + "</body>\n<html>\n";

system.stdout.write( "HTTP/1.0 200 OK\n"
                  + "Server: HTTPd/1.0\n"
                  + "Date: " + Date() + "\n"
                  + "Content-Type: text/html\n"
                  + "Content-Length: "+ content.length +"\n\n"
                  + content );
