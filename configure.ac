AC_INIT([CStructGen], [0.1.2], [fnchooft@gmail.com], [CStructGen],
        [https://github.com/fnchooft/CStructGen])
AC_PREREQ([2.59])

AM_INIT_AUTOMAKE([1.10 -Wall no-define foreign])

AC_CHECK_PROGS([GSL_TOOL], [gsl])
if test -z "$GSL_TOOL";
   then AC_MSG_ERROR([gsl not found - install it by following the instructions under: https://github.com/fnchooft/gsl])
fi

AC_CHECK_PROGS([CASTXML_TOOL], [castxml])
if test -z "$CASTXML_TOOL";
   then AC_MSG_WARN([castxml not found - install it with apt-get install castxml or by following the instructions under: https://github.com/fnchooft/CastXML])
fi

AC_CHECK_PROGS([XSLTPROC], [xsltproc])

# From https://nerdland.net/2009/07/detecting-c-libraries-with-autotools
AC_CHECK_LIB([gtest_main], [main], 
  [HAVE_GTEST=1] [GTEST_LIBS="$TEST_LIBS -lgtest -lpthread -lgtest_main"], 
  AC_MSG_WARN([libgtest is not installed.]))

if test -z "$HAVE_GTEST";
  then PKG_CHECK_MODULES([GTEST], [gtest-1.6.0], [HAVE_GTEST_PKG=1])
fi

AC_CONFIG_HEADERS([config.h])
AC_PROG_CXX
LT_INIT([static])

AC_CONFIG_FILES([Makefile ${PACKAGE_NAME}-${PACKAGE_VERSION}.pc:pkg.pc.in])
AC_CONFIG_FILES([scripts/Makefile examples/simple/Makefile examples/pair_test/Makefile])
AC_OUTPUT
