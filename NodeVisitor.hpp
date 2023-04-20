/*
    NodeVisitor.hpp

    Visitor for Node
*/

#ifndef INCLUDED_NODEVISITOR_HPP
#define INCLUDED_NODEVISITOR_HPP

class Node;
class Leaf;
class List;

class NodeVisitor {
public:

    // Node visit
    virtual void visit(Node* node) = 0;

    // Leaf visit
    virtual void visit(Leaf* leaf) = 0;

    // List visit
    virtual void visit(List* list) = 0;
};

#endif
