#!/usr/bin/js
Extension.load("system");
Extension.load("cgi");

system.stdout.writeln("cgi.get.length == " + cgi.get.length);
system.stdout.writeln("cgi.post.length == " + cgi.post.length);
system.stdout.writeln("cgi.cookies.length == " + cgi.cookies.length);
