//
// Created by daniel on 18-01-22.
//

#include "CircularLinkedList.h"

CircularLinkedList::CircularLinkedList() {

    this->first = nullptr;
    this->theSize = 0;
}

CircularLinkedList::~CircularLinkedList() {

    this->clear();
}

void CircularLinkedList::push(int element) {

    CNode* newNode = new CNode(element);

    if(first == nullptr){

        first = newNode;
        first->setNext(first);
        first->setPrevious(first);
        theSize++;

    } else {

        CNode* aux = first;

        while(aux->getNext() != first){

            aux = aux->getNext();
        }

        if(aux == first){

            first->setNext(newNode);
            newNode->setPrevious(first);
            first->setPrevious(newNode);
            newNode->setNext(first);
            theSize++;

        } else {

            aux->setNext(newNode);
            newNode->setPrevious(aux);
            first->setPrevious(newNode);
            newNode->setNext(first);
            theSize++;
        }

    }

}

int CircularLinkedList::pop() {

    return 0;
}

int CircularLinkedList::getKth(int k) {

    return 0;
}

bool CircularLinkedList::contains(int element) {

    return false;
}

bool CircularLinkedList::deleteElement(int key) {

    return false;
}

void CircularLinkedList::clear() {

}

bool CircularLinkedList::empty() const {

    return theSize == 0;
}

int CircularLinkedList::size() const {

    return theSize;
}

void CircularLinkedList::print() {

}
