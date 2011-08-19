#!/usr/bin/js

Extension.load("system");
Extension.load("mime");

/* Actual test */
var buf = "If you believe that truth=3Dbeauty, then surely=20=\nmathematics is the most beautiful branch of philosophy.";

var decoded_buf = mime.decodeQP(buf);

system.stdout.writeln("decoded_buf: '" + decoded_buf + "'");
