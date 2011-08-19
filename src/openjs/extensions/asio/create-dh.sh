#!/bin/sh
umask 077
openssl dhparam -check -text -5 512 -out dh512.pem
