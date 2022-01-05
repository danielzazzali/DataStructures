//
// Created by Daniel on 02-01-22.
//

#ifndef DATASTRUCTURES_DOUBLYLINKEDLIST_H
#define DATASTRUCTURES_DOUBLYLINKEDLIST_H

#include "DLNode.h"

class DoublyLinkedList {

private:

    DLNode *first;
    DLNode *last;
    int theSize;

public:

    /*
     * Constructor of doubly linked list
     */
    DoublyLinkedList();

    /*
     * Destructor of doubly linked list
     */
    ~DoublyLinkedList();

    /*
     * Push a new element in the front of the list
     */
    void pushFront(int element);

    /*
     * Push a new element in the back of the list
     */
    void pushBack(int element);

    /*
     * Delete and return the first element of the list
     */
    int popFront();

    /*
     * Delete and return the last element of the list
     */
    int popBack();

    /*
     * Return the Kth element of the list without deletion
     */
    int getKth(int k);

    /*
     * Return true if element is inside the list
     */
    bool contains(int key);

    /*
     * Delete the first element of value key inside the list, return true if successful
     */
    bool deleteElement(int key);

    /*
     * Delete all the elements of the list
     */
    void clear();

    /*
     * Return true if the list is empty
     */
    bool empty() const;

    /*
     * Return the number of elements in the list
     */
    int size() const;

    /*
     * Print the list from first to last
     */
    void print();
};


#endif //DATASTRUCTURES_DOUBLYLINKEDLIST_H
