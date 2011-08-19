/* ccurl get test 1 */
Extension.load("ccurl");
Extension.load("system");

(function(global) {
	
	var ccurl = global.ccurl;
	var stderr = global.system.stderr;
	
	/* */
	var __curl_references = 0;
	
	/* */
	function __init_curl() {
		stderr.writeln("--__init_curl--");
		if(__curl_references === 0) __assert_ok( ccurl.__curl_global_init(ccurl.CURL_GLOBAL_ALL) );
		__curl_references++;
	}
	
	/* */
	function __uninit_curl() {
		stderr.writeln("--__uninit_curl--");
		__curl_references--;
		if(__curl_references === 0) ccurl.__curl_global_cleanup();
	}
	
	/** Assert CURLE_OK otherwise throws an Error */
	function __assert_ok(i) {
		if(i !== ccurl.CURLE_OK) throw Error("curl error: " + ccurl.__curl_easy_strerror(i) + " (#" + i + ")");
	}
	
	/* Constructor */
	global.curlEasy = function(args) {
		if(this instanceof arguments.callee) {
			stderr.writeln("--new curlEasy()--");
			__init_curl();
			try {
				this.__curl = ccurl.__curl_easy_init();
			} catch(e) {
				stderr.writeln("--constructor.catch--");
				__uninit_curl();
				throw e;
			}
		} else {
			stderr.writeln("--curlEasy()--");
			return new global.curlEasy(args);
		}
	}
	
	/** Cleanup internal data
	 * @note WARNING! You *must* call this callback yourself. There is no support for garbage collection for custom objects.
	 */
	global.curlEasy.prototype.cleanup = function() {
		stderr.writeln("--curlEasy.prototype.cleanup()--");
		try {
			try {
				this.reset();
			} finally {
				stderr.writeln("--cleanup.finally 1--");
				if(this.__curl) ccurl.__curl_easy_cleanup(this.__curl);
			}
		} finally {
			stderr.writeln("--cleanup.finally 2--");
			__uninit_curl();
		}
	}
	
	/** Reset internal data
	 */
	global.curlEasy.prototype.reset = function() {
		stderr.writeln("--curlEasy.prototype.reset()--");
		if(this.__headers) {
			ccurl.__curl_slist_free_all(this.__headers);
			delete this.__headers;
		}
	}
	
	/* Append one header */
	global.curlEasy.prototype.appendHeader = function(value) {
		stderr.writeln("--curlEasy.prototype.appendHeader('"+value+"')--");
		if(!this.__headers) this.__headers = ccurl.__curl_slist_constructor();
		this.__headers = ccurl.__curl_slist_append(this.__headers, ""+value);
	}
	
	/* Set headers as vector */
	global.curlEasy.prototype.headers = function(values) {
		stderr.writeln("--curlEasy.prototype.headers()--");
		if(values && (typeof values === "object") && (values instanceof Array)) { 
			for(var i in values) if(values.hasOwnProperty(i)) {
				this.appendHeader(values[i]);
			}
		} else if(values && (typeof values === "object")) { 
			for(var i in values) if(values.hasOwnProperty(i)) {
				this.appendHeader( i + ": " + values[i]);
			}
		} else if(values && (typeof values === "string")) { 
			this.headers(values.split("\n"));
		} else {
			throw TypeError("unsupported argument type: '" + values + "' (typeof " + (typeof values) + ")" );
		}
	}
	
	/* Set verbose */
	global.curlEasy.prototype.verbose = function(i) {
		stderr.writeln("--curlEasy.prototype.verbose()--");
		__assert_ok(ccurl.__curl_easy_setopt_CURLOPT_VERBOSE(this.__curl, parseInt(i, 10)));
	}
	
	/* Set URL */
	global.curlEasy.prototype.url = function(value) {
		stderr.writeln("--curlEasy.prototype.url()--");
		__assert_ok(ccurl.__curl_easy_setopt_CURLOPT_URL(this.__curl, ""+value));
	}
	
	/* Set useragent */
	global.curlEasy.prototype.useragent = function(value) {
		stderr.writeln("--curlEasy.prototype.useragent()--");
		__assert_ok(ccurl.__curl_easy_setopt_CURLOPT_USERAGENT(this.__curl, ""+value));
	}
	
	/** Make a POST request
	 * @params args.input Input data to be sent to the server
	 * @params args.verbose Set verbose, optional
	 * @params args.url Set URL, optional
	 * @params args.useragent Set useragent, optional
	 * @params args.headers Set headers
	 * @returns Received data as string
	 */
	global.curlEasy.prototype.post = function(args) {
		stderr.writeln("--curlEasy.prototype.post()--");
		var undefined;
		var post_data;
		var args = args || {};
		
		try {
			if(!args.input) throw Error("no args.input set");
			
			if(args.input) post_data = ""+args.input;
			if(args.verbose) this.verbose(args.verbose);
			if(args.url) this.url(args.url);
			if(args.useragent) this.useragent(args.useragent);
			if(args.headers) this.headers(args.headers);
			
			if(this.__headers) __assert_ok(ccurl.__curl_easy_setopt_CURLOPT_HTTPHEADER(this.__curl, this.__headers));
			
			stderr.writeln("--perform--");
			var data = [];
			res = ccurl.__curl_easy_perform_post_write(this.__curl, data, post_data);
			__assert_ok(res);
			return data.shift();
		} finally {
			stderr.writeln("--post.finally--");
			this.reset();
		}
	}
	
	/** Make a GET request
	 * @params args.verbose Set verbose, optional
	 * @params args.url Set URL, optional
	 * @params args.useragent Set useragent, optional
	 * @params args.headers Set headers
	 * @returns Received data as string
	 */
	global.curlEasy.prototype.get = function(args) {
		stderr.writeln("--curlEasy.prototype.get()--");
		var undefined;
		var args = args || {};
		try {
			if(args.verbose) this.verbose(args.verbose);
			if(args.url) this.url(args.url);
			if(args.useragent) this.useragent(args.useragent);
			if(args.headers) this.headers(args.headers);
			
			if(this.__headers) __assert_ok(ccurl.__curl_easy_setopt_CURLOPT_HTTPHEADER(this.__curl, this.__headers));
			
			stderr.writeln("--perform--");
			var data = [];
			var res = ccurl.__curl_easy_perform_write(this.__curl, data);
			__assert_ok(res);
			return data.shift();
		} finally {
			stderr.writeln("--get.finally--");
			this.reset();
		}
	}
	
/* EOF */
})(this);
