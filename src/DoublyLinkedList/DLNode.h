//
// Created by Daniel on 02-01-22.
//

#ifndef DATASTRUCTURES_DLNODE_H
#define DATASTRUCTURES_DLNODE_H


class DLNode {

private:

    int data;
    DLNode* next;
    DLNode* previous;

public:

    explicit DLNode(int data);

    ~DLNode();

    void setData(int data);

    void setNext(DLNode* next);

    void setPrevious(DLNode* previous);

    int getData();

    DLNode* getNext();

    DLNode* getPrevious();

};


#endif //DATASTRUCTURES_DLNODE_H
