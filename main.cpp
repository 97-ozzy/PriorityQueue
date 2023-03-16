#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main() {
    PriorityQueue q(5);
    q.add(30);
    q.add(20);
    q.add(10);
    q.add(60);
    q.add(500);
    q.add(80);
    q.remove();


    q.print();
    return 0;
}