//
// Created by Thomas Pan on 5/26/18.
//

#ifndef NOTES_LISTQUEUE_H
#define NOTES_LISTQUEUE_H

#include "QueueInterface.h"
#include "LinkedList.h"
#include "PrecondViolatedExcept.h"

template<class ItemType>
class ListQueue : public QueueInterface<ItemType> {
private:
    LinkedList<ItemType>* listPtr;
public:
    ListQueue();
    ListQueue(const ListQueue& aQueue);
    virtual ~ListQueue();
    bool isEmpty() const;
    bool enqueue(const ItemType &newEntry);
    bool dequeue();
    ItemType peekFront() const throw(PrecondViolatedExcept);
};

#include "ListQueue.cpp"
#endif //NOTES_LISTQUEUE_H
