if HAVE_PYTHON
TESTS_ENVIRONMENT = $(PYTHON) $(srcdir)/run-testcase.py --with-gcc=$(CC) \
	--with-ia-lib-dir=$(top_builddir)/src/.libs \
	--with-ia-src-dir=$(top_srcdir) --with-tests-dir=$(srcdir)
TESTS = int-types.xml float-types.xml pointer-types.xml struct-types.xml \
	reinst.xml noinstrument.xml duplicate.xml inparam.xml constants.xml \
	return.xml cast.xml tracecut.xml
endif

dist_noinst_SCRIPTS = run-testcase.py

# Unfortunately, we must also list each test file here to make sure it
# gets included in the distributed tarball.  I originally used
# dist_noinst_DATA for all the source files, but that didn't work.
dist_noinst_DATA = testcase.dtd int-types.xml float-types.xml pointer-types.xml \
	struct-types.xml reinst.xml noinstrument.xml duplicate.xml inparam.xml \
	constants.xml return.xml cast.xml tracecut.xml \
	test-driver.c test-driver.h \
	plugin-int-types.c int-types-target.c int-types-hooks.c \
	plugin-float-types.c float-types-target.c float-types-hooks.c \
	plugin-pointer-types.c pointer-types-target.c pointer-types-hooks.c \
	plugin-struct-types.c struct-types-target.c struct-types-hooks.c \
	plugin-reinst1.c plugin-reinst2.c plugin-reinst-dup.c reinst-target.c \
	reinst-hooks.c reinst-dup-hooks.c reinst-dup-target.c \
	plugin-noinstrument.c noinstrument-target.c noinstrument-hooks.c \
	plugin-duplicate.c duplicate-target.c duplicate-hooks.c \
	plugin-inparam.c plugin-allpc-inparam.c inparam-target.c \
	inparam-hooks.c allpc-inparam-target.c allpc-inparam-hooks.c \
	plugin-constants.c constants-target.c constants-hooks.c \
	plugin-return.c return-target.c return-hooks.c \
	plugin-cast.c cast-target.c cast-hooks.c \
	plugin-tracecut.c plugin-declare.c tracecut-target.c tracecut-hooks.c
