cLIBACC=-L../../../lib -lacc
#CPP=cpp
#CC=cc

CPP=gcc -E
CC=gcc


all:
	rm -rf working 
	mkdir working
	cp src/*.c working
	cd working ;  \
        $(CPP) SelectionSort.c > SelectionSort.mc ; \
        $(CPP) TestAspect.c > TestAspect.ac ;  \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac SelectionSort.mc TestAspect.ac ; \
	${CC}  -o mysort SelectionSort.c TestAspect.c  ${LIBACC}  ;  \
        ./mysort  > sort.output.real
	diff working/sort.output.real exp/sort.output.exp

foo:	
	cd working ; \
        $(CPP) foo.c > foo.mc ; \
        $(CPP) fooAspect.c > fooAspect.ac ; \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac foo.mc fooAspect.ac ; \
	${CC}  -o myfoo foo.c fooAspect.c  ${LIBACC}  ;  \
        ./myfoo  > foo.output.real
	diff working/foo.output.real exp/foo.output.exp

clean:
	rm -rf working   
