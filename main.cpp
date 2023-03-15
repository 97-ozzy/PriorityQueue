#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main() {
    PriorityQueue q(5);
    q.enqueue(30);
    q.enqueue(20);
    q.enqueue(10);
    q.enqueue(60);
    q.enqueue(500);
    q.enqueue(80);
    q.dequeue();


    q.print();
    return 0;
}
