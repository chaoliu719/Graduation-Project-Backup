CC = gcc
CFLAGS = -g -std=c99
INC = -I /usr/include/x86_64-linux-gnu 
OBJS = mdriver.o mm.o memlib.o fsecs.o fcyc.o clock.o ftimer.o range.o helper.o

mdriver: $(OBJS)
	$(CC) $(CFLAGS) $(INC) -o mdriver $(OBJS)

mdriver.o: mdriver.c fsecs.h fcyc.h clock.h memlib.h config.h mm.h
memlib.o: memlib.c memlib.h
mm.o: mm.c mm.h memlib.h
fsecs.o: fsecs.c fsecs.h config.h
fcyc.o: fcyc.c fcyc.h
ftimer.o: ftimer.c ftimer.h config.h
clock.o: clock.c clock.h
range.o: range.c range.h
helper.o: helper.c helper.h

clean:
	rm -f *~ *.o mdriver

