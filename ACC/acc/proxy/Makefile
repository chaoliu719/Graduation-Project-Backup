LIBACC=-L../../../lib -lacc

CPP=gcc -E
CC=gcc

LDFLAGS := -lpthread
CXXFLAGS := -O3

proxy:
	rm -rf working 
	mkdir working
	cp src/* working
	cd working ;  \
        $(CPP) $(CXXFLAGS) proxy.c $(LDFLAGS)> proxy.mc ; \
        $(CPP) $(CXXFLAGS) csapp.c $(LDFLAGS)> csapp.mc ; \
        $(CPP) $(CXXFLAGS) aspect.c $(LDFLAGS)> aspect.mc ; \
        $(CPP) $(CXXFLAGS) aop.c $(LDFLAGS)> aop.ac ;  \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac proxy.mc csapp.mc aspect.mc aop.ac; \
	${CC} $(CXXFLAGS) -o proxy proxy.c csapp.c aspect.c aop.c ${LIBACC}  $(LDFLAGS); rm ../proxy; cp proxy ..

clean:
	rm -f *~ *.o *.so proxy; rm -rf .proxy .noproxy
