#include <iostream>
#include "ListQueue.h"
#include "LinkedQueue.h"
#include "ArrayQueue.h"

using namespace std;

int main() {

    QueueInterface<string>* queue = new ArrayQueue<string>();

    cout << "isEmpty: " << queue->isEmpty()
         << "; should be 1" << endl;

    cout << "enqueue: " << queue->enqueue("one")
         << "; should be 1" << endl;
    cout << "enqueue: " << queue->enqueue("two")
         << "; should be 1" << endl;
    cout << "enqueue: " << queue->enqueue("three")
         << "; should be 1" << endl;

    cout << "isEmpty: " << queue->isEmpty()
         << "; should be 0" << endl;

    cout << "peekFront: " << queue->peekFront()
         << "; should be one" << endl;
    cout << "dequeue: " << queue->dequeue()
         << "; should be 1" << endl;
    cout << "peekFront: " << queue->peekFront()
         << "; should be two" << endl;
    cout << "dequeue: " << queue->dequeue()
         << "; should be 1" << endl;
    cout << "peekFront: " << queue->peekFront()
         << "; should be three" << endl;
    cout << "dequeue: " << queue->dequeue()
         << "; should be 1" << endl;
    cout << queue->peekFront() << endl;

    cout << "isEmpty: " << queue->isEmpty()
         << "; should be 1" << endl;

    cout << "dequeue: " << queue->dequeue()
         << "; should be 0" << endl;

    return 0;
}