
#!/bin/sh
fakeroot ./debian/rules clean
#make clean
rm ../openjs_*.{dsc,changes,deb,tar.gz}
#rm -rf debian/openjs
#rm -rf build-stamp configure-stamp debian/openjs.debhelper.log debian/openjs.postinst.debhelper debian/openjs.postrm.debhelper debian/files debian/openjs.substvars
svn status|grep '^\?'
