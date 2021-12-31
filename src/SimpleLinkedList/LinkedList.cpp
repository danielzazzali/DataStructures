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

    } else {

        Node* aux = first;

        if(theSize == 1){

            delete first;
            theSize--;
            int data = aux->getData();
            delete aux;
            return data;
        }

        while(aux->getNext()->hasNext()){

            aux = aux->getNext();
        }

        Node* toReturn = last;
        aux->setNext(nullptr);
        last = aux;
        theSize--;
        int data = toReturn->getData();
        delete toReturn;
        return data;
    }

}

void LinkedList::clear() {

    while(!this->empty()){

        this->popFront();
    }

}

bool LinkedList::empty() {

    return theSize == 0;
}

int LinkedList::size() {

    return theSize;
}

void LinkedList::print() {

    Node* aux = first;

    while(aux != nullptr){

        cout << aux->getData() << endl;
        aux = aux->getNext();
    }

}