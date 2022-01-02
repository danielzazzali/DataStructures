//
// Created by daniel on 31-12-21.
//

#include <LinkedList.h>
#include <iostream>

LinkedList::LinkedList() {

    this->first = nullptr;
    this->last = nullptr;
    this->theSize = 0;
}

LinkedList::~LinkedList() {

    this->clear();
}

void LinkedList::pushFront(int data) {

    Node* newNode = new Node(data);

    if(this->empty()){

        first = newNode;
        last = newNode;
        theSize++;

    } else {

        newNode->setNext(first);
        first = newNode;
        theSize++;
    }

}

void LinkedList::pushBack(int data) {

    Node* newNode = new Node(data);

    if(this->empty()){

        first = newNode;
        last = newNode;
        theSize++;

    } else {

        last->setNext(newNode);
        last = newNode;
        theSize++;
    }

}

int LinkedList::popFront() {

    int EMPTY_POP = -1;

    if(this->empty()){

        return EMPTY_POP;
    }

    Node* aux = first;
    first = first->getNext();
    theSize--;
    int data = aux->getData();
    delete aux;
    return data;
}

int LinkedList::popBack() {

    int EMPTY_POP = -1;

    if(this->empty()){

        return EMPTY_POP;

    }

    Node* aux = first;

    while(aux->getNext() != nullptr && aux->getNext()->hasNext()){

        aux = aux->getNext();
    }

    int data = last->getData();
    delete last;
    aux->setNext(nullptr);
    last = aux;
    theSize--;
    return data;
}

int LinkedList::getKth(int k) {

    int NON_VALID_POSITION = -1;

    if(theSize == 0 || k < 0 || k >= theSize){

        return NON_VALID_POSITION;
    }

    Node* aux = first;

    if(k == 0){

        return first->getData();

    } else {

        for(int i = 0; i < k; i++){

            aux = aux->getNext();
        }

        return aux->getData();
    }

}

bool LinkedList::contains(int element) {

    Node* aux = first;

    while(aux != nullptr){

        if(aux->getData() == element){
            return true;
        }

        aux = aux->getNext();
    }

    return false;
}

void LinkedList::deleteElement(int x) {

    Node* current = first;
    Node* previous = nullptr;

    if(theSize == 0){
        return;
    }

    if(first->getData() == x){

        delete first;
        first = nullptr;
        last = nullptr;
        theSize--;
        return;
    }

    while(current != nullptr && current->getData() != x){

        previous = current;
        current = current->getNext();
    }

    if(current == nullptr){

        return;
    }

    if(!current->hasNext()){

        previous->setNext(nullptr);
        delete current;
        theSize--;
        return;
    }

    previous->setNext(current->getNext());
    delete current;
    theSize--;
}

void LinkedList::clear() {

    while(!this->empty()){

        this->popFront();
    }

}

bool LinkedList::empty() const {

    return theSize == 0;
}

int LinkedList::size() const {

    return theSize;
}

void LinkedList::print() {

    Node* aux = first;

    while(aux != nullptr){

        cout << aux->getData() << endl;
        aux = aux->getNext();
    }

}
