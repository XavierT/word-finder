
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
        // check for self assignement ?
        std::map<char, Node *>::const_iterator i;

        is_a_word_ = OriginalNode.is_a_word_;

        for(i = OriginalNode.edges_.begin(); i != OriginalNode.edges_.end(); ++i)
        {
            edges_.insert(std::make_pair((*i).first, new Node(*(*i).second)));
        }

    }

    ~Node()
    {

    }

    void addEdge(char value);
    void removeEdge(char value);

    bool is_a_word_termination() { return is_a_word_; }

    private:
    bool is_a_word_;
    std::map<char,Node *> edges_; ///< edges to other nodes, key is the edge value.


};


#endif
