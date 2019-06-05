CXX ?= g++
ACXX ?= ag++

SOURCES := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))
ASPECTS := $(wildcard *.ah)
LDFLAGS :=
CXXFLAGS := -static -O3
TARGET=mdriver

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c $(ASPECTS)
	$(ACXX) $(CXXFLAGS) -x c++ -c $< -o $@
