#!/usr/bin/js
function include() {
	var code = "/* Test command */\nfunction foo() {\nsystem.stdout.writeln(\"I am a foo\");\n}\n";
	eval(code);
	//var fun = new Function(code);
	//fun();
	
	/*
	for (var f in this) if (this.hasOwnProperty(f) && typeof this[f] === 'function') {
		system.stdout.writeln("f = '" + f + "'");
	}
	*/
	
	for(var i in this.include) {
		system.stdout.writeln("i = '" + i + "'");
		//system.stdout.writeln("this[i] = '" + this[i] + "'");
	}

	/*
	foo();
	*/
}
include();
foo();
