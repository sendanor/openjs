/* Builder function tests */

/* Class constructor builder */
function builder(arg) {
	var f = function(a) {
		this.arg1 = arg;
		this.arg2 = a;
	};
	f.prototype.toString = function() {
		return this.arg1 + ":" + this.arg2;
	}
	return f;
}

/* Test the class */
Test = builder("foo");

var x = new Test("bar");

/* Output results */
Extension.load("system");
system.stdout.writeln("x = '" + x + "'");

/* EOF */
