CC ?= gcc
CFLAGS ?= -Wall -g -O0 -MMD
LDLIBS ?=

SOURCES := $(shell find . -name '*.c' -not -path './output/*' -not -path '*/output/*')
OBJECTS := $(SOURCES:.c=.o)
DEPENDS := $(SOURCES:.c=.d)
TARGET ?= main

OBJDIR ?= output
OBJECTS := $(patsubst %.c,$(OBJDIR)/%.o,$(notdir $(SOURCES)))

all: $(TARGET)

$(TARGET): $(OBJECTS) | $(OBJDIR)
	$(CC) $(OBJECTS) -o $@ $(LDLIBS)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $@

clean:
	rm -rf $(OBJDIR) $(TARGET)

-include $(DEPENDS)

.PHONY: all clean