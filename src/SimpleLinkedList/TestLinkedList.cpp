//
// Created by Daniel on 30-12-21.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){

    cout << "hey" << endl;

    LinkedList* list = new LinkedList();

    list->pushBack(11);
    list->pushFront(12);
    list->pushFront(13);
    list->pushFront(14);
    list->pushBack(177);
    list->pushFront(15);
    list->pushFront(16);
    list->pushBack(17);

    list->print();

    list->clear();

    list->print();

    return 0;
}