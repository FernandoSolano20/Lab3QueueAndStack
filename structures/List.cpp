//
// Created by fersolano on 6/28/2021.
//

#include <iostream>
#include "List.h"

List::List() {
    head= nullptr;
    size = 0;
}

void List::showList() {
    Node* aux = head;
    while (aux != nullptr) {
        cout << aux->getData() << endl;
        aux = aux->getNext();
    }
}

bool List::isEmpty() {
    if (getSize() == 0){
        return true;
    }
    return false;
}

int List::getSize() {
    return size;
}

void List::setSize(int num) {
    size = size + num;
}

Node* List::getHead() {
    return head;
}

int List::pop() {
    Node* aux = getHead();
    if (aux == nullptr) {
        return NULL;
    }
    setSize(-1);
    int data = aux->getData();
    setHead(aux->getNext());
    return data;
}

void List::setHead(Node *node) {
    head = node;
}