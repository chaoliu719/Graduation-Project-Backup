CXX ?= g++
ACXX ?= ag++

SOURCES := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))
ASPECTS := $(wildcard *.ah)
LDFLAGS := -lm
CXXFLAGS := -static -O3

dijkstra: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

dijkstra.o: dijkstra.c $(ASPECTS)
	$(ACXX) $(CXXFLAGS) -x c++ -c $< -o $@

dijkstra_advice.o: dijkstra_advice.c $(ASPECTS)
	$(ACXX) $(CXXFLAGS) -x c++ -c $< -o $@
