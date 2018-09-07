//
// Created by Thomas Pan on 5/19/18.
//

#include "ArrayList.h"

using namespace std;

template<class ItemType>
ArrayList<ItemType>::ArrayList(): itemCount(0), maxItems(DEFAULT_CAPACITY) {
}

template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const {
    return itemCount == 0;
}

template<class ItemType>
int ArrayList<ItemType>::getLength() const {
    return itemCount;
}

template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType &newEntry) {
    bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount+1) && (itemCount < maxItems);
    if (ableToInsert) {
        for (int pos = itemCount; pos >= newPosition; pos--) {
            items[pos] = items[pos-1];
        }
        items[newPosition-1] = newEntry;
        itemCount++;
    }
    return ableToInsert;
}

template<class ItemType>
bool ArrayList<ItemType>::remove(int position) {
    bool ableToRemove = (position >= 1) && (position <= itemCount);
    if (ableToRemove) {
        for (int fromIndex = position, toIndex = fromIndex-1; fromIndex < itemCount; fromIndex++, toIndex++) {
            items[toIndex] = items[fromIndex];
        }
        itemCount--;
    }
    return ableToRemove;
}

template<class ItemType>
void ArrayList<ItemType>::clear() {
    itemCount = 0;
}

template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcept) {
    bool ableToGet = (position >= 1) && (position <= itemCount);
    if (ableToGet) {
        return items[position-1];
    } else {
        string message = "getEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw(PrecondViolatedExcept(message));
    }
}

template<class ItemType>
void ArrayList<ItemType>::setEntry(int position, const ItemType &newEntry) throw(PrecondViolatedExcept) {
    bool ableToSet = (position >= 1) && (position <= itemCount);
    if (ableToSet) {
        items[position-1] = newEntry;
    } else {
        string message = "setEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw(PrecondViolatedExcept(message));
    }
}
