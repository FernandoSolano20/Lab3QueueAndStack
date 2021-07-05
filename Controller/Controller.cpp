//
// Created by fersolano on 6/28/2021.
//

#include "Controller.h"
#include "../structures/Stack/Stack.h"
#include "../structures/Queue/Queue.h"

Controller::Controller() {
    queue = new Queue();
    stack = new Stack();
}

void Controller::addToStack(int data) {
    stack->push(data);
}

void Controller::QueueToStack() {
    while (queue->getSize() != 0){
        int head = queue->pop();
        stack->push(head);
    }
}

void Controller::addToQueue(int data) {
    queue->push(data);
}

void Controller::StackToQueue() {
    while (stack->getSize() != 0){
        int head = stack->pop();
        queue->push(head);
    }
}

void Controller::oneElementQueueToStack() {
    if (queue->getSize() != 0){
        int head = queue->pop();
        stack->push(head);
    }
}

void Controller::oneElementStackToQueue() {
    if (stack->getSize() != 0){
        int head = stack->pop();
        queue->push(head);
    }
}

List* Controller::getQueue() {
    return queue;
}

List* Controller::getStack() {
    return stack;
}