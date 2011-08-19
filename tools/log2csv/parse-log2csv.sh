#!/bin/sh
logfile=$1

grep -F '[funct]' "$logfile" \
	|grep -F ' SOF#' \
	|sed -re 's/ SOF#/ /'|awk '{print $5 " " $1 " " $4 $6}' \
	|sed -re 's@^([0-9]+ [0-9\.]+) ([^:]+/)?([^:/]+:[0-9]+:)@\1 \3@' \
	|while read line; do 
		id="$(echo "$line"|awk '{print $1}')"
		endtime="$(grep -F ' EOF#'"$id " "$logfile"|awk '{print $1}')"
		echo "$line"|awk '{print $1 ";" $2 ";" '"$endtime"' ";" $3}'
	done
