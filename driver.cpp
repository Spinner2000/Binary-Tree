#include <iostream>
#include "Node.hpp"

using namespace std;

int main(int argc, char** argv)
{
    Node* n =new Node();

    n->createTree(1);
    n->createTree(5);
    n->createTree(0);
    n->createTree(9);

    n->visitInOrder();

    return 0;
}