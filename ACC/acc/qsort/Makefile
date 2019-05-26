cLIBACC=-L../../../lib -lacc

CPP=gcc -E
CC=gcc

LDFLAGS := -lm
CXXFLAGS := -static -O2 

qsort_small:
	rm -rf working 
	mkdir working
	cp src/*.c working
	cd working ;  \
        $(CPP) $(CXXFLAGS) qsort_small.c $(LDFLAGS)> qsort_small.mc ; \
        $(CPP) $(CXXFLAGS) qsort_aspect.c $(LDFLAGS)> qsort_aspect.ac ;  \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac qsort_small.mc qsort_aspect.ac ; \
	${CC} $(CXXFLAGS) -o qsort_small qsort_small.c qsort_aspect.c  ${LIBACC}  $(LDFLAGS);

qsort_large:
	rm -rf working 
	mkdir working
	cp src/*.c working
	cd working ;  \
        $(CPP) $(CXXFLAGS) qsort_large.c $(LDFLAGS)> qsort_large.mc ; \
        $(CPP) $(CXXFLAGS) qsort_aspect.c $(LDFLAGS)> qsort_aspect.ac ;  \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac qsort_large.mc qsort_aspect.ac ; \
	${CC} $(CXXFLAGS) -o qsort_large qsort_large.c qsort_aspect.c  ${LIBACC}  $(LDFLAGS);

clean:
	rm -rf working   
