//
// Created by Daniel on 30-12-21.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

#include <Node.h>

using namespace std;

class LinkedList{

private:

    Node* first;
    Node* last;
    int theSize{};

public:

    LinkedList();

    ~LinkedList();

    void pushFront(int data);

    void pushBack(int data);

    int popFront();

    int popBack();

    void clear();

    bool empty();

    int size();

    void print();
};

#endif //DATASTRUCTURES_LINKEDLIST_H
