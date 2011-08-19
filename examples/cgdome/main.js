#!/usr/bin/js
/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

Filesystem.loadJS("gdome.js");

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

		/*  */
		system.stdout.writeln("Creating di");
		var di = CGDOME.createDOMImplementation();
		
		/* I load a new document from the file name "exampleb.xml */
		system.stdout.writeln("Creating doc");
		var doc = di.createDocFromURI(file, CGDOME.GDOME_LOAD_COMPLETE_ATTRS);
		
		/* I get reference to the root element by id */
		system.stdout.writeln("getElementById");
		var root = doc.getElementById(id);
		if (root == 0) {
			system.stderr.writeln("No element found.");
			return 1;
		}
		
		/* Create new text node */
		system.stdout.writeln("Creating new text node");
		system.stdout.writeln("1/2");
		var el = doc.createTextNode("Input");
		system.stdout.writeln("2/2");
		root.appendChild(el);
		
		/* Free? */
		system.stdout.writeln("Freeing");
		el.unref();
		root.unref();
		
		/* I save the modified document to a file named "exampleb_out.xml */
		system.stdout.writeln("Saving to file");
		di.saveDocToFile(doc, "exampleb_out.xml", CGDOME.GDOME_SAVE_STANDARD);
		
		system.stdout.writeln("Freeing more");
		doc.unref();
		di.unref();
		return 0;
	} catch(e) {
		system.stderr.writeln("Error: " + e);
		return 1;
	}
}

	
system.exit(main(system.args));
	
/* EOF */
