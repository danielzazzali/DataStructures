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

    /*
     * Constructor of linked list
     */
    LinkedList();

    /*
     * Destructor of linked list
     */
    ~LinkedList();

    /*
     * Push a new element in the front of the list
     */
    void pushFront(int data);

    /*
     * Push a new element in the back of the list
     */
    void pushBack(int data);

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
    bool contains(int element);

    /*
     * Delete the first element of value key inside the list
     */
    void deleteElement(int key);

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

#endif //DATASTRUCTURES_LINKEDLIST_H
