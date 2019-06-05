CXX ?= g++
ACXX ?= ag++


SOURCES := $(wildcard *.c)

JUNK    := Junk
OBJECTS := $(addprefix $(JUNK)/,$(patsubst %.c,%.o,$(SOURCES)))
DEPS    := $(addprefix $(JUNK)/,$(patsubst %.c,%.d,$(SOURCES)))
HEADERS := $(wildcard *.h)
ASPECTS := $(wildcard *.ah)
INCLUDE_LIST := $(patsubst %.ah,-include %.ah,$(ASPECTS))
LDFLAGS := -lm
CXXFLAGS := -static -O3 

all: patricia

patricia: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

$(JUNK)/%.o : %.c
	@echo Compiling $<
	$(ACXX) $(CXXFLAGS) -x c++ -c $< -o $@

$(JUNK)/%.d : %.c
	@mkdir -p $(JUNK)
	$(CXX) $(CXXFLAGS) -x c++ -MM $(INCLUDE_LIST) $< | \
		sed -e "s/$*\.o/$(JUNK)\/& $(JUNK)\/$*.d/g" > $@


ifneq ($(MAKECMDGOALS),clean)
-include $(DEPS)
endif

# don't remove any intermediate files
.SECONDARY:
