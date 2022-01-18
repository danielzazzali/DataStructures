//
// Created by daniel on 18-01-22.
//

#ifndef DATASTRUCTURES_CIRCULARLINKEDLIST_H
#define DATASTRUCTURES_CIRCULARLINKEDLIST_H

#include "CNode.h"

class CircularLinkedList {

private:

    CNode *first;
    int theSize;

public:

    /*
     * Constructor of circular linked list
     */
    CircularLinkedList();

    /*
     * Destructor of circular linked list
     */
    ~CircularLinkedList();

    /*
     * Push a new element in the list at the first position
     */
    void push(int element);

    /*
     * Delete and return the first element in the list
     */
    int pop();

    /*
     * Return the Kth element of the list without deletion
     */
    int getKth(int k);

    /*
     * Return true if element is inside the list
     */
    bool contains(int element);

    /*
     * Delete the first element of value key inside the list, return true if succesfull
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


#endif //DATASTRUCTURES_CIRCULARLINKEDLIST_H
