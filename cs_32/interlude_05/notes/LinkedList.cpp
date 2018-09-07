//
// Created by Thomas Pan on 5/19/18.
//

#include "LinkedList.h"

template<class ItemType>
LinkedList<ItemType>::LinkedList() : headPtr(nullptr), itemCount(0) {
}

template<class ItemType>
LinkedList<ItemType>::LinkedList(const LinkedList<ItemType> &aList) {
    copyListNodes(aList);
}

template<class ItemType>
LinkedList<ItemType>::~LinkedList() {
    clear();
}

template<class ItemType>
bool LinkedList<ItemType>::isEmpty() const {
    return itemCount == 0;
}

template<class ItemType>
int LinkedList<ItemType>::getLength() const {
    return itemCount;
}

template<class ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType &newEntry) {
    bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount+1);
    if (ableToInsert) {
        Node<ItemType>* newNodePtr = new Node<ItemType>(newEntry);
        headPtr = insertNode(newPosition, newNodePtr, headPtr);
    }
    return ableToInsert;
}

//template<class ItemType>
//bool LinkedList<ItemType>::insert(int newPosition, const ItemType &newEntry) {
//    bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount+1);
//    if (ableToInsert) {
//        Node<ItemType>* newNodePtr = new Node<ItemType>(newEntry);
//        if (newPosition == 1) {
//            newNodePtr->setNext(headPtr);
//            headPtr = newNodePtr;
//        } else {
//            Node<ItemType>* prevPtr = getNodeAt(newPosition-1);
//            newNodePtr->setNext(prevPtr->getNext());
//            prevPtr->setNext(newNodePtr);
//        }
//        itemCount++;
//    }
//    return ableToInsert;
//}

template<class ItemType>
bool LinkedList<ItemType>::remove(int position) {
    bool ableToRemove = (position >= 1) && (position <= itemCount);
    if (ableToRemove) {
        Node<ItemType>* curPtr = nullptr;
        if (position == 1) {
            curPtr = headPtr;
            headPtr = headPtr->getNext();
        } else {
            Node<ItemType>* prevPtr = getNodeAt(position-1);
            curPtr = prevPtr->getNext();
            prevPtr->setNext(curPtr->getNext());
        }
        curPtr->setNext(nullptr);
        delete curPtr;
        curPtr = nullptr;
        itemCount--;
    }
    return ableToRemove;
}

template<class ItemType>
void LinkedList<ItemType>::clear() {
    while (!isEmpty()) {
        remove(1);
    }
}

template<class ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcept) {
    bool ableToGet = (position >= 1) && (position <= itemCount);
    if (ableToGet) {
        Node<ItemType>* nodePtr = getNodeAt(position);
        return nodePtr->getItem();
    } else {
        string message = "getEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw(PrecondViolatedExcept(message));
    }
}

template<class ItemType>
void LinkedList<ItemType>::setEntry(int position, const ItemType &newEntry) throw(PrecondViolatedExcept) {

}

template<class ItemType>
Node<ItemType> *LinkedList<ItemType>::getNodeAt(int position) const {
    assert((position >= 1) && (position <= itemCount));

    Node<ItemType>* curPtr = headPtr;
    for (int skip = 1; skip < position; skip++) {
        curPtr = curPtr->getNext();
    }
    return curPtr;
}

template<class ItemType>
Node<ItemType>* LinkedList<ItemType>::insertNode(int position, Node<ItemType>* newNodePtr, Node<ItemType>* subChainPtr) {
    if (position == 1) {
        newNodePtr->setNext(subChainPtr);
        subChainPtr = newNodePtr;
        itemCount++;
    } else {
        Node<ItemType>* afterPtr = insertNode(position-1, newNodePtr, subChainPtr->getNext());
        subChainPtr->setNext(afterPtr);
    }
    return subChainPtr;
}

template<class ItemType>
bool LinkedList<ItemType>::operator==(const ListInterface<ItemType>& rightHandSide) const {
    bool isEqual = true;
    if (itemCount != rightHandSide.getLength()) {
        isEqual = false;
    } else {
        int index = 1;
        while (isEqual && (index < itemCount+1)) {
            isEqual = (getEntry(index) == rightHandSide.getEntry(index));
            index++;
        }
    }
    return isEqual;
}

template<class ItemType>
LinkedList<ItemType> &LinkedList<ItemType>::operator=(const LinkedList<ItemType> &rightHandSide) {
    if (this != &rightHandSide) {
        this->clear();
        copyListNodes(rightHandSide);
        itemCount = rightHandSide.itemCount;
    }
    return *this;
}

template<class ItemType>
void LinkedList<ItemType>::copyListNodes(const LinkedList<ItemType> &aList) {
    itemCount = aList.itemCount;
    Node<ItemType>* origChainPtr = aList.headPtr;

    if (origChainPtr == nullptr) {
        headPtr = nullptr;
    } else {
        headPtr = new Node<ItemType>(origChainPtr->getItem());

        Node<ItemType>* newChainPtr = headPtr;
        origChainPtr = origChainPtr->getNext();
        while (origChainPtr != nullptr) {
            ItemType nextItem = origChainPtr->getItem();

            Node<ItemType>* newNodePtr = new Node<ItemType>(nextItem);
            newChainPtr->setNext(newNodePtr);

            newChainPtr = newChainPtr->getNext();
            origChainPtr = origChainPtr->getNext();
        }
        newChainPtr->setNext(nullptr);
    }
}

template<class friendItemType>
ostream &operator<<(ostream &os, const LinkedList<friendItemType> &list) {
    int position = 1;
    Node<friendItemType>* curPtr = list.headPtr;
    while (curPtr != nullptr) {
        os << position << "\t" << curPtr->getItem() << endl;
        curPtr = curPtr->getNext();
        position++;
    }
    return os;
}
