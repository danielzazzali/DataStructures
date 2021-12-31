//
// Created by Daniel on 30-12-21.
//

#ifndef DATASTRUCTURES_NODE_H
#define DATASTRUCTURES_NODE_H

using namespace std;

class Node{

private:

    int data;
    Node* next;

public:

    Node(int data);

    ~Node();

    void setData(int data);

    void setNext(Node* next);

    bool hasNext();

    int getData();

    Node* getNext();

};

Node::Node(int data) {

    this->data = data;
    this->next = nullptr;
}

Node::~Node(){

    cout << "deleting Node" << endl;

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


Node *Node::getNext() {
    return next;
}


#endif //DATASTRUCTURES_NODE_H
