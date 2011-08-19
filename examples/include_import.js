#!/usr/bin/js
/* Make invoice reference numbers with checksums (Finnish bank standard)
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@sendanor.fi>
 * $Id: include_import.js 8588 2009-08-02 15:15:50Z jheusala $
 */

var refnum = new include("librefnum.js");

if(2 < system.args.length) {
	var action = system.args[1];
	if(action == 'create') {
		var num = system.args[2];
		system.stdout.writeln( refnum.RefNumCreate(num) );
	} else {
		system.stdout.writeln( action + ": unknown action" );
	}
} else {
	system.stdout.writeln("USAGE: " + system.args[0] + " <ACTION> <OPTION(S)>");
	system.stdout.writeln("  ..where ACTION is:");
	system.stdout.writeln("    create <NUM>");
}

/* EOF */
