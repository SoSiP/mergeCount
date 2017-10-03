CC=g++
CFLAGS=-g -Wall -std=c++11 -O3 -lhts -Wno-unused-function 

.PHONY: clean rebuild

all:mergeCounts

mergeCounts: mergeCounts.c 
			$(CC) $(CFLAGS) $< -o $@ 

clean:
			rm -f mergeCounts *.o

rebuild: clean all

