//
// Created by Thomas Pan on 5/26/18.
//

#include "ArrayQueue.h"
#include <iostream>

template<class ItemType>
ArrayQueue<ItemType>::ArrayQueue() : front(0), back(MAX_QUEUE-1), count(0) {
    cout << "ArrayQueue()" << endl;
}

template<class ItemType>
ArrayQueue<ItemType>::ArrayQueue(const ArrayQueue<ItemType>& aQueue) : front(aQueue.front), back(aQueue.back), count(aQueue.count) {
    cout << "ArrayQueue(const ArrayQueue<ItemType>& aQueue)" << endl;
    for (int i = 0; i < MAX_QUEUE; i++) {
        items[i] = aQueue.items[i];
        cout << items[i] << endl;
        cout << aQueue.items[i] << endl;
    }
}

template<class ItemType>
bool ArrayQueue<ItemType>::isEmpty() const {
    return count == 0;
}

template<class ItemType>
bool ArrayQueue<ItemType>::enqueue(const ItemType &newEntry) {
    bool result = false;
    if (count < MAX_QUEUE) {
        back = (back + 1) % MAX_QUEUE;
        items[back] = newEntry;
        count++;
        result = true;
    }
    return result;
}

template<class ItemType>
bool ArrayQueue<ItemType>::dequeue() {
    bool result = false;
    if (!isEmpty()) {
        front = (front + 1) % MAX_QUEUE;
        count--;
        result = true;
    }
    return result;
}

template<class ItemType>
ItemType ArrayQueue<ItemType>::peekFront() const throw(PrecondViolatedExcept){
    if (isEmpty()) {
        throw(PrecondViolatedExcept("peekFront() called with an empty queue."));
    }
    return items[front];
}
