//
// Created by fersolano on 6/28/2021.
//

#ifndef STACKANDQUEUE_CONTROLLER_H
#define STACKANDQUEUE_CONTROLLER_H


#include "../structures/List.h"

class Controller {
public:
    Controller();
    void addToStack(int data);
    void addToQueue(int data);
    void QueueToStack();
    void StackToQueue();
    void oneElementQueueToStack();
    void oneElementStackToQueue();
    List* getQueue();
    List* getStack();
private:
    List* queue;
    List* stack;
};


#endif //STACKANDQUEUE_CONTROLLER_H
