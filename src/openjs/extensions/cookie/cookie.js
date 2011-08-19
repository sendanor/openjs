/* Cookies for server side JavaScript
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

// Cookie constructor
function Cookie(name, value, a) {
	if(this instanceof arguments.callee) {
		var undefined;
		this.name = name;
		this.value = value;
		
		this.attrs = {};
		if(a !== undefined) {
			if(a.comment != undefined)    this.attrs.comment = a.comment;
			if(a.commentURL != undefined) this.attrs.commentURL = a.commentURL;
			if(a.discard != undefined)    this.attrs.discard = a.discard;
			if(a.domain != undefined)     this.attrs.domain = a.domain;
			if(a.maxAge != undefined)     this.attrs.maxAge = a.maxAge;
			if(a.path != undefined)       this.attrs.path = a.path;
			if(a.port != undefined)       this.attrs.port = a.port;
			if(a.secure != undefined)     this.attrs.secure = a.secure;
		}
		
		this.version = 1;
	} else {
		return new Cookie(name, value, a);
	}
}

/* Get raw cookie header data */
Cookie.prototype.raw = function() {
	var buf = "Set-Cookie: " + this.name + "=" + escape(this.value);
	for(var a in this.attrs) if(this.attrs.hasOwnProperty(a)) {
		if( (a=="commentURL") || (a=="port") ) {
			buf += ";" + a + "=\"" + escape(this.attrs[a]) + "\"";
		} else {
			buf += ";" + a + "=" + escape(this.attrs[a]);
		}
	}
	return buf;
}

/* Get raw cookie header data */
/*
function do_raw_set_cookie2() {
	var buf = "Set-Cookie2: " + this.name + "=" + escape(this.value);
	for(var a in this.attrs) if(this.attrs.hasOwnProperty(a)) {
		if( (a=="commentURL") || (a=="port") ) {
			buf += ";" + a + "=\"" + escape(this.attrs[a]) + "\"";
		} else {
			buf += ";" + a + "=" + escape(this.attrs[a]);
		}
	}
	return buf;
}
*/

/* Parse cookies */
Cookie.parse = function(raw_cookie) {
	var cookies = [];
	if(!raw_cookie) return cookies;
	var items = String(raw_cookie).split(/[;,]/);
	for(var i in items) if(items.hasOwnProperty(i)) {
		var pair = String(items[i]).split("=", 2);
		var name = pair[0].trim();
		var value = pair[1];
		if(name[0] == "$") { continue; }
		//var c = new Cookie(name, value);
		cookies[name] = value;
	}
	return cookies;
}

// Member arrays
/*
if(system.env.HTTP_COOKIE != undefined) {
	document.parseCookies(system.env.HTTP_COOKIE);
}
*/

/* EOF */
