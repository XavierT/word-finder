
#ifndef _NODE_H_
#define _NODE_H_

#include <map>
#include <string>

class Node
{

    public:
    Node() :  is_a_word_(false), edges_() {} 

    Node(const Node &OriginalNode)
    {
        edgeMap::const_iterator i;

        is_a_word_ = OriginalNode.is_a_word_;

        // copy map content
        for(i = OriginalNode.edges_.begin(); i != OriginalNode.edges_.end(); ++i)
        {
            edges_.insert(edgeMap::value_type((*i).first, (*i).second));
        }

    }

    ~Node()
    {

    }

    void addEdge(char value);
    void removeEdge(char value);

    bool is_a_word_termination() { return is_a_word_; }

    typedef std::map<char, Node *> edgeMap;

    private:
    bool is_a_word_;
    
    edgeMap edges_; ///< edges to other nodes, key is the edge value.


};


#endif
