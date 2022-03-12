.PHONY: all clean

CC=gcc
C_SOURCES=robovac.c ops.c
CFLAGS=-O2 --std=c17 -Wall -Wextra -pedantic -Werror -Wno-unused-parameter
LDFLAGS=

OBJS=$(C_SOURCES:.c=.o)

all: robovac

%.o: %.c robovac.h
	$(CC) -o $@ -c $< $(CFLAGS)

robovac: $(OBJS)
	$(CC) $^ $(LDFLAGS) -o $@

clean:
	rm -f robovac $(OBJS)
