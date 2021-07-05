//
// Created by fersolano on 6/28/2021.
//

#include "Stack.h"
Stack::Stack():List() {

}

void Stack::push(int data) {
    setSize(1);
    Node* temp = new Node();
    temp->seData(data);
    if(getHead() == nullptr) {
        setHead(temp);
    } else {
        temp->setNext(getHead());
        setHead(temp);
    }
}
