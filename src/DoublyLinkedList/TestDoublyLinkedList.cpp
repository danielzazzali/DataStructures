//
// Created by Daniel on 04-01-22.
//

#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

int TestDoublyLinkedList(){

    DoublyLinkedList* list = new DoublyLinkedList();

    //Push in back
    list->pushBack(5);
    list->pushBack(6);
    list->pushBack(7);
    list->pushBack(8);

    //Push in front
    list->pushFront(4);
    list->pushFront(3);
    list->pushFront(2);
    list->pushFront(1);

    cout << "Pop front: " << list->popFront() << endl;

    cout << "Pop back: " << list->popBack() << endl;

    cout << "Contains 3: " << list->contains(3) << endl;

    cout << "deleting 3: " << list->deleteElement(3) << endl;

    cout << "Contains 3: " << list->contains(3) << endl;

    cout << "Contains 999: " << list->contains(999) << endl;

    cout << "deleting 999: " << list->deleteElement(999) << endl;

    cout << "Contains 7: " << list->contains(7) << endl;

    cout << "deleting 7: " << list->deleteElement(7) << endl;

    cout << "Contains 7: " << list->contains(7) << endl;

    cout << "Contains 5: " << list->contains(5) << endl;

    cout << "deleting 5: " << list->deleteElement(5) << endl;

    cout << "Contains 5: " << list->contains(5) << endl;

    cout << "get 2th element: " << list->getKth(2) << endl;

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