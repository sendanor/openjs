== OpenJS.org -- Common JavaScript interpreter ==

OpenJS is a JIT compiler and runner for JavaScript files. It uses Google V8 
JavaScript engine which is also used in Google's Chrome web browser.

See examples/ for sample scripts.

=== 3rd party libraries needed to use OpenJS ===

==== Core ====

Google V8 -- JavaScript Engine
http://code.google.com/p/v8/
License: New BSD License

Sendanor Base Library
https://fizban.sendanor.net/svn/sendanor/projects/libsendanor-base/trunk/
License: BSD (check also included 3rd party libraries)

Boost Libraries
http://www.boost.org
License: Boost Software License

==== Database extension ====

SOCI -- The C++ Database Access Library
http://soci.sourceforge.net/
License: Boost Software License

==== XML extension ====

libxml++ -- XML library
http://libxmlplusplus.sourceforge.net/
License: LGPL version 2

=== TODO ===

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

--EOF--
