#!/usr/bin/js

Extension.load("jsxmlpp");

/* Data for the template */
var title = "This is a test title.";
var content = "Hello World! This is place for content.";

function getlist(items) {
	return "<ul>\n <li>" + items.join("</li>\n <li>") + "</li>\n</ul>\n";
}

/* Test run */
Extension.load("system");
var xmlp = jsxmlpp("/usr/bin/jsxmlpp");
xmlp.start();
xmlp.run(system.stdout, "test.html");
xmlp.writeErrors(system.stderr);
xmlp.stop();

/* EOF */
