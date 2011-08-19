/* Builder function tests */

function builder(arg) {
	return function(a) {
		return arg+":"+a;
	};
}

test = builder("foo");
var x = test("bar");

/* Output results */
Extension.load("system");
system.stdout.writeln("x = '" + x + "'");

/* EOF */
