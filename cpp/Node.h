
#ifndef _NODE_H_
#define _NODE_H_

#include <vector>

class Node
{
    char character;
    bool is_a_word;
    std::vector<Node *> successor;

    Node();
    ~Node();

};


#endif
