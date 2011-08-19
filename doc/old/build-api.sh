#!/bin/sh
set -e
dir="$(dirname "$0")"
jsdoc -d="$dir/api" -e=UTF-8 -v -v -x=js,cgi -t=templates/jsdoc -r=5 -o="$dir/debug.log" \
	-E='gdome/gdome.js$' "$dir"/../src
