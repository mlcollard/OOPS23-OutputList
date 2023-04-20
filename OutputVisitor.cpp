/*
    OutputVisitor.cpp

    Output operator for Node
*/

#include "OutputVisitor.hpp"
#include "Node.hpp"
#include "Leaf.hpp"
#include "List.hpp"
#include <iostream>
#include <exception>

// Node error exception
class NodeException : public std::exception {};

// Node output
void OutputVisitor::visit(Node* node) {

    throw NodeException();
}

// Leaf output
void OutputVisitor::visit(Leaf* leaf) {

    std::cout << leaf->value();
}

// List output
void OutputVisitor::visit(List* list) {

    // output the list nested in parentheses
    if (list->next()) {

        std::cout << "(";

        // output the rest of the list
        visit(list->next());

        std::cout << ")";
    }
}
