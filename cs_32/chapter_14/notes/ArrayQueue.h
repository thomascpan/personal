//
// Created by Thomas Pan on 5/26/18.
//

#ifndef NOTES_ARRAYQUEUE_H
#define NOTES_ARRAYQUEUE_H

#include "QueueInterface.h"
#include "ArrayList.h"
#include "PrecondViolatedExcept.h"

const int MAX_QUEUE = 50;

template<class ItemType>
class ArrayQueue : public QueueInterface<ItemType> {
private:
    ItemType items[MAX_QUEUE];
    int front;
    int back;
    int count;
public:
    ArrayQueue();
    ArrayQueue(const ArrayQueue<ItemType>& aQueue);
    virtual bool isEmpty() const;
    virtual bool enqueue(const ItemType &newEntry);
    virtual bool dequeue();
    virtual ItemType peekFront() const throw(PrecondViolatedExcept);
};

#include "ArrayQueue.cpp"
#endif //NOTES_ARRAYQUEUE_H
