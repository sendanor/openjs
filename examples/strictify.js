/* Strict typed functions for JavaScript
 * Copyright 2010 Jaakko Heusala <jheusala@iki.fi>
 * $Id: strictify.js 164 2010-08-01 14:06:17Z jheusala $
 */

/*
$ js function-builder-3.js
== Creation ==
x = 'foo:bar:0:Sun Aug 01 2010 17:03:00 GMT+0300 (EEST)'
== Test 1 ==
x = 'foo:BAR:0:Sun Aug 01 2010 17:03:00 GMT+0300 (EEST)'
== Test 2 ==
exception: Error: Argument #0 is not type of string!
== Test 3 ==
exception: Error: Too few arguments
== Test 4 ==
exception: Error: Argument #0 is not type of string!
== Test 5 ==
exception: Error: Too many arguments
== Test 6 ==
x = 'foo:BAR:10:Sun Aug 01 2010 17:03:00 GMT+0300 (EEST)'
== Test 7 ==
exception: Error: Argument #0 is not type of number!
== Test 8 ==
x = 'foo:BAR:10:Sun Aug 01 2010 17:01:57 GMT+0300 (EEST)'
== Test 9 ==
exception: Error: Argument #0 is not type of Date!
*/

/* Strict function builder */
function strictify(my, method) {
	return function() {
		if(my.args) {
			if(arguments.length < my.args.length) throw Error("Too few arguments");
			for(var i=0; i<arguments.length; i++) {
				if(!my.args[i]) throw Error("Too many arguments");
				var type = my.args[i];
				if(type === 'string') {
					if(typeof arguments[i] !== 'string') throw Error("Argument #" + i + " is not type of string!");
				} else if(type === 'number') {
					if(typeof arguments[i] !== 'number') throw Error("Argument #" + i + " is not type of number!");
				} else if(type === 'object') {
					if(typeof arguments[i] !== 'object') throw Error("Argument #" + i + " is not type of object!");
				} else if(type === 'array') {
					if(typeof arguments[i] !== 'array') throw Error("Argument #" + i + " is not type of array!");
				} else if(type === 'undefined') {
					if(typeof arguments[i] !== 'undefined') throw Error("Argument #" + i + " is not type of undefined!");
				} else if(type === 'boolean') {
					if(typeof arguments[i] !== 'boolean') throw Error("Argument #" + i + " is not type of boolean!");
				} else if(type === 'function') {
					if(typeof arguments[i] !== 'function') throw Error("Argument #" + i + " is not type of function!");
				} else if(type === 'Date') {
					if(! ((typeof arguments[i] === 'object') && (arguments[i] instanceof Date) )) throw Error("Argument #" + i + " is not type of Date!");
				} else {
					throw Error("Unknown type for argument #"+i);
				}
			}
		}
		return method.apply(this, arguments);
	};
}

/* Class constructor */
Test = strictify({args:["string"]}, function(arg2) {
	this.arg1 = "foo";
	this.arg2 = arg2;
	this.number = 0;
	this.date = new Date();
});

/* toString method */
Test.prototype.toString = strictify({}, function() {
	return this.arg1 + ":" + this.arg2 + ":" + this.number + ":" + this.date;
});

/* String method */
Test.prototype.setArg = strictify({args:["string"]}, function(arg2) {
	this.arg2 = arg2;
});

/* Number method */
Test.prototype.setNumber = strictify({args:["number"]}, function(n) {
	this.number = n;
});

/* Date method */
Test.prototype.setDate = strictify({args:["Date"]}, function(d) {
	this.date = d;
});

/* Test it */
Extension.load("system");
system.stdout.writeln("== Creation ==");
var x = new Test("bar");
system.stdout.writeln("x = '" + x + "'");

/* This will work, argument is string */
try {
	system.stdout.writeln("== Test 1 ==");
	x.setArg("BAR");
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will not work, argument is number */
try {
	system.stdout.writeln("== Test 2 ==");
	x.setArg(1234);
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will not work, argument is undefined */
try {
	system.stdout.writeln("== Test 3 ==");
	x.setArg();
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will not work, argument is object */
try {
	system.stdout.writeln("== Test 4 ==");
	x.setArg({"foo":"bar"});
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will not work, too many arguments */
try {
	system.stdout.writeln("== Test 5 ==");
	x.setArg("foo", "bar");
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will work */
try {
	system.stdout.writeln("== Test 6 ==");
	x.setNumber(10);
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will not work, argument is not number */
try {
	system.stdout.writeln("== Test 7 ==");
	x.setNumber("test");
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will work */
try {
	system.stdout.writeln("== Test 8 ==");
	x.setDate(new Date("Sun, 01 Aug 2010 17:01:57 +0300"));
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* This will not work, argument is not Date */
try {
	system.stdout.writeln("== Test 9 ==");
	x.setDate({"foo":"bar"});
	system.stdout.writeln("x = '" + x + "'");
} catch(e) {
	system.stderr.writeln("exception: " + e);
}

/* EOF */
