#!/usr/bin/js
/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

Extension.load("system");
Extension.load("gdome");

function mysample(file, id, outfile) {
	/*  */
	system.stdout.writeln("Creating di");
	var di = GDOME.createDOMImplementation();
	
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
	
	/* Remove existing child nodes */
	system.stdout.writeln("Removing all existing child nodes...");
	while(root.hasChildNodes()) {
		var child = root.lastChild();
		root.removeChild(child);
	};
	
	/* Create new text node */
	system.stdout.writeln("Creating new text node");
	system.stdout.writeln("1/2");
	var el = doc.createTextNode("Input");
	system.stdout.writeln("2/2");
	
	Extension.load("gdome/GdomeNode.js");
	root.appendChild(GdomeNode(el));
	
	/* Free? */
	system.stdout.writeln("Freeing");
	el.unref();
	root.unref();
	
	/* I save the modified document to a file named "exampleb_out.xml */
	system.stdout.writeln("Saving to file: " + outfile);
	di.saveDocToFile(doc, outfile, CGDOME.GDOME_SAVE_STANDARD);
		
	system.stdout.writeln("Freeing more");
	doc.unref();
	di.unref();
}

/** Test main */
function main(args) {
	
	if(3>=args.length) {
		system.stderr.writeln("USAGE: ./main.js FILE ID OUTFILE COUNTS");
		return 1;
	}
	
	var file = args[1];
	var id = args[2];
	var outfile = args[3];
	var counts = parseInt(args[4], 10) || 1;
	
	system.stdout.writeln("file: "+file);
	system.stdout.writeln("id:   "+id);
	system.stdout.writeln("outfile: "+outfile);
	system.stdout.writeln("counts: "+counts);
	
	try {
		for(var i=0; i<counts; ++i) {
			mysample(file, id, outfile);
		}
		return 0;
	} catch(e) {
		system.stderr.writeln("Error: " + e);
		return 1;
	}
}

system.exit(main(system.args));

/* EOF */
