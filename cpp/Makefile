
CC=g++
CFLAGS=-Wall -g
INCLUDE_PATH=-I/usr/include -I. 
LIB_PATH=/usr/lib


all:  Node.o Trie.o main.o
	$(CC) $(CFLAGS) -o cpp_finder Node.o Trie.o main.o -lstdc++

test: Trie.o
	$(CC) $(CFLAGS) -o test_cpp_finder Trie.o -L$(LIB_PATH) -lstdc++ -lcppunit 

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c main.cpp -lstdc++

Trie.o: Trie.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c Trie.cpp 

Node.o: Node.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c Node.cpp 

clean:
	rm -f *.o cpp_finder
