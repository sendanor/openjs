#!/bin/sh
umask 077
openssl genrsa 1024 > tmp/server.key
openssl req -new -x509 -nodes -sha1 -days 3650 -key tmp/server.key > tmp/server.crt
cat tmp/server.{key,crt} > server.pem
rm -f tmp/server.{key,crt}
