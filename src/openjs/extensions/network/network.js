/* JavaScript Network Library
 * Copyright 2010 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/*
 * PLEASE NOTE! THIS LIBRARY IS IN A VERY EXPERIMENTAL STATE.
 */

/* */
function NetworkIOService() {
	if(this instanceof arguments.callee) {
		Extension.load("asio");
		this.pointer = asio.io_service_constructor();
		if(!this.pointer) throw Error("!this.pointer");
	} else {
		return new NetworkIOService();
	}
}

/* */
NetworkIOService.prototype.close = function() {
	if(this.pointer) {
		asio.io_service_destructor(this.pointer);
		delete this.pointer;
	}
}


/* */
function NetworkStreamBuf() {
	if(this instanceof arguments.callee) {
		Extension.load("asio");
		this.pointer = asio.streambuf_constructor();
		if(!this.pointer) throw Error("!this.pointer");
	} else {
		return new NetworkStreamBuf();
	}
}

/* */
NetworkStreamBuf.prototype.close = function() {
	if(this.pointer) {
		asio.streambuf_destructor(this.pointer);
		delete this.pointer;
	}
}


/* */
function NetworkTCPEndpoint(port) {
	if(this instanceof arguments.callee) {
		var port = parseInt(port, 10);
		this.pointer = asio.tcp_endpoint_constructor(port);
		if(!this.pointer) throw Error("!this.pointer");
	} else {
		return new NetworkTCPEndpoint(port);
	}
}

NetworkTCPEndpoint.prototype.close = function() {
	if(this.pointer) {
		asio.tcp_endpoint_destructor(this.pointer);
		delete this.pointer;
	}
}

/* */
function NetworkTCPAcceptor(io, endpoint) {
	if(this instanceof arguments.callee) {
		if(! (io instanceof NetworkIOService) ) throw Error("io is not NetworkIOService");
		if(! (endpoint instanceof NetworkTCPEndpoint) ) throw Error("endpoint is not NetworkTCPEndpoint");
		this.pointer = asio.tcp_acceptor_constructor(io.pointer, endpoint.pointer);
		if(!this.pointer) throw Error("!this.pointer");
	} else {
		return new NetworkTCPAcceptor(io, endpoint);
	}
}

/* */
NetworkTCPAcceptor.prototype.close = function() {
	if(this.pointer) {
		asio.tcp_acceptor_destructor(this.pointer);
		delete this.pointer;
	}
}

/* */
NetworkTCPAcceptor.prototype.accept = function(s) {
	if(! (s instanceof NetworkSSLTCPStream) ) throw Error("s is not NetworkSSLTCPStream");
	asio.tcp_acceptor_accept(this.pointer, s.pointer);
}

/* */
function NetworkSSLContext(io) {
	if(this instanceof arguments.callee) {
		if(! (io instanceof NetworkIOService) ) throw Error("io is not NetworkIOService");
		this.pointer = asio.ssl_context_constructor(io.pointer);
		if(!this.pointer) throw Error("!this.pointer");
	} else {
		return new NetworkSSLContext(io);
	}
}

/* */
NetworkSSLContext.prototype.close = function() {
	if(this.pointer) {
		asio.ssl_context_destructor(this.pointer);
		delete this.pointer;
	}
}

/* */
NetworkSSLContext.prototype.setOptions = function() {
	asio.ssl_context_setOptions(this.pointer);
}

/* */
NetworkSSLContext.prototype.useCertificateChainFile = function(file) {
	asio.ssl_context_useCertificateChainFile(this.pointer, file);
}

/* */
NetworkSSLContext.prototype.usePrivateKeyFile = function(file) {
	asio.ssl_context_usePrivateKeyFile(this.pointer, file);
}

/* */
NetworkSSLContext.prototype.useTmpDhFile = function(file) {
	asio.ssl_context_useTmpDhFile(this.pointer, file);
}

/* */
function NetworkSSLTCPStream(io, context) {
	if(this instanceof arguments.callee) {
		if(! (io instanceof NetworkIOService) ) throw Error("io is not NetworkIOService");
		if(! (context instanceof NetworkSSLContext) ) throw Error("context is not NetworkSSLContext");
		this.pointer = asio.ssl_tcp_stream_constructor(io.pointer, context.pointer);
		if(!this.pointer) throw Error("!this.pointer");
	} else {
		return new NetworkSSLTCPStream(io, context);
	}
}

/* */
NetworkSSLTCPStream.prototype.close = function() {
	if(this.streambuf) {
		this.streambuf.close();
		delete this.streambuf;
	}
	if(this.pointer) {
		asio.ssl_tcp_stream_destructor(this.pointer);
		delete this.pointer;
	}
}

/* */
NetworkSSLTCPStream.prototype.handshake = function() {
	asio.ssl_tcp_stream_handshake(this.pointer);
}

/* */
NetworkSSLTCPStream.prototype.read = function(max_bytes) {
	if(!this.streambuf) this.streambuf = new NetworkStreamBuf();
	return asio.ssl_tcp_stream_read(this.pointer, this.streambuf.pointer, max_bytes);
}

/* */
NetworkSSLTCPStream.prototype.readUntil = function(str) {
	if(!this.streambuf) this.streambuf = new NetworkStreamBuf();
	return asio.ssl_tcp_stream_read_until(this.pointer, this.streambuf.pointer, str);
}

/* */
NetworkSSLTCPStream.prototype.write = function(data) {
	asio.ssl_tcp_stream_write(this.pointer, data);
}

/* EOF */
