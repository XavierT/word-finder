
#include "Node.h"


void Node::addEdge(char value)
{

    Node * node = new Node;

    edges_.insert(edgeMap::value_type(value,node));

}

void Node::removeEdge(char value)
{
    edgeMap::iterator it = edges_.find(value);
    edges_.erase( it);
}
