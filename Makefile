CC=icc
CFLAGS=-std=c11
SOURCES=src/main.c
TARGET=tonc

all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

.PHONY: clear

clear:
