//
// Created by 97ozzy on 3/15/2023.
//

#include "PriorityQueue.h"
#include <iostream>

using namespace std;

PriorityQueue::PriorityQueue(int capacity) {
    array = new int[capacity];
    this->capacity = capacity;
}

PriorityQueue::~PriorityQueue() {
    delete[] array;
}

void PriorityQueue::enqueue(int item) {
    if (size == capacity) {
        resize();
    }
    if (size == 0) {
        array[0] = item;
        size++;
        return;
    }
    int i;
    for (i = size-1; i >= 0; i--) {
        if(item < array[i]) {
            array[i+1] = array[i];
        }
        else break;
    }
    array[i+1] = item;
    size++;
}

int PriorityQueue::dequeue() {
    if (size == 0) {
        throw runtime_error("Queue is empty");
    }
    int item = array[0];
    for (int i = 0; i < size-1; i++) {
        array[i] = array[i+1];
    }
    array[size] = 0;
    size--;
    return item;
}

void PriorityQueue::print() {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void PriorityQueue::resize() {
    size_t newCapacity = capacity * 2;
    int* newArr = new int[newCapacity];

    memcpy( newArr, array, size * sizeof(int) );

    capacity = newCapacity;
    delete [] array;
    array = newArr;
}
