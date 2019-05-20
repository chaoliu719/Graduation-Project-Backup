LIBACC=-L../../../lib -lacc

CPP=gcc -E
CC=gcc

LDFLAGS := -lm
CXXFLAGS := -static -O0 -g

dijkstra:
	rm -rf working 
	mkdir working
	cp src/* working
	cd working ;  \
        $(CPP) $(CXXFLAGS) dijkstra.c $(LDFLAGS)> dijkstra.mc ; \
        $(CPP) $(CXXFLAGS) dijkstra_advice.c $(LDFLAGS)> dijkstra_advice.mc ; \
        $(CPP) $(CXXFLAGS) dijkstra_aspect.c $(LDFLAGS)> dijkstra_aspect.ac ;  \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac dijkstra.mc dijkstra_advice.mc dijkstra_aspect.ac; \
	${CC} $(CXXFLAGS) -o dijkstra dijkstra.c dijkstra_advice.c dijkstra_aspect.c ${LIBACC}  $(LDFLAGS);
