LIBACC=-L../../../lib -lacc

CPP=gcc -E
CC=gcc

LDFLAGS :=
CXXFLAGS :=  -O3 -static

SRCS = mdriver.c mm.c memlib.c fsecs.c fcyc.c clock.c ftimer.c range.c helper.c
target=mdriver

$(target):
	rm -rf working 
	mkdir working
	cp src/* working
	cd working ;  \
		$(CPP) $(CXXFLAGS) mdriver.c $(LDFLAGS)> mdriver.mc ; \
		$(CPP) $(CXXFLAGS) mm.c $(LDFLAGS)> mm.mc ; \
		$(CPP) $(CXXFLAGS) memlib.c $(LDFLAGS)> memlib.mc ; \
		$(CPP) $(CXXFLAGS) fsecs.c $(LDFLAGS)> fsecs.mc ; \
		$(CPP) $(CXXFLAGS) fcyc.c $(LDFLAGS)> fcyc.mc ; \
		$(CPP) $(CXXFLAGS) clock.c $(LDFLAGS)> clock.mc ; \
		$(CPP) $(CXXFLAGS) ftimer.c $(LDFLAGS)> ftimer.mc ; \
		$(CPP) $(CXXFLAGS) range.c $(LDFLAGS)> range.mc ; \
		$(CPP) $(CXXFLAGS) helper.c $(LDFLAGS)> helper.mc ; \
        $(CPP) $(CXXFLAGS) aop.c $(LDFLAGS)> aop.ac ;  \
        if [ ${ACCTEST}x = "x" ] ; then  ACCTEST=../../../bin/acc && export ACCTEST && echo "ACCTEST is not set by user, set it to be default value ../../../bin/acc" ; fi; \
	"$$ACCTEST" -af=.ac mdriver.mc mm.mc memlib.mc fsecs.mc fcyc.mc clock.mc ftimer.mc range.mc helper.mc aop.ac; \
	${CC} $(CXXFLAGS) -o $(target) $(SRCS) aop.c ${LIBACC}  $(LDFLAGS);	cp mdriver ..