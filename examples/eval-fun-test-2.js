#!/usr/bin/js
function include() {
	var code = "/* Test command */\nthis.foo = function() {\nsystem.stdout.writeln(\"I am a foo\");\n}\n";
	eval(code);
}
include();
foo();
