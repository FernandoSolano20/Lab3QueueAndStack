//
// Created by fersolano on 6/28/2021.
//

#include "Node.h"

Node::Node() {
    setNext(nullptr);
}

int Node::getData() {
    return data;
}

void Node::seData(int data) {
    this->data = data;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node *next) {
    this->next = next;
}