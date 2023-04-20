/*
    OutputList.cpp

    Outputs a list
*/

#include "Leaf.hpp"
#include "List.hpp"
#include "OutputVisitor.hpp"
#include <iostream>

int main() {

    // build a list
    List list(new List(new List(new Leaf(1))));

    // output list
    OutputVisitor visitor;
    list.accept(visitor);
    std::cout << '\n';

    return 0;
}
