LIBACC=-L../../../lib -lacc
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
	diff working/sort.output.real  exp/sort.output.exp

clean:
	rm -rf working   
