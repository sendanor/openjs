#!/usr/bin/js

function MyNumber() {
	this.origin = 1234;
}

var i = 10;
i.prototype = new MyNumber();
sys.stdout.writeln(i);
sys.stdout.writeln(typeof(i));
sys.stdout.writeln(i.constructor);
sys.stdout.writeln(i.origin);

/* EOF */
