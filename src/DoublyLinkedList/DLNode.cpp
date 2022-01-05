//
// Created by Daniel on 02-01-22.
//

#include "DLNode.h"

DLNode::DLNode(int data) {

    this->data = data;
    this->next = nullptr;
    this->previous = nullptr;
}

DLNode::~DLNode() {

}

void DLNode::setData(int data) {

    this->data = data;
}

void DLNode::setNext(DLNode *next) {

    this->next = next;
}

void DLNode::setPrevious(DLNode *previous) {

    this->previous = previous;
}

int DLNode::getData() {

    return data;
}

DLNode *DLNode::getNext() {

    return next;
}

DLNode *DLNode::getPrevious() {

    return previous;
}
