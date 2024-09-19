
TARGET = ./bin/books
CC = g++
CFLAGS = -Wall -Wextra -pedantic --std=c++11

OBJDIR = ./obj
SRCDIR = ./src
INCDIR = ./include

OBJ = $(OBJDIR)/main.o $(OBJDIR)/book.o
SRC = $(SRCDIR)/book.cpp
INCLUDE = $(INCDIR)/book.hpp

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp $(INCLUDE)
	$(CC) -I $(INCDIR) $(CFLAGS) -o $@ -c $<

$(OBJDIR)/book.o: $(SRC) $(INCLUDE)
	$(CC) -I $(INCDIR) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJDIR)/*.o $(TARGET)

