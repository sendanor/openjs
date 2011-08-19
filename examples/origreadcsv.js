#!/usr/bin/js

/** Split single CSV row */
String.prototype.splitCSVRow = function splitCSVRow (delimiter, enclosure) {
	var cells = new Array();
	system.stdout.writeln( "this='" + this + "'" );
	var last_was_enclosure = false;
	var enclosure_open = false;
	var field = "";
	for(var i=0; i<this.length; i=i+1) {
		var ch = this.charAt(i);
		
		// Char is enclosure, enclosure is not open and last char was enclosure
		if( (last_was_enclosure) && (enclosure_open==false) && (ch==enclosure) ) {
			field += enclosure;
			enclosure_open = true;
			continue;
		}
		
		// Char is enclosure and enclosure is not open
		if( (enclosure_open==false) && (ch==enclosure) ) {
			enclosure_open = true;
			continue;
		}
		
		// Char is enclosure and enclosure is open
		if( (enclosure_open==true) && (ch==enclosure) ) {
			last_was_enclosure = true;
			enclosure_open = false;
			continue;
		}
		
		// Char is delimiter and enclosure isn't open
		if( (enclosure_open==false) && (ch==delimiter) ) {
			cells.push(field);
			last_was_enclosure = false;
			system.stdout.writeln( "field='" + field + "'" );
			field = "";
			continue;
		}
		
		// Char is field data
		field += ch;
		last_was_enclosure = false;
	}
	cells.push(field);
	system.stdout.writeln( "field='" + field + "'" );
	return cells;
}

/** Split multiple CSV Rows */
String.prototype.splitCSV = function splitCSV (delimiter, enclosure) {
	//system.stdout.writeln( "this='" + this + "'" );
	var rows = new Array();
	var rawrows = this.split("\n");
	for(var i in rawrows) {
		var row = rawrows[i];
		if(row.length != 0) rows.push( row.splitCSVRow(delimiter, enclosure) );
	}
	return rows;
}

/* Tests */
system.stdout.writeln("CSV reading test for files");

var file = Filesystem.open("test.csv");
var rows = file.toString().splitCSV(",", "\"");
file.close();

for(var i in rows) {
	system.stdout.write("#" + i);
	for(var c in rows[i]) {
		system.stdout.write( " | " + rows[i][c] );
	}
	system.stdout.write("\n");
}

