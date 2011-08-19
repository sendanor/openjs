#!/usr/bin/js
/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

Filesystem.loadJS("gdome.js");
Filesystem.loadJS("dom.js");

/** Test main */		
function main(args) {
	
	if(2>=args.length) {
		system.stderr.writeln("No arguments.");
		return 1;
	}
	
	var file = args[1];
	var id = args[2];
	
	system.stdout.writeln("file: "+file);
	system.stdout.writeln("id:   "+id);
	
	try {

		/* Opening document */
		system.stdout.writeln("Opening doc");
		var doc = Document.open(file);
		
		/* Searching element for content */
		system.stdout.writeln("getElementById");
		var root = doc.getElementById(id);
		if (!root) {
			system.stderr.writeln("No element found.");
			return 1;
		}
		
		/* Changing element content */
		root.innerHTML = "New content";
		
		/* Writing document to stdout */
		system.stdout.writeln("Saving");
		doc.close();
		
		return 0;
	} catch(e) {
		system.stderr.writeln("Error: " + e);
		return 1;
	}
}

	
system.exit(main(system.args));
	
/* EOF */
