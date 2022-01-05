//
// Created by Daniel on 04-01-22.
//

#include "DoubleLinkedList.h"
#include <iostream>

using namespace std;

int TestDoubleLinkedList(){

    DoubleLinkedList* list = new DoubleLinkedList();

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

    cout << "deleting 3..." << endl;

    list->deleteElement(3);

    cout << "Contains 3: " << list->contains(3) << endl;

    cout << "Contains 999: " << list->contains(999) << endl;

    cout << "get 4th element: " << list->getKth(4) << endl;

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