
#include "Node.h"


void Node::add_edge(char value)
{

    Node * node = new Node;

    edges_.insert(edgeMap::value_type(value,node));

}

void Node::remove_edge(char value)
{
    edgeMap::iterator it = edges_.find(value);
    edges_.erase( it);
}

/**
 * If a successor with the value as an edge,
 * return pointer on next Node.
 */
Node * Node::find_successor(char value)
{
    edgeMap::iterator it = edges_.find(value);

    if( it != edges_.end())
       return (*it).second;
    else
       return NULL;
}
