//
// Created by Thomas Pan on 5/26/18.
//

#include "LinkedQueue.h"

template<class ItemType>
LinkedQueue<ItemType>::LinkedQueue() : frontPtr(nullptr), backPtr(nullptr) {
}

template<class ItemType>
LinkedQueue<ItemType>::LinkedQueue(const LinkedQueue &aQueue) {
}

template<class ItemType>
LinkedQueue<ItemType>::~LinkedQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}

template<class ItemType>
bool LinkedQueue<ItemType>::isEmpty() const {
    return frontPtr == nullptr;
}

template<class ItemType>
bool LinkedQueue<ItemType>::enqueue(const ItemType &newEntry) {
    Node<ItemType>* newNodePtr = new Node<ItemType>(newEntry);
    if (isEmpty()) {
        frontPtr = newNodePtr;
    } else {
        backPtr->setNext(newNodePtr);
    };
    backPtr = newNodePtr;
    return true;
}

template<class ItemType>
bool LinkedQueue<ItemType>::dequeue() {
    bool result = false;
    if (!isEmpty()) {
        Node<ItemType>* nodeToDeletePtr = frontPtr;
        if (frontPtr == backPtr) {
            frontPtr = nullptr;
            backPtr = nullptr;
        } else {
            frontPtr = frontPtr->getNext();
        }

        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = nullptr;
        result = true;
    }
    return result;
}

template<class ItemType>
ItemType LinkedQueue<ItemType>::peekFront() const throw(PrecondViolatedExcept) {
    if (isEmpty()) {
        throw(PrecondViolatedExcept("peekFront() called with an empty queue."));
    }
    return frontPtr->getItem();
}
