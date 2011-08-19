#!/usr/bin/js

/* Tests */
system.stdout.writeln("CSV reading test for files");

var filename = (1<system.args.length) ? system.args[1] : "test.csv";
var delimiter = (2<system.args.length) ? system.args[2] : ",";
var enclosure = (3<system.args.length) ? system.args[3] : "\"";

var file = Filesystem.open(system.args[1]);
var rows = file.toString().splitCSV(delimiter, enclosure);
file.close();

var colstats = new Object();
colstats.maxlengths = new Array();
for(var i in rows) {
	for(var c in rows[i]) {
		if( (colstats.maxlengths[c] == undefined) || (colstats.maxlengths[c] < rows[i][c].length) ) {
			colstats.maxlengths[c] = rows[i][c].length;
		}
	}
}

for(var i in rows) {
	system.stdout.write("#" + String(i).rpad(3, " ") );
	for(var c in rows[i]) {
		var padwidth = colstats.maxlengths[c];
		if(rows[i][c].length < padwidth) {
			system.stdout.write( " | " + rows[i][c].rpad(padwidth, " ") );
		} else {
			system.stdout.write( " | " + rows[i][c] );
		}
	}
	system.stdout.write("\n");
}

