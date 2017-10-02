CC=gcc
CFLAGS=-g -Wall -O2 -Wno-unused-function
HEADERS=src/sam.h
OBJECTS=$(HEADERS:.h=.o)

all:mergeCounts

mergeCounts: mergeCounts.c $(HEADERS) $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $< -o $@ 
