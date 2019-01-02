SUBDIRS = src test

dist_noinst_SCRIPTS = workspace/Makefile.in
dist_noinst_DATA = COPYING.RUNTIME workspace/README workspace/advice_header.c \
	workspace/duplicate.c workspace/hello.c workspace/fclose_tracecut.c \
	Doxyfile web/doxy-footer.html web/doxygen.css web/doxy-header.html

include $(srcdir)/doxygen.am
