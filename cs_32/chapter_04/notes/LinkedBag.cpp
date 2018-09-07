//
// Created by Thomas Pan on 5/13/18.
//

#include "LinkedBag.h"

template<class ItemType>
LinkedBag<ItemType>::LinkedBag(): headPtr(nullptr), itemCount(0) {
}

template<class ItemType>
LinkedBag<ItemType>::LinkedBag(const LinkedBag<ItemType> &aBag) {
    itemCount = aBag.itemCount;
    Node<ItemType>* origChainPtr = aBag.headPtr;

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

template<class ItemType>
LinkedBag<ItemType>::~LinkedBag() {
    clear();
}

template<class ItemType>
bool LinkedBag<ItemType>::add(const ItemType &newEntry) {
    Node<ItemType>* newNodePtr = new Node<ItemType>(newEntry, headPtr);
    headPtr = newNodePtr;
    itemCount++;
    return true;
}

template<class ItemType>
bool LinkedBag<ItemType>::contains(const ItemType &anEntry) const {
    return getPointerTo(anEntry, headPtr) != nullptr;
}

template<class ItemType>
int LinkedBag<ItemType>::getCurrentSize() const {
    return itemCount;
}

template<class ItemType>
bool LinkedBag<ItemType>::isEmpty() const {
    return itemCount == 0;
}

template<class ItemType>
int LinkedBag<ItemType>::getFrequencyOf(const ItemType &anEntry) const {
    int frequency = 0;
    int counter = 0;
    Node<ItemType>* curPtr = headPtr;
    while ((curPtr != nullptr) && (counter < itemCount)) {
        if (curPtr->getItem() == anEntry) {
            frequency++;
        }
        counter++;
        curPtr = curPtr->getNext();
    }
    return frequency;
}

template<class ItemType>
bool LinkedBag<ItemType>::remove(const ItemType &anEntry) {
    Node<ItemType>* entryNodePtr = getPointerTo(anEntry, headPtr);
    bool canRemoveItem = !isEmpty() && (entryNodePtr != nullptr);
    if (canRemoveItem) {
        entryNodePtr->setItem(headPtr->getItem());

        Node<ItemType>* nodeToDeletePtr = headPtr;
        headPtr = headPtr->getNext();

        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = nullptr;

        itemCount--;
    }
    return canRemoveItem;
}

template<class ItemType>
Node<ItemType> *LinkedBag<ItemType>::getPointerTo(const ItemType &target, Node<ItemType>* curPtr) const {
    Node<ItemType>* result = nullptr;
    if (curPtr != nullptr) {
        if (target == curPtr->getItem()) {
            result = curPtr;
        } else {
            result = getPointerTo(target, curPtr->getNext());
        }
    }
    return result;
}

//template<class ItemType>
//Node<ItemType> *LinkedBag<ItemType>::getPointerTo(const ItemType &target) const {
//    bool found = false;
//    Node<ItemType>* curPtr = headPtr;
//    while (!found && (curPtr != nullptr)) {
//        if (target == curPtr->getItem()) {
//            found = true;
//        } else {
//            curPtr = curPtr->getNext();
//        }
//    }
//    return curPtr;
//}

template<class ItemType>
void LinkedBag<ItemType>::clear() {
    Node<ItemType>* nodeToDeletePtr = headPtr;
    while(headPtr != nullptr) {
        headPtr = headPtr->getNext();

        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = headPtr;
    }
    nodeToDeletePtr = nullptr;
    itemCount = 0;
}

//template<class ItemType>
//vector<ItemType> LinkedBag<ItemType>::toVector() const {
//    vector<ItemType> bagContents;
//    Node<ItemType>* curPtr = headPtr;
//    int counter = 0;
//    while ((curPtr != nullptr) && (counter < itemCount)) {
//        bagContents.push_back(curPtr->getItem());
//        curPtr = curPtr->getNext();
//        counter++;
//    }
//    return bagContents;
//}


template<class ItemType>
vector<ItemType> LinkedBag<ItemType>::toVector() const {
    vector<ItemType> bagContents;
    fillVector(bagContents, headPtr);
    return bagContents;
}

template<class ItemType>
void LinkedBag<ItemType>::fillVector(vector<ItemType> &bagContents, Node<ItemType> *curPtr) const {
    if (curPtr != nullptr) {
        bagContents.push_back(curPtr->getItem());
        fillVector(bagContents, curPtr->getNext());
    }
}
