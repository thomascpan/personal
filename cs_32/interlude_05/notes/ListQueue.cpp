//
// Created by Thomas Pan on 5/26/18.
//

#include "ListQueue.h"

template<class ItemType>
ListQueue<ItemType>::ListQueue() {
    listPtr = new LinkedList<ItemType>();
}

template<class ItemType>
ListQueue<ItemType>::ListQueue(const ListQueue &aQueue) : listPtr(aQueue.listPtr) {
}

template<class ItemType>
ListQueue<ItemType>::~ListQueue() {
}

template<class ItemType>
bool ListQueue<ItemType>::isEmpty() const {
    return listPtr->isEmpty();
}

template<class ItemType>
bool ListQueue<ItemType>::enqueue(const ItemType &newEntry) {
    int position = listPtr->getLength()+1;
    return listPtr->insert(position, newEntry);
}

template<class ItemType>
bool ListQueue<ItemType>::dequeue() {
    return listPtr->remove(1);
}

template<class ItemType>
ItemType ListQueue<ItemType>::peekFront() const throw(PrecondViolatedExcept) {
    if (isEmpty()) {
        throw(PrecondViolatedExcept("peekFront() called with an empty queue."));
    }
    return listPtr->getEntry(1);
}
