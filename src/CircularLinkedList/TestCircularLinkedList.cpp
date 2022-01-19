//
// Created by daniel on 19-01-22.
//

#include "CircularLinkedList.h"
#include <iostream>

using namespace std;

int main() {

    CircularLinkedList *list = new CircularLinkedList();

    list->push(8);
    list->push(7);
    list->push(6);
    list->push(5);
    list->push(4);
    list->push(3);
    list->push(2);
    list->push(1);

    cout << "Size of the list: " << list->size() << endl;

    list->print();

    cout << "Pop: " << list->pop() << endl;

    cout << "Size of the list: " << list->size() << endl;

    list->print();

    cout << "Contains 2: " << list->contains(2) << endl;

    cout << "Deleting 2: " << list->deleteElement(2) << endl;

    cout << "Contains 2: " << list->contains(2) << endl;

    cout << "Contains 999: " << list->contains(999) << endl;

    cout << "Deleting 999: " << list->deleteElement(999) << endl;

    cout << "Contains 7: " << list->contains(7) << endl;

    cout << "Deleting 7: " << list->deleteElement(7) << endl;

    cout << "Contains 7: " << list->contains(7) << endl;

    cout << "Contains 8: " << list->contains(8) << endl;

    cout << "Deleting 8: " << list->deleteElement(8) << endl;

    cout << "Contains 8: " << list->contains(8) << endl;

    cout << "get 3th element: " << list->getKth(3) << endl;

    cout << "get 0th element: " << list->getKth(0) << endl;

    cout << "get 1th element: " << list->getKth(1) << endl;

    cout << "get 20th element: " << list->getKth(20) << endl;

    cout << "Size before removal: " << list->size() << endl;

    list->print();

    cout << "Clearing list..." << endl;

    list->clear();

    cout << "Size after removal: " << list->size() << endl;

    delete list;

    return 0;
}