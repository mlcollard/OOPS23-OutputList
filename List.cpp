/*
    List.cpp

    Implementation for List node with output
*/

#include "List.hpp"
#include <iostream>

// constructor
List::List(Node* node)
    : nextNode(node)
{}

// next node
Node* List::next() const {

    return nextNode;
}

// current value
int List::value() const {

    return 0;
}

// process a visitor
void List::accept(NodeVisitor& visitor) {

    visitor.visit(this);
}

// destructor
List::~List() {

    // delete the rest of the list first
    if (nextNode)
        delete nextNode;
}
