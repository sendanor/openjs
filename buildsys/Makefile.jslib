# Sendanor -- Generic library Makefile
# $Id: Makefile 3454 2007-10-18 16:29:54Z jheusala $

all: build

SRCDIR := $(shell /bin/sh -c 'set -e; dir=`pwd`; while test ! -f "$$dir/Makefile.global"; do dir="`dirname "$$dir"`"; test "x$$dir" != x/; done; echo $$dir')
-include $(SRCDIR)/Makefile.global
-include Makefile.local

build: subdirs-build

subdirs-build: $(SUBDIRS:=-build)
subdirs-install: $(SUBDIRS:=-install)
subdirs-clean: $(SUBDIRS:=-clean)

clean: subdirs-clean
	$(RM) -f *.a *.o *.so *.d *.t $(LIBNAME).so."$(VERSION)"

install: subdirs-install install-library
install-library: install-$(LIBNAME).js install-$(LIBNAME).js.$(VERSION) $(addprefix install-,$(INSTALL_LIBS))

installdirs:
	mkdir -p "$(DESTDIR)$(INCLUDEDIR)/$(INCLUDESUBDIR)"
	chmod 755 "$(DESTDIR)$(INCLUDEDIR)/$(INCLUDESUBDIR)"
	mkdir -p "$(DESTDIR)$(LIBDIR)"
	chmod 711 "$(DESTDIR)$(LIBDIR)"
	if test -d bits; then \
		mkdir -p "$(DESTDIR)$(LIBDIR)/$(LIBNAME)"; \
		chmod 755 "$(DESTDIR)$(LIBDIR)/$(LIBNAME)"; \
		cp -f bits/*.js "$(DESTDIR)$(LIBDIR)/$(LIBNAME)"; \
	fi

install-$(LIBNAME).js: $(LIBNAME).js installdirs
	ln -s "$(LIBNAME).js.$(VERSION)" "$(DESTDIR)$(LIBDIR)/$(LIBNAME).js"

install-$(LIBNAME).js.$(VERSION): $(LIBNAME).js installdirs
	cp -f "$<" "$(DESTDIR)$(LIBDIR)/$<.$(VERSION)"
	chmod 644 "$(DESTDIR)$(LIBDIR)/$<.$(VERSION)"

install-%: % installdirs
	cp -f "$<" "$(DESTDIR)$(LIBDIR)/$<.$(VERSION)"
	chmod 644 "$(DESTDIR)$(LIBDIR)/$<.$(VERSION)"
	ln -s "$<.$(VERSION)" "$(DESTDIR)$(LIBDIR)/$<"

%-build: %
	$(MAKE) -C $< build

%-clean: %
	$(MAKE) -C $< clean

%-install: %
	$(MAKE) -C $< install

# EOF
