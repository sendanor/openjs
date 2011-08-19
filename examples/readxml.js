#!/usr/bin/js

// Our test
var filename = (1<system.args.length) ? system.args[1] : "test.xml";

var parser = XML.domParser();
parser.setValidate();
parser.setSubstituteEntities(); // We just want the text to be resolved/unescaped automatically
parser.parseFile(filename);
if(!parser.isParsed()) {
	system.stderr.writeln("Parsing failed.");
	system.exit(1);
}

var doc = parser.getDocument();
var str = doc.writeToString();
system.stdout.write(str);

/* EOF */
