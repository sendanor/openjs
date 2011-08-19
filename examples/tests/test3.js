#!/usr/bin/js
var buf = '';
for (i = 0; i <= 100000; i++) {
        buf += "moh\n";
}
system.stdout.write(buf);
