AC_INIT([CStructGen], [0.1.2], [fnchooft@gmail.com], [CStructGen],
        [https://github.com/fnchooft/CStructGen])
AC_PREREQ([2.59])

AM_INIT_AUTOMAKE([1.10 -Wall no-define foreign])

AC_CHECK_PROGS([GSL_TOOL], [gsl])
if test -z "$GSL_TOOL";
   then AC_MSG_WARN([gsl not found - install it by following the instructions under: https://github.com/fnchooft/gsl])
fi
AC_CHECK_PROGS([CASTXML_TOOL], [castxml])
if test -z "$CASTXML_TOOL";
   then AC_MSG_WARN([castxml not found - install it by following the instructions under: https://github.com/fnchooft/CastXML])
fi

AC_CHECK_PROGS([XSLTPROC], [xsltproc])


AC_CONFIG_HEADERS([config.h])
AC_PROG_CXX
LT_INIT([static])

AC_CONFIG_FILES([Makefile ${PACKAGE_NAME}-${PACKAGE_VERSION}.pc:pkg.pc.in])
AC_CONFIG_FILES([scripts/Makefile examples/simple/Makefile examples/pair_test/Makefile])
AC_OUTPUT
