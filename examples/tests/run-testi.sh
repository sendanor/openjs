#!/bin/sh
time js -e basicsys -e system -e stream -e basicstream ./testi.js > js-output.txt
time perl -e '$a = "moh"; for ($i = 0; $i <= 3000; $i++) { $a .= $i; print "$a\n"; }' > perl-output.txt
md5sum js-output.txt perl-output.txt
