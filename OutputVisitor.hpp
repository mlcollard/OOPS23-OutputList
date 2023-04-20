/*
    OutputVisitor.hpp

    Output operator for Node
*/

#ifndef INCLUDED_OUTPUTVISITOR_HPP
#define INCLUDED_OUTPUTVISITOR_HPP

#include "NodeVisitor.hpp"

class OutputVisitor : public NodeVisitor {
public:

    // Node visit
    void visit(Node* node) override;

    // Leaf visit
    void visit(Leaf* leaf) override;

    // List visit
    void visit(List* list) override;
};

#endif
