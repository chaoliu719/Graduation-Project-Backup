lib_LTLIBRARIES = libinteraspect.la libtracecut.la
libinteraspect_la_SOURCES = aop-pc-assign.c aop-main.c aop-type.c aop-weave.c \
	aop-pc-entry.c aop-pc-exit.c aop-pc-fun-call.c aop-header.c \
	aop-pointcut.c aop-duplicate.c tracecut.c aop-callback.h \
	aop-duplicate.h aop-dynval.h aop.h aop-header.h aop-pointcut.h \
	aop-type.h aop-weave.h tracecut.h
libinteraspect_la_CFLAGS = -Wall -fvisibility=hidden -prefer-pic
libinteraspect_la_LDFLAGS = -static -prefer-pic -version-info 1:1:0
libinteraspect_la_CPPFLAGS = -DHAVE_CONFIG_H -DIN_GCC -I$(gcc_includes)

# This file needs to be around for Doxygen but does not get compiled
# into the source.
dist_noinst_DATA = aop-doxy-main.c

libtracecut_la_SOURCES = tracecut-advice.c nfa.c nfa.h
libtracecut_la_CFLAGS = -Wall -fvisibility=hidden

include_HEADERS = aop.h tracecut.h tracecut-advice.h
