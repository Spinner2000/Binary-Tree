#include "Node.hpp"
#include <stdlib.h>
#include <string>
#include <iostream>

Node::Node(int payload){
    this->payload=payload;
    this->leftChild=NULL;
    this->rightChild=NULL;
    this->header=NULL
}

int Node::getPayload(){
    return this->payload;
}

int Node::createTree(){
    if(header=NULL){
        header->getPayload();
    }

    if(this->payload<=header){
        if (this->leftChild=NULL)
        {
            this->leftChild->getPayload();
        }
        else{
            header=this->leftChild;
            createTree();
        }
    }

    if(this->payload>header){
        if (this->rightChild=NULL)
        {
            this->rightChild->getPayload();
        }
        else{
            header=this->rightChild;
            createTree();
        }
    }
}

void visitInOrder(){
    while (this->leftChild!=NULL)
    {
        std::cout<<this->leftChild<<endl;
    }

    std::cout<<this->header<<endl;

    while (this->rightChild!=NULL){
        std::cout<<this->rightChild<<endl;
    }
    
}