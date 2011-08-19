#!/usr/bin/js
Extension.load("system");

system.stdout.writeln("writeln test");
system.exec("echo", "shell argument test");

system.stdout.writeln("system.args.length = " + system.args.length);
for(var i in system.args) {
	system.stdout.writeln("  system.args[" + i + "] = '" + system.args[i] + "'");
}

system.stdout.writeln("PATH = " + system.env.PATH);

system.stdout.writeln("system.env.length = " + system.env.length);
for(var i in system.env) {
	system.stdout.writeln("  system.env[" + i + "] = '" + system.env[i] + "'");
}
