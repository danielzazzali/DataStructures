//
// Created by daniel on 18-01-22.
//

#include "CNode.h"

CNode::CNode(int data) {

    this->data = data;
    this->next = nullptr;
    this->previous = nullptr;
}

CNode::~CNode() {

}

void CNode::setData(int data) {

    this->data = data;
}

void CNode::setNext(CNode *next) {

    this->next = next;
}

void CNode::setPrevious(CNode *previous) {

    this->previous = previous;
}

int CNode::getData() {

    return data;
}

CNode *CNode::getNext() {

    return next;
}

CNode *CNode::getPrevious() {

    return previous;
}
