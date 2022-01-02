//
// Created by daniel on 02-01-22.
//

#include "DoubleLinkedList.h"
#include <iostream>

using namespace std;

DoubleLinkedList::DoubleLinkedList() {

    this->first = nullptr;
    this->last = nullptr;
    this->theSize = 0;
}

DoubleLinkedList::~DoubleLinkedList() {

    this->clear();
}

void DoubleLinkedList::pushFront(int element) {

    DLNode* newNode = new DLNode(element);

    if(this->empty()){

        first = newNode;
        last = newNode;
        theSize++;

    } else {

        newNode->setNext(first);
        first->setPrevious(newNode);
        first = newNode;
        theSize++;
    }

}

void DoubleLinkedList::PushBack(int element) {

    DLNode* newNode = new DLNode(element);

    if(this->empty()){

        first = newNode;
        last = newNode;
        theSize++;

    } else {

        last->setNext(newNode);
        newNode->setPrevious(last);
        last = newNode;
        theSize++;

    }

}

int DoubleLinkedList::popFront() {

    int EMPTY_POP = -1;

    if(this->empty()){

        return EMPTY_POP;
    }

    DLNode* aux = first;
    first = first->getNext();
    first->setPrevious(nullptr);
    theSize--;
    int data = aux->getData();
    delete aux;
    return data;
}

int DoubleLinkedList::popBack() {

    int EMPTY_POP = -1;

    if(this->empty()){

        return EMPTY_POP;
    }

    DLNode* aux = last;
    last = last->getPrevious();
    last->setNext(nullptr);
    theSize--;
    int data = aux->getData();
    delete aux;
    return data;
}

//TODO getKth, contains, deleteElement.

int DoubleLinkedList::getKth(int k) {
    return 0;
}

bool DoubleLinkedList::contains(int key) {
    return false;
}

void DoubleLinkedList::deleteElement(int element) {

}

void DoubleLinkedList::clear() {

    while(!this->empty()){

        this->popFront();
    }
}

bool DoubleLinkedList::empty() const {

    return theSize == 0;
}

int DoubleLinkedList::size() const {

    return theSize;
}

void DoubleLinkedList::print() {

    DLNode* aux = first;

    while(aux != nullptr){

        cout << aux->getData() << endl;
        aux = aux->getNext();
    }
}
