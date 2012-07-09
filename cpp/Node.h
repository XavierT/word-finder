
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

    // Removing a Node actually destroy all the subtree !
    ~Node()
    {
        for(edgeMap::iterator it = edges_.begin(); it != edges_.end(); ++it)
        {
            edges_.erase(it);
        }
    }

    void add_edge(char value);
    void remove_edge(char value);

    bool is_a_word_termination() { return is_a_word_; }
    void set_word_termination(bool value)  { is_a_word_ = value; }
    int  count_successor() {return edges_.size(); }
    Node * find_successor(char value);


    typedef std::map<char, Node *> edgeMap;

    private:
    bool is_a_word_;
    
    edgeMap edges_; ///< edges to other nodes, key is the edge value : a single character.


};


#endif
