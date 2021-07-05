//
// Created by fersolano on 6/28/2021.
//

#ifndef STACKANDQUEUE_NODE_H
#define STACKANDQUEUE_NODE_H


class Node {
public:
    Node();
    int getData();
    void seData(int data = 0);
    Node* getNext();
    void setNext(Node* next);
private:
    int data;
    Node* next;
};


#endif //STACKANDQUEUE_NODE_H
