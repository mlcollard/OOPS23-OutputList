/*
    Node.hpp

    Base node with output
*/

#ifndef INCLUDED_NODE_HPP
#define INCLUDED_NODE_HPP

#include "NodeVisitor.hpp"

// @pattern Composite @role Component
class Node {
public:

    // next node
    virtual Node* next() const = 0;

    // current value
    virtual int value() const = 0;

    // process a visitor
    virtual void accept(NodeVisitor&) = 0;

    // destructor
    virtual ~Node() = default;
};

#endif
