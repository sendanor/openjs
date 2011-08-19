/* Object oriented API for JavaScript FastCGI
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/* Object oriented API for FastCGI */
function FastCGI() {
	this.do_shutdown = false;
	this.request_accepted = false;
	this.request_pointer = CFCGI.newRequest();
	if(CFCGI.Init() != 0) { throw Error("Init failed."); }
	if(CFCGI.InitRequest(this.request_pointer, 0, 0) != 0) { throw Error("Init failed."); }
}

/** Check if this process appears to be a normal CGI process */
FastCGI.IsCGI = function() {
	return CFCGI.IsCGI() == 1;
}

/** FastCGI call runner with support to fallback if there is no support for FastCGI */
FastCGI.runner = function(call) {
	
	// Run this script as a CGI if there is no FastCGI support
	if(FastCGI.IsCGI()) {
		call({"stdin":system.stdin,
		      "stdout":system.stdout,
		      "stderr":system.stderr,
		      "env":system.env,
		      "cgi":system.cgi});
		return;
	}
	
	// Run with the FastCGI support
	var request_id = 0;
	var request = new FastCGI();
	while((!request.do_shutdown) && request.accept()) {
		request_id++;
		try {
			call({"stdin":request.stdin,
			      "stdout":request.stdout,
			      "stderr":request.stderr,
			      "env":request.env,
			      "cgi":request.cgi,
			      "fastcgi":request});
		} catch (e) {
			system.stderr.writeln("fastcgi.js: exception: " + e);
		}
		request.finish();
	}
	request.close();
}

/** Close our request properties defined when request was accepted */
FastCGI.prototype.closeAcceptedRequest = function() {
	delete this.stderr;
	delete this.stdout;
	delete this.cgi;
	delete this.env;
	
	delete this.stdin;
	
	CFCGI.deleteStream(this.stderr_pointer);
	delete this.stderr_pointer;
	
	CFCGI.deleteStream(this.stdout_pointer);
	delete this.stdout_pointer;

	CFCGI.deleteStream(this.stdin_pointer);
	delete this.stdin_pointer;
	
	this.request_accepted = false;
}

/** Accept request */
FastCGI.prototype.accept = function() {
	if(this.request_accepted) { this.closeAcceptedRequest(); }
	if(CFCGI.Accept_r(this.request_pointer) == 0) {
		this.request_accepted = true;
		this.stdin_pointer = CFCGI.newIStream(CFCGI.getRequestIn(this.request_pointer));
		this.stdout_pointer = CFCGI.newOStream(CFCGI.getRequestOut(this.request_pointer));
		this.stderr_pointer = CFCGI.newOStream(CFCGI.getRequestErr(this.request_pointer));
		
		this.stdin = new Stream("stdstream", {mode:"r", pointer:this.stdin_pointer});
		this.env = CFCGI.getRequestENV(this.request_pointer);
		this.cgi = cgi_builder(this.env, this.stdin);
		
		this.stdout = new Stream("stdstream", {mode:"w", pointer:this.stdout_pointer});
		this.stderr = new Stream("stdstream", {mode:"w", pointer:this.stderr_pointer});
		
		return true;
	}
	return false;
}

/** Finish request */
FastCGI.prototype.finish = function() {
	if(this.request_accepted) { this.closeAcceptedRequest(); }
	CFCGI.Finish_r(this.request_pointer);
}

/** Close FastCGI API */
FastCGI.prototype.close = function() {
	if(this.request_accepted) { this.closeAcceptedRequest(); }
	CFCGI.deleteRequest(this.request_pointer);
}

/** Shutdown fastcgi process after this request */
FastCGI.prototype.shutdown = function() {
	this.do_shutdown = true;
}

/* EOF */
