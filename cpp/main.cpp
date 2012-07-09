
#include <iostream>
#include <iomanip>

#include "Trie.h"
#include "Node.h"


int main()
{

    Node test;

    test.add_edge('a');
    std::cout << "Test should have one successor : " << test.count_successor() << std::endl;
    test.remove_edge('a');
    std::cout << "Test should have zero successor : " << test.count_successor() << std::endl;

    return 0;
}

