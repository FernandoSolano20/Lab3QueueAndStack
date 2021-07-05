//
// Created by fersolano on 6/28/2021.
//

#ifndef STACKANDQUEUE_LIST_H
#define STACKANDQUEUE_LIST_H
#include<string>
#include "Node/Node.h"

using namespace std;

class List {
public:
    List();
    void showList();
    bool isEmpty();
    int getSize();
    int pop();
    virtual void push(int data) = 0;
protected:
    Node* getHead();
    void setHead(Node* node);
    void setSize(int num);
private:
    Node* head;
    int size;
};


#endif //STACKANDQUEUE_LIST_H
