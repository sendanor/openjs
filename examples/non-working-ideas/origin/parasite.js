#!/usr/bin/js

// Parasite works only on objects with changeable properties.

function setParasite(obj, para) {
	obj.getParasite = function() { return para; }
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
	}
	sys.stdout.writeln("");
	
	sys.stdout.writeln("-- affecting the list --");
	for(k in arg) if(arg.hasOwnProperty(k)) {
		var obj = arg[k];
		var para = "parasite:test, k=" + k;
		sys.stdout.writeln(k + ", para='" + para + "'");
		setParasite(obj, para);
	}
	sys.stdout.writeln("");
	
	sys.stdout.writeln("-- affected list? --");
	for(k in arg) if(arg.hasOwnProperty(k)) {
		var obj = arg[k];
		sys.stdout.writeln("affected: " + dump(obj));
		sys.stdout.writeln("parasite: " + obj.getParasite() );
		sys.stdout.writeln("properties:");
		for(p in obj) if(obj.hasOwnProperty(p)) {
			sys.stdout.writeln("* " + typeof(obj[p]) + ": " + obj[p]);
		}
		sys.stdout.writeln("");
	}
}

test([new Point(10, 20), {foo:"bar",bar:"foo"}]);

/* EOF */
