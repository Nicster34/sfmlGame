CC = g++
SRCDIR = src
BUILDDIR = build
TARGET = bin/main.exe

#SRCEXT = cpp
#SOURCES = $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
CFLAGS = -g

main.exe: main.o
	$(CC) $(CFLAGS) $(BUILDDIR)/main.o -o $(TARGET) -lsfml-graphics -lsfml-window -lsfml-system

main.o:   
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o
