OpenJS JavaScript Interpreter
=============================

Historical Note
---------------

This is my old [Google v8](http://code.google.com/p/v8/) interpreter which I 
started working the day Google v8 was published -- long before [Node.js](http://nodejs.org) existed.

Obviously since then I have moved to use Node.js. Nobody should start using 
OpenJS for anything else but research. OpenJS still has some cool features 
Node.js doesn't support (see threading below).

Original SVN repository address: https://svn.sendanor.fi/svn/openjs/trunk

Threading
---------

It has working implementation for threading for example (well, not exactly full 
threading but almost and it doesn't block the JS code). I haven't managed to 
make it work with Node.js. Last time I checked it looked like it would need a 
lot rewriting of Node.js to make them work because a special feature in Google 
v8 must be enabled which will break things if v8 thread locking is not 
implemented correctly.

Description
-----------

OpenJS is a JIT compiler and runner for JavaScript files. It uses Google V8 
JavaScript engine which is also used in Google's Chrome web browser.

See examples/ for sample scripts.

3rd party libraries needed to use OpenJS
----------------------------------------

Core
----

Google V8 -- JavaScript Engine
http://code.google.com/p/v8/
License: New BSD License

Sendanor Base Library
https://fizban.sendanor.net/svn/sendanor/projects/libsendanor-base/trunk/
License: BSD (check also included 3rd party libraries)

Boost Libraries
http://www.boost.org
License: Boost Software License

Database extension
------------------

SOCI -- The C++ Database Access Library
http://soci.sourceforge.net/
License: Boost Software License

XML extension
-------------

libxml++ -- XML library
http://libxmlplusplus.sourceforge.net/
License: LGPL version 2

TODO
----

* Come up a better project name
** OpenJS ?
* Filesystem library
** More functions/methods
* CGI library
** Support for PUT
** Rename cgi to CGI?
* Session library
** Filesystem based implementation should use file locking
** Optional SQL-based implementation
* Loader -- JavaScript interface for extensions
** JavaScript callback onunload for extensions
* Rename sys to system? -- Done. It's also ServerJS standard proposition.
* XML extension
* openjs::convert
** V8 supports now UTF-8 methods, but convert still uses 16-bit string
** There might be unneeded convert chains to/from Glib::ustring in some extensions
* Make more use of JavaScript exceptions in extensions (also in the C++ code)
* Investigate about V8's extension support
* Fix binary stream operations for JavaScript
** V8/JS doesn't support a good byte array container?
* Fix v8 error line offsets [See v8: compilation-cache.cc:104 TODO(245)]
* Fix examples/tests/testi-mod2.js "exec.cc:47: Too many open files"
* Extension sql
** Broken support for boolean arguments
** Support for null type
** Broken support for BIGINT
*** SOCI doesn't support, workaround is to use strings when getting/setting data
* Fix binary safety in streams
* (Global) functions cannot be loaded from libraries at runtime
** Change import and include to use C++-based library loading
* Write help to CLI arguments --help and -h
* Make use of LGPL code optional (like src/msp)
