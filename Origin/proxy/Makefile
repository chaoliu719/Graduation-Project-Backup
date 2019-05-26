CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -lpthread
TARGET = proxy

all: $(TARGET)

$(TARGET): proxy.c csapp.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	rm -f *~ *.o proxy; rm -rf .proxy .noproxy