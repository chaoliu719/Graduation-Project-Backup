CXX ?= g++
ACXX ?= ag++

SOURCES := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))
ASPECTS := $(wildcard *.ah)
LDFLAGS := -lpthread
CXXFLAGS := -O3
TARGET := proxy

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c $(ASPECTS)
	$(ACXX) $(CXXFLAGS) -x c++ -c $< -o $@

clean:
	rm -f *~ *.o *.so proxy; rm -rf .proxy .noproxy
