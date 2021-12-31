//
// Created by Daniel on 30-12-21.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

#include <Node.h>

using namespace std;

class LinkedList{

private:

    Node* first;
    Node* last;
    int theSize{};

public:

    LinkedList();

    ~LinkedList();

    void pushFront(int data);

    void pushBack(int data);

    int popFront();

    int popBack();

    void clear();

    bool empty();

    int size();

    void print();
};

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

    if(this->empty()){
        return -1;

    } else {

        Node* aux = first;
        first = first->getNext();
        theSize--;
        int data = aux->getData();
        delete aux;
        return data;
    }

}

int LinkedList::popBack() {

    if(this->empty()){

        return -1;

    } else {

        Node* aux = first;

        if(theSize == 1){

            delete first;
            theSize--;
            return aux->getData();
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

    if(this->empty()){

        return;
    }

    Node* aux = first;

    if(theSize == 1){

        delete first;
        delete aux;
        theSize = 0;

    } else {

        for(int i = 0; i < theSize; i++){

            Node* aux = first->getNext();
            delete first;
            first = aux;
        }

    }

    theSize = 0;
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


#endif //DATASTRUCTURES_LINKEDLIST_H
