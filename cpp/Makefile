
CC=g++
CFLAGS=-Wall
INCLUDE_PATH=-I/usr/include -I. 
LIB_PATH=/usr/lib


all:  Trie.o main.o
	$(CC) $(CFLAGS) -o cpp_finder Trie.o main.o -lstdc++

test: Trie.o
	$(CC) $(CFLAGS) -o test_cpp_finder Trie.o -L$(LIB_PATH) -lstdc++ -lcppunit 

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c main.cpp -lstdc++

Trie.o: Trie.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c Trie.cpp 


clean:
	rm -f *.o cpp_finder
