//
// Created by Thomas Pan on 5/26/18.
//

#ifndef NOTES_LINKEDQUEUE_H
#define NOTES_LINKEDQUEUE_H
#include "QueueInterface.h"
#include "Node.h"
#include "PrecondViolatedExcept.h"

template<class ItemType>
class LinkedQueue : public QueueInterface<ItemType> {
private:
    Node<ItemType>* frontPtr;
    Node<ItemType>* backPtr;
public:
    LinkedQueue();
    LinkedQueue(const LinkedQueue& aQueue);
    virtual ~LinkedQueue();
    bool isEmpty() const;
    bool enqueue(const ItemType &newEntry);
    bool dequeue();
    ItemType peekFront() const throw(PrecondViolatedExcept);
};

#include "LinkedQueue.cpp"
#endif //NOTES_LINKEDQUEUE_H
