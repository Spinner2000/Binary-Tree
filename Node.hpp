#include <string>
#include <stdlib.h>

class Node{

    private:
        int payload;
        Node* header;
        Node* leftChild;
        Node* rightChild;

    public:
        int createTree();
        int getPayload();
        void visitInOrder();
        void visitPostOrder();
        void visitPreOrder();
        Node(int payload);
};