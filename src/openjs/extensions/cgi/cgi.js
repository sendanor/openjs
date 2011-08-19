/* CGI library for JavaScript
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/* Links and other external documentation.
 * * CGI
 * ** The CGI Specification <http://hoohoo.ncsa.uiuc.edu/cgi/interface.html>
 * * HTTP Cookies
 * ** HTTP State Management Mechanism <http://tools.ietf.org/html/rfc2965>
 * ** HTTP State Management Mechanism (obsolute RFC) <http://tools.ietf.org/html/rfc2109>
 * ** JavaScript Cookies <http://www.w3schools.com/JS/js_cookies.asp>
 */

/* Construct global cgi */
function cgi_builder(env, stdin) {
	var undefined;
	
	/** Parse value into object based on keyword */
	function set_object_keys(obj, full_key, value) {
		function do_state(obj, keys, value) {
			var key = keys.shift();
			if(keys.length !== 0) {
				if(typeof obj[key] !== "object") obj[key] = {};
				return do_state(obj[key], keys, value);
			}
			obj[key] = value;
		}
		
		var keys = full_key.split("\.");
		do_state(obj, keys, value);
	}
	
	/** Parse key-value pairs */
	function parse_values(query_string) {
		try {
			var input = {};
			if(query_string == undefined) return input;
			var query_pairs = query_string.split("&");
			for(var i in query_pairs) if(query_pairs.hasOwnProperty(i)) {
				if(query_pairs[i] == undefined) continue;
				var pair = query_pairs[i].split("=", 2);
				if(pair[0] == undefined) { continue; }
				var key = decodeURIComponent((""+pair[0]).replace(/\+/g, " "));
				
				var value = null;
				if(pair[1] != undefined) {
					value = decodeURIComponent((""+pair[1]).replace(/\+/g, " "));
				}
				
				if(key.match(/\./) == null) {
					input[key] = value;
					continue;
				}
				
				set_object_keys(input, key, value);
			}
			return input;
		} catch (e) {
			if(e instanceof URIError) throw new URIError("malformed query_string: "+query_string);
			throw e;
		}
	}

	/* Actual function code */
	var that = {};
	
	// GET support
	that.get = parse_values(env.QUERY_STRING);
	
	// FIXME: Implement support for PUT
	
	// POST support
	// See <http://www.w3.org/TR/html401/interact/forms.html#h-17.13.4.1>
	if( (env.REQUEST_METHOD === 'POST')
	 && (env.CONTENT_LENGTH !== undefined)
	 && (env.CONTENT_LENGTH != 0)
	 && ((""+env.CONTENT_TYPE).match(/^application\/x-www-form-urlencoded/i))
	  ) {
		that.post = parse_values(stdin.readUntilEOF());
	} else {
		that.post = {};
	}
	
	// Cookie support
	that.cookies = [];
	if(env.HTTP_COOKIE !== undefined) {
		Extension.load("cookie");
		that.cookies = Cookie.parse(env.HTTP_COOKIE);
	}
	
	return that;
}

cgi = cgi_builder(system.env, system.stdin);

/* EOF */
