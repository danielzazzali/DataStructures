//
// Created by Daniel on 30-12-21.
//

#include <iostream>
#include "LinkedList.h"

int main(){

    cout << "Testing Linked List" << endl;

    LinkedList* list = new LinkedList();

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

    cout << "Size before removal: " << list->size() << endl;

    list->print();

    list->clear();

    cout << "Size after removal: " << list->size() << endl;

    list->print();

    return 0;
}