//
// Created by daniel on 18-01-22.
//

#include "CircularLinkedList.h"
#include <iostream>

using namespace std;

CircularLinkedList::CircularLinkedList() {

    this->first = nullptr;
    this->theSize = 0;
}

CircularLinkedList::~CircularLinkedList() {

    this->clear();
}

void CircularLinkedList::push(int element) {

    CNode* newNode = new CNode(element);

    if(this->empty()){

        first = newNode;
        first->setNext(first);
        first->setPrevious(first);
        theSize++;

    } else {

        if(theSize == 1){

            newNode->setNext(first);
            newNode->setPrevious(first);
            first->setPrevious(newNode);
            first->setNext(newNode);
            first = newNode;
            theSize++;

        } else {

            newNode->setNext(first);
            first->getPrevious()->setNext(newNode);
            newNode->setPrevious(first->getPrevious());
            first->setPrevious(newNode);
            first = newNode;
            theSize++;
        }

    }

}

int CircularLinkedList::pop() {

    int EMPTY_POP = -1;

    if(this->empty()){

        return EMPTY_POP;
    }

    if(theSize == 1){

        int data = first->getData();
        theSize--;
        delete first;
        first = nullptr;
        return data;

    } else {

        CNode* aux = first;
        int data = aux->getData();

        first->getPrevious()->setNext(first->getNext());
        first->getNext()->setPrevious(first->getPrevious());

        first = first->getNext();
        delete aux;
        theSize--;
        return data;
    }

}

int CircularLinkedList::getKth(int k) {

    int NON_VALID_POSITION = -1;

    if(theSize == 0 || k < 0 || k >= theSize){

        return NON_VALID_POSITION;
    }

    CNode* aux = first;

    if(k == 0){

        return first->getData();

    } else {

        for(int i = 0; i < k; i++){

            aux = aux->getNext();
        }

        return aux->getData();
    }
}

bool CircularLinkedList::contains(int element) {

    CNode* aux = first;

    for(int i = 0; i < theSize; i++){

        if(aux->getData() == element){

            return true;

        } else {

            aux = aux->getNext();
        }

    }

    return false;
}

bool CircularLinkedList::deleteElement(int key) {

    if(first != nullptr){

        CNode* current = first;

        while(current->getNext() != first && current->getData() != key){

            current = current->getNext();
        }

        if(current->getData() != key){

            return false;
        }

        if(current == first){

            current->getNext()->setPrevious(current->getPrevious());
            current->getPrevious()->setNext(current->getNext());
            first = current->getNext();
            delete current;
            theSize--;
            return true;

        } else {

            current->getNext()->setPrevious(current->getPrevious());
            current->getPrevious()->setNext(current->getNext());
            delete current;
            theSize--;
            return true;

        }

    }

    return false;
}

void CircularLinkedList::clear() {

    while(!this->empty()){

        this->pop();
    }

}

bool CircularLinkedList::empty() const {

    return theSize == 0;
}

int CircularLinkedList::size() const {

    return theSize;
}

void CircularLinkedList::print() {


    if(this->empty()){

        return;
    }

    CNode* aux = first;

    while(aux->getNext() != first){

        cout << aux->getData() << endl;
        aux = aux->getNext();
    }

    cout << aux->getData() << endl;

}
