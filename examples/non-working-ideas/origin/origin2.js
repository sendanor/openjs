#!/usr/bin/js

int i = 10;
sys.stdout.writeln(i.toString());

/*
Object.prototype.getOrigin = function() {
	return this.ORIGIN();
}

Object.prototype.setOrigin = function(origin) {
	this.prototype.ORIGIN = function () { return origin; }
}

function dump(obj) {
	return "name='" + obj + "', type='" + typeof(obj) + "'";
}

function Point(x, y) {
	this.x = x;
	this.y = y;
}

function test(arg) {
	sys.stdout.writeln("-- original list --");
	for(k in arg) if(arg.hasOwnProperty(k)) {
		var obj = arg[k];
		sys.stdout.writeln("original: " + dump(obj));
		sys.stdout.writeln("origin:   " + obj.getOrigin() );
		sys.stdout.writeln("");
	}
	
	sys.stdout.writeln("-- affecting the list --");
	for(k in arg) if(arg.hasOwnProperty(k)) {
		obj.setOrigin("origin:test, k=" + k);
	}
	
	sys.stdout.writeln("-- affected list? --");
	for(k in arg) if(arg.hasOwnProperty(k)) {
		sys.stdout.writeln("affected: " + dump(obj));
		sys.stdout.writeln("origin:   " + obj.getOrigin() );
		sys.stdout.writeln("");
	}
}

test([10, "Hello", new Point(10, 20)]);
*/

/* EOF */
