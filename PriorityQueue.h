//
// Created by 97ozzy on 3/15/2023.
//

#ifndef PRIORITYQUEUE_PRIORITYQUEUE_H
#define PRIORITYQUEUE_PRIORITYQUEUE_H
#include <iostream>


class PriorityQueue {
private:
    void resize();
    int capacity;
    size_t size=0;
    int* array;
public:
    PriorityQueue(int capacity);
    ~PriorityQueue();
    void enqueue(int item);
    int dequeue();
    void print();
};


#endif //PRIORITYQUEUE_PRIORITYQUEUE_H
