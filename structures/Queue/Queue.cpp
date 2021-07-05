//
// Created by fersolano on 6/28/2021.
//

#include "Queue.h"

Queue::Queue():List() {

}

void Queue::push(int data) {
    setSize(1);
    Node*aux = getHead();
    Node* temp = new Node();
    temp->seData(data);
    if (aux == nullptr) {
        setHead(temp);
    } else{
        while (aux->getNext() != nullptr) {
            aux = aux->getNext();
        }
        aux->setNext(temp);
        temp->setNext(nullptr);
    }
}