
CC=g++
CFLAGS=-Wall -g -Wextra -pedantic
INCLUDE_PATH=-I/usr/include -I. 
LIB_PATH= -L/usr/lib
LIBS = -lstdc++
LIBS_TEST = -lcppunit


all:  Node.o Trie.o main.o
	$(CC) $(CFLAGS) -o cpp_finder Node.o Trie.o main.o $(LIBS) $(LIB_PATH)

test: Trie.o
	$(CC) $(CFLAGS) -o test_cpp_finder Trie.o $(LIB_PATH) $(LIBS) $(LIBS_TEST)

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c main.cpp $(LIBS) 

Trie.o: Trie.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c Trie.cpp 

Node.o: Node.cpp
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c Node.cpp 

clean:
	rm -f *.o cpp_finder
	rm -f test_cpp_finder
