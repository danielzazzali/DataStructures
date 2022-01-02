//
// Created by daniel on 31-12-21.
//

#include <Node.h>

Node::Node(int data) {

    this->data = data;
    this->next = nullptr;
}

Node::~Node(){

}

void Node::setData(int data) {

    this->data = data;
}

void Node::setNext(Node *next) {

    this->next = next;
}

bool Node::hasNext() {

    return next != nullptr;
}

int Node::getData() {

    return data;
}

Node* Node::getNext() {

    return next;
}