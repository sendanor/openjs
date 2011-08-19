#!/usr/bin/js
Extension.load("system");
Extension.load("filesystem");

function main(system) {
	var dir = system.args[1];
	
	if(!dir) {
		system.stderr.writeln("usage: list.js DIR");
		return 1;
	}
	
	system.stdout.writeln("listing " + dir +":");
	var files = Filesystem.list(dir);
	for(var i in files) if(files.hasOwnProperty(i)) {
		var filename = files[i];
		var file = dir + "/" + files[i];
		if(Filesystem.isDirectory(file)) {
			system.stdout.writeln(" * " + filename + " (dir)" );
		} else if(Filesystem.isRegularFile(file)) {
			system.stdout.writeln(" * " + filename 
			                    + " (size:" + Filesystem.size(file) + " b"
			                    + ", modified:" + Filesystem.lastWriteTime(file) + ")" );
		} else if(Filesystem.isSymlink(file)) {
			system.stdout.writeln(" * " + filename + " (symlink)" );
		} else if(Filesystem.isOther(file)) {
			system.stdout.writeln(" * " + filename + " (other)" );
		} else {
			system.stdout.writeln(" * " + filename + " (unknown)" );
		}
	}
}

system.exit(main(system));

/* EOF */
