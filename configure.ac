#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT(uni, 0.1, ned.rihine@gmail.com)
AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL
AC_LIBTOOL_WIN32_DLL

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDC

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_SIZEOF(void *)
## Keywords
AC_C_CONST
AC_C_INLINE
AC_C_STRINGIZE
AC_C_VOLATILE
## Types
AC_TYPE_SIZE_T
## Functions
AC_FUNC_MALLOC

# Checks for library functions.

# define configure command line option
#
# --enable-tests
#
AC_ARG_ENABLE(tests,
    AC_HELP_STRING([--enable-tests],
                   [enable test suites [default=no]]),
    ,enable_tests=no)

# automake variables
AM_CONDITIONAL(TESTS, test x$enable_tests = xyes)

# config
AC_CONFIG_HEADERS([include/config.h])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_MACRO_DIR([builds/m4])
AC_CONFIG_FILES([Makefile
    include/Makefile
    include/uni/Makefile
    src/Makefile])

AC_OUTPUT
