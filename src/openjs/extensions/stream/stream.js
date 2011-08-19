/* Stream library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Add writeln to stream */
function do_stream_writeln (msg) {
	this.write(msg + "\n");
}

/* Read all stream contents as a text */
function do_stream_toString () {
	return this.readUntilEOF();
}

/* Container for stream factory function callbacks */
StreamFactory = {factories:{}};

/* Set new factory */
StreamFactory.add = function(type, f) {
	this.factories[type] = f;
}

/* Set new factory */
StreamFactory.get = function(type) {
	if(!this.factories.hasOwnProperty(type)) { throw Error("No factory for type "+ type); }
	return this.factories[type];
}

/** Stream constructor
 * \FIXME: BasicStream should be renamed to BasicStreamBuilder and there should 
 *         be BasicStream object which has writeln and readall methods.
 */
function Stream (type, args) {
	if(this instanceof arguments.callee) {
		var args = args || {};
		this.type = type;
		this.mode = args.mode || "";
		
		// Call stream factory
		StreamFactory.get(type)(this, args);
		
		if(this.mode.indexOf("r") >= 0) {
			this.read = BasicStream.read;
			this.readUntilEOF = BasicStream.readUntilEOF;
			this.getLine = BasicStream.getLine;
			this.toString = do_stream_toString;
			this.sync = BasicStream.sync;
		}
		
		if(this.mode.indexOf("w") >= 0) {
			this.write = BasicStream.write;
			this.writeln = do_stream_writeln;
			this.flush = BasicStream.flush;
		}
	} else {
		return new Stream(type, args);
	}
}

/* Set Stream factory for standard stream pointers */
StreamFactory.add("stdstream", function(stream, args) { stream.internal = {"pointer":args.pointer}; });

/* String streams */
StreamFactory.add("stringstream", function(s, args) {
	BasicStream.StringStreamBuilder(s, args);
	s.toString = function() { return s.str(); }
});

/* EOF */
