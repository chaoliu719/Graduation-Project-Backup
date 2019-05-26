LIBACC=-L../../../lib -lacc

CPP=gcc -E
CC=gcc

LDFLAGS := -lm
CXXFLAGS := -static -O3

patricia:
	rm -rf working 
	mkdir working
	cp src/* working
	cd working ;  \
        $(CPP) $(CXXFLAGS) patricia.c $(LDFLAGS)> patricia.mc ; \
        $(CPP) $(CXXFLAGS) patricia_test.c $(LDFLAGS)> patricia_test.mc ; \
        $(CPP) $(CXXFLAGS) patricia_advice.c $(LDFLAGS)> patricia_advice.mc ; \
        $(CPP) $(CXXFLAGS) patricia_aspect.c $(LDFLAGS)> patricia_aspect.ac ;  \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac patricia.mc patricia_test.mc patricia_advice.mc patricia_aspect.ac; \
	${CC} $(CXXFLAGS) -o patricia patricia.c patricia_test.c patricia_advice.c patricia_aspect.c ${LIBACC}  $(LDFLAGS);
