
CC=g++
CFLAGS=-Wall -g -Wextra 
INCLUDE_PATH=-I/usr/include -I. 
LIB_PATH= -L/usr/lib
LIBS = -lstdc++
LIBS_TEST = -lcppunit

.PHONY: test clean 

all:  Node.o Trie.o main.o
	$(CC) $(CFLAGS) -o cpp_finder Node.o Trie.o main.o $(LIBS) $(LIB_PATH)

test: 
	$(MAKE) -C test

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c main.cpp $(LIBS) 

Trie.o: Trie.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c Trie.cpp 

Node.o: Node.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c Node.cpp 

clean:
	$(RM) -f *.o cpp_finder
	$(MAKE) clean -C test
