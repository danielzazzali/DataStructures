//
// Created by Daniel on 30-12-21.
//

#ifndef DATASTRUCTURES_DLNODE_H
#define DATASTRUCTURES_DLNODE_H

class Node{

private:

    int data;
    Node* next;

public:

    explicit Node(int data);

    ~Node();

    void setData(int data);

    void setNext(Node* next);

    bool hasNext();

    int getData();

    Node* getNext();

};


#endif //DATASTRUCTURES_DLNODE_H
