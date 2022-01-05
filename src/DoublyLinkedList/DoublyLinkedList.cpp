//
// Created by Daniel on 02-01-22.
//

#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList() {

    this->first = nullptr;
    this->last = nullptr;
    this->theSize = 0;
}

DoublyLinkedList::~DoublyLinkedList() {

    this->clear();
}

void DoublyLinkedList::pushFront(int element) {

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

void DoublyLinkedList::pushBack(int element) {

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

int DoublyLinkedList::popFront() {

    int EMPTY_POP = -1;

    if(this->empty()){

        return EMPTY_POP;
    }

    if(theSize == 1){

        int data = first->getData();
        theSize--;
        delete first;
        last = nullptr;
        first = nullptr;
        return data;
    }

    DLNode* aux = first;
    first = first->getNext();
    first->setPrevious(nullptr);
    theSize--;
    int data = aux->getData();
    delete aux;
    return data;
}

int DoublyLinkedList::popBack() {

    int EMPTY_POP = -1;

    if(this->empty()){

        return EMPTY_POP;
    }

    if(theSize == 1){

        int data = first->getData();
        theSize--;
        delete first;
        last = nullptr;
        first = nullptr;
        return data;
    }

    DLNode* aux = last;
    last = last->getPrevious();
    last->setNext(nullptr);
    theSize--;
    int data = aux->getData();
    delete aux;
    return data;
}

int DoublyLinkedList::getKth(int k) {

    int NON_VALID_POSITION = -1;

    if(theSize == 0 || k < 0 || k >= theSize){

        return NON_VALID_POSITION;
    }

    DLNode* aux = first;

    if(k == 0){

        return first->getData();

    } else {

        for(int i = 0; i < k; i++){

            aux = aux->getNext();
        }

        return aux->getData();
    }

}

bool DoublyLinkedList::contains(int key) {

    DLNode* aux = first;

    while(aux != nullptr){

        if(aux->getData() == key){
            return true;
        }

        aux = aux->getNext();
    }

    return false;
}

bool DoublyLinkedList::deleteElement(int element) {

    if(first != nullptr){

        DLNode* current = first;

        while(current != nullptr && current->getData() != element){

            current = current->getNext();
        }

        if(current == nullptr){

            return false;
        }

        if(current->getPrevious() == nullptr){

            first = first->getNext();
            theSize--;
            delete current;
            return true;

        } else if(current->getNext() == nullptr){

            last = current->getPrevious();
            current->getPrevious()->setNext(current->getNext());
            theSize--;
            delete current;
            return true;

        } else {

            current->getPrevious()->setNext(current->getNext());
            theSize--;
            delete current;
            return true;
        }

    }

    return false;
}

void DoublyLinkedList::clear() {

    while(!this->empty()){

        this->popFront();
    }

}

bool DoublyLinkedList::empty() const {

    return theSize == 0;
}

int DoublyLinkedList::size() const {

    return theSize;
}

void DoublyLinkedList::print() {

    DLNode* aux = first;

    while(aux != nullptr){

        cout << aux->getData() << endl;
        aux = aux->getNext();
    }
}
