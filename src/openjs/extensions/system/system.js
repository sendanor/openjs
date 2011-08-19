/* System for JS
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/* Setup stream factories */
StreamFactory.add("stdout", function(stream, args) { BasicSys.initStdoutStream(stream, args); stream.mode = "w"; });
StreamFactory.add("stdin", function(stream, args) { BasicSys.initStdinStream(stream, args); stream.mode = "r"; });
StreamFactory.add("stderr", function(stream, args) { BasicSys.initStderrStream(stream, args); stream.mode = "w"; });

/* create sys */
system = {};

/* standard streams */
system.stdout = new Stream("stdout");
system.stdin = new Stream("stdin");
system.stderr = new Stream("stderr");

/** Exit from system with status code */
system.args = BasicSys.args;

/** Exit from system with status code */
system.env = BasicSys.env;

/** Exit from system with status code */
system.exit = BasicSys.exit;

/** Execute program */
system.exec = function() {
	var args = [];
	for(var i=0; i<arguments.length; i++) { args.push(arguments[i]); }
	return BasicSys.exec(system.stdout, system.stderr, args.shift(), args);
}

/** Execute program */
system.getexec = function() {
	var args = [];
	for(var i=0; i<arguments.length; i++) { args.push(arguments[i]); }
	return BasicSys.getexec(system.stderr, args.shift(), args);
}

/** Execute program with streams */
system.exec3 = function() {
	var args = [];
	for(var i=0; i<arguments.length; i++) { args.push(arguments[i]); }
	return BasicSys.exec3(args.shift(), args.shift(), args.shift(), args.shift(), args);
}

/* EOF */
