ACFLAGS ?= -v1 -k
ACXX    ?= $(PWD)/ag++
export ACXX

ACTESTS = $(filter-out Makefile%, $(filter-out CVS,$(notdir $(wildcard $(PWD)/aspectc++/*))))

.PHONY: $(ACTESTS)

all: testrun

test: $(addsuffix .make, $(ACTESTS))

testrun: test $(addsuffix .run, $(ACTESTS))

clean: $(addsuffix .clean, $(ACTESTS))

%.make: %
	make -C aspectc++/$<

%.run: %
	make -C aspectc++/$< run

%.clean: %
	make -C aspectc++/$< clean
