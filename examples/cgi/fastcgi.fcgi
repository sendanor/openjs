#!/usr/bin/js
/* FastCGI test
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/* Test FastCGI */
var request = new FastCGIRequest();
while(request.accept()) {
	document.write( "<html>\n"
	              + "<head>\n"
	                + " <title>Testing JS CGI</title>\n"
	                + " <link rel=\"stylesheet\" href=\"default.css\" type=\"text/css\" />\n"
	                + "</head>\n"
	                + "<body>\n");
	document.write("<h1>Testing JS CGI</h1>\n");
	document.write("<p>Some text for a test.</p>\n");
	document.write("</body>\n<html>\n");
	document.close();
	request.finish();
}
request.close();

/* EOF */
