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

// Modify the document
var node = doc.getRootNode();
system.stdout.writeln("Root node name: " + node.getName() );

system.stdout.writeln("Childs: " );
var nodes = node.getChildren();
for(i in nodes) if(nodes.hasOwnProperty(i)) {
	system.stdout.writeln(" * name: " + nodes[i].getName() );
}

system.stdout.writeln("Childs with name 'head': " );
var nodes = node.getChildren("head");
for(i in nodes) if(nodes.hasOwnProperty(i)) {
	system.stdout.writeln(" * name: " + nodes[i].getName() );
}

// Write the document
var str = doc.writeToString();
system.stdout.writeln("Full XML:");
system.stdout.write(str);

/* EOF */
