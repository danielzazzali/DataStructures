//
// Created by daniel on 02-01-22.
//

#ifndef DATASTRUCTURES_DOUBLELINKEDLIST_H
#define DATASTRUCTURES_DOUBLELINKEDLIST_H

#include <DLNode.h>

class DoubleLinkedList {

private:

    DLNode *first;
    DLNode *last;
    int theSize;

public:

    DoubleLinkedList();

    ~DoubleLinkedList();

    void pushFront(int element);

    void PushBack(int element);

    int popFront();

    int popBack();

    int getKth(int k);

    bool contains(int key);

    void deleteElement(int element);

    void clear();

    bool empty() const;

    int size() const;

    void print();

};


#endif //DATASTRUCTURES_DOUBLELINKEDLIST_H
