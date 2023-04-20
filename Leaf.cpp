/*
    Leaf.cpp

    Implementation for Leaf node with output
*/

#include "Leaf.hpp"
#include <iostream>

// constructor
Leaf::Leaf(int value)
    : nodeValue(value)
{}

// next node
Node* Leaf::next() const {
    return 0;
}

// process a visitor
void Leaf::accept(NodeVisitor& visitor) {

    visitor.visit(this);
}

// current value
int Leaf::value() const {
    return nodeValue;
}
