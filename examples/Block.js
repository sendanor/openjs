/* $Id: $ */

Extension.load("block");
Extension.load("array");
Extension.load("system");

var ret = Block(function(exit) {
	system.args.foreach(function(item) {
		system.stdout.writeln("item: " + item);
		if(item === 'exit') exit(1);
		if(item === 'exit2') exit(2);
	});
});
system.stdout.writeln("return value was " + ret);

/* EOF */
