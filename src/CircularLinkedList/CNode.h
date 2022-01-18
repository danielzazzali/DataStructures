//
// Created by daniel on 18-01-22.
//

#ifndef DATASTRUCTURES_CNODE_H
#define DATASTRUCTURES_CNODE_H


class CNode {

private:

    int data;
    CNode* next;
    CNode* previous;

public:

    explicit CNode(int data);

    ~CNode();

    void setData(int data);

    void setNext(CNode* next);

    void setPrevious(CNode* previous);

    int getData();

    CNode* getNext();

    CNode* getPrevious();

};


#endif //DATASTRUCTURES_CNODE_H
