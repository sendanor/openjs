/* SSL server example */

Extension.load("timer");
Extension.load("./network.js");
Extension.load("system");
Extension.load("thread");
Extension.load("array");
Extension.load("object");

/* HTTP Reply */
function HTTPError(number, reason) {
	if(this instanceof arguments.callee) {
		this.number = parseInt(number, 10);
		this.reason = ""+reason;
	} else {
		return new HTTPError(number, reason);
	}
}

HTTPError.prototype.toString = function() {
	return this.number + " " + this.reason;
}

HTTPError.prototype.toMessage = function() {
	return "HTTP/1.0 " + this + "\r\n\r\n";
}

/* HTTP Message */
function HTTPMessage(args) {
	if(this instanceof arguments.callee) {
		var args = args || {};
		this.number = args.number ? parseInt(args.number, 10) : 200;
		this.body = args.body;
		this.headers = args.headers || {};
		if(args.content_type) this.headers.content_type = args.content_type;
		
		if(!this.headers.date) this.headers.date = Date();
		if(!this.headers.server) this.headers.server = 'OpenJS/0.0.2010';
		if(!this.headers.connection) this.headers.connection = 'close';
		if(!this.headers.content_type) this.headers.content_type = 'text/plain; charset=UTF-8';
		
	} else {
		return new HTTPMessage(args);
	}
}

HTTPMessage.prototype.getHeaders = function() {
	var data = "";
	this.headers.foreach(function(k,v) {
		var key = (""+k).replace(/_/, "-").trim();
		data += key + ": " + (""+v).replace(/[\n\r]/, " ").trim() + "\r\n";
	});
	return data;
}

HTTPMessage.prototype.toMessage = function() {
	//this.headers.transfer_encoding = 'chunked';
	var body;
	if(this.body) body=""+this.body;
	this.headers.content_length = body.length;
	return "HTTP/1.0 200 OK\r\n" + this.getHeaders() + "\r\n" + body;
}

/* HTTP Request parser */
function HTTPRequest() {
}

HTTPRequest.parse = function(s) {
	var line = HTTPRequest.parseRequestLine(s);
	var headers = HTTPRequest.parseHeaders(s);
	var body = HTTPRequest.parseBody(s, parseInt(headers["content_length"], 10));
	if(line.method != "post") throw HTTPError(501, "Not Implemented");
	return {method:line.method, uri:line.request_uri, version:line.http_version, headers:headers, body:body};
}

/* Read request line */
HTTPRequest.parseRequestLine = function(s) {
	var request_line = s.readUntil("\n").replace(/^ +/, "").replace(/[\r\n ]+$/, "");
	if(request_line.length == 0) return;
	var parts = request_line.split(/ +/);
	var method = parts[0].toLowerCase();
	var request_uri = parts[1];
	var http_version = parts[2];
	return {method:method, request_uri:request_uri, http_version:http_version};
}
	
/* Read headers */
HTTPRequest.parseHeaders = function(s) {
	var has_headers = true;
	var headers = {};
	while(has_headers) new function() {
		var buffer = s.readUntil("\n").replace(/^ +/, "").replace(/[\r\n ]+$/, "");
		if(buffer.length == 0) {
			has_headers = false;
			return;
		}
		//system.stderr.writeln("Worker: Header line='"+buffer+"'...");
		var tmp = buffer.split(/:/);
		var key = tmp.shift().replace(/-/g, "_").toLowerCase();
		var value = tmp.join(":");
		if(headers[key]) {
			headers[key] += ","+value;
		} else {
			headers[key] = value;
		}
	}
	return headers;
}

/* Read body */
HTTPRequest.parseBody = function(s, content_length) {
	//system.stderr.writeln("DEBUG: Reading body, length=" + content_length);
	return s.read(content_length);
}

/* HTTP Server */
var io, endpoint, acceptor, context;
var threads = [];
var stream_pool = [];
try {
	if(!system.args[1]) throw Error("Usage: simpleserver <port>");
	var pem_file = "server.pem";
	var dh_file = "dh512.pem";
	
	io = new NetworkIOService();
	endpoint = new NetworkTCPEndpoint(system.args[1]);
	acceptor = new NetworkTCPAcceptor(io, endpoint);
	
	context = new NetworkSSLContext(io);
	context.setOptions( /* TODO: default_workarounds | no_sslv2 | single_dh_use */ );
	context.useCertificateChainFile(pem_file);
	context.usePrivateKeyFile(pem_file);
	context.useTmpDhFile(dh_file);

	/* Thread to work with the session */
	function worker() {
		system.stderr.writeln("Worker: Starting...");
		var that = this;
		for(;;) new function() {
			var s;
			try {
				s = stream_pool.shift();
				if(!(s instanceof NetworkSSLTCPStream)) {
					that.sleep(10);
					return;
				}
				var timer = new Timer();
				system.stderr.writeln("Worker: we got a stream to work with!");
				
				// Handshake
				//system.stderr.writeln("Worker: Handshaking!");
				s.handshake();
				
				// Request loop
				try {
					var request = HTTPRequest.parse(s);
					if(!request) return;
					//system.stdout.writeln("request.method = '" + request.method + "'")
					//system.stdout.writeln("request.uri = '" + request.uri + "'")
					//system.stdout.writeln("request.version = '" + request.version + "'")
					//system.stdout.writeln("request.headers =\n");
					//request.headers.foreach(function(k, v) {
					//	system.stdout.writeln(" request.headers." + k + " = '" + v + "'");
					//});
					//system.stdout.writeln("request.body = '"+request.body+"'\n");
					
					var reply = new HTTPMessage({content_type:'application/xml; charset=UTF-8',body:'<?xml version="1.0" encoding="UTF-8"?><ccd type="reply"><record type="string" name="command" value="dummy" /><record type="object" name="options"></record></ccd>'});
					s.write(reply.toMessage());
					s.close();
					
					timer.stop();
					system.stderr.writeln("[worker] request time was " + timer.elapsed() + " ms");
					
				} catch(e) {
					if(e instanceof HTTPError) {
						s.write(e.toMessage());
						s.close();
					} else {
						throw e;
					}
				}
				
			} catch(e) {
				system.stderr.writeln("Worker: Error: " + e);
				if(e.stack) system.stderr.writeln("stack: " + e.stack);
			} finally {
				if(s) s.close();
			}
		}(); // end of for
	}
	
	/* Worker threads */
	system.stderr.writeln("Starting workers...");
	threads.push(new Thread(worker));
	//threads.push(new Thread(worker));
	//threads.push(new Thread(worker));
	
	/* Accept new connections and push them to the workers */
	for (;;) new function() {
		var s;
		try {
			s = new NetworkSSLTCPStream(io, context);
			acceptor.accept(s);
			system.stderr.writeln("New session detected, giving it to workers.");
			if(s) stream_pool.push(s);
			else system.stderr.writeln("New session detected, but was not valid.");
		} catch(e) {
			system.stderr.writeln("Error: " + e);
			if(e.stack) system.stderr.writeln("stack: " + e.stack);
			if(s) s.close();
		}
	}();
		
} catch (e) {
	system.stderr.writeln("Error: " + e);
	if(e.stack) system.stderr.writeln("stack: " + e.stack);
} finally {
	threads.foreach(function(t) {
		if(t) t.close();
	});
	
	stream_pool.foreach(function(s) {
		if(s) s.close();
	});
	
	if(context) context.close();
	if(acceptor) acceptor.close();
	if(endpoint) endpoint.close();
	if(io) io.close();
}

/* EOF */
