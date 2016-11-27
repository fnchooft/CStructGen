AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

pkgconfigdir = $(datadir)/pkgconfig
pkgconfig_DATA = @PACKAGE_NAME@-@PACKAGE_VERSION@.pc

SUBDIRS = scripts examples/simple examples/pair_test

dist_noinst_SCRIPTS = autogen.sh
