CC=gcc
CFLAGS=-Wall -g -O0 -MMD
LDLIBS=-lm

SOURCES=$(shell find . -name "*.c")
EXECS=$(SOURCES:.c=.out)

all: clean $(EXECS)

%.out: %.c
	$(CC) $(CFLAGS) $(LDLIBS) -o $@ $<

# Clean
clean:
	find . -name "*.out" -delete
	find . -name "*.o" -delete
	find . -name "*.d" -delete

-include $(SOURCES:.c=.d)

.PHONY: all clean
