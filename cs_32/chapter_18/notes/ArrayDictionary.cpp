//
// Created by Thomas Pan on 6/21/18.
//

#include <iostream>
#include "ArrayDictionary.h"
using std::cout;
using std::endl;

template<class KeyType, class ItemType>
void ArrayDictionary<KeyType, ItemType>::destroyDictionary() {
    delete [] items;
    items = nullptr;
}

template<class KeyType, class ItemType>
int ArrayDictionary<KeyType, ItemType>::findEntryIndex(int firstIndex, int lastIndex, const KeyType &searchKey) const {
    int mid = firstIndex + (lastIndex - firstIndex)/2;
    if (firstIndex <= lastIndex) {
        if (items[mid].getKey() == searchKey) {
            return mid;
        } else if (items[mid].getKey() < searchKey) {
            return findEntryIndex(mid+1, lastIndex, searchKey);
        } else {
            return findEntryIndex(firstIndex, mid-1, searchKey);
        }
    } else {
        return -1;
    }
}

template<class KeyType, class ItemType>
ArrayDictionary<KeyType, ItemType>::ArrayDictionary() : itemCount(0), maxItems(DEFAULT_CAPACITY) {
    items = new Entry<KeyType, ItemType>[maxItems];
}

template<class KeyType, class ItemType>
ArrayDictionary<KeyType, ItemType>::ArrayDictionary(int maxNumberOfEntries) : itemCount(0), maxItems(maxNumberOfEntries) {
    items = new Entry<KeyType, ItemType>[maxItems];
}

template<class KeyType, class ItemType>
ArrayDictionary<KeyType, ItemType>::ArrayDictionary(const ArrayDictionary<KeyType, ItemType> &dict) :
                                                    itemCount(dict.itemCount), maxItems(dict.maxItems) {
    for (int i = 0; i < itemCount; i++)
        items[i] = Entry<KeyType, ItemType>(dict.items[i].getKey(), dict.items[i].getItem());
}

template<class KeyType, class ItemType>
ArrayDictionary<KeyType, ItemType>::~ArrayDictionary() {
    destroyDictionary();
}

template<class KeyType, class ItemType>
bool ArrayDictionary<KeyType, ItemType>::isEmpty() const {
    return itemCount == 0;
}

template<class KeyType, class ItemType>
int ArrayDictionary<KeyType, ItemType>::getNumberOfItems() const {
    return itemCount;
}

template<class KeyType, class ItemType>
bool ArrayDictionary<KeyType, ItemType>::add(const KeyType &searchKey, const ItemType &newItem) {
    bool result = itemCount < maxItems;
    if (result) {
        int index = itemCount;

        while ((index > 0) && (searchKey < items[index-1].getKey())) {
            items[index] = items[index-1];
            index --;
        }
        items[index] = Entry<KeyType, ItemType>(newItem, searchKey);
        itemCount++;
    }
    return result;
}

// Stopped Here
template<class KeyType, class ItemType>
bool ArrayDictionary<KeyType, ItemType>::remove(const KeyType &searchKey) {
    bool result = (itemCount != 0);
    if (result) {
        int index = findEntryIndex(0, itemCount, searchKey);
        for (int i = index; i < itemCount; i++) {
            items[i] = items[i+1];
        }
        itemCount--;
    }

    return result;
}

template<class KeyType, class ItemType>
void ArrayDictionary<KeyType, ItemType>::clear() {
    destroyDictionary();
    items = new Entry<KeyType, ItemType>[maxItems];
    itemCount = 0;
}

template<class KeyType, class ItemType>
ItemType ArrayDictionary<KeyType, ItemType>::getItem(const KeyType &searchKey) const throw(PrecondViolatedExcept) {
    int index = findEntryIndex(0, itemCount, searchKey);
    if (index == -1) {
        throw PrecondViolatedExcept("ArrayDictionary does not contain " + searchKey);
    }
    return items[index].getItem();
}

template<class KeyType, class ItemType>
bool ArrayDictionary<KeyType, ItemType>::contains(const KeyType &searchKey) const {
    return findEntryIndex(0, itemCount, searchKey) != -1;
}

template<class KeyType, class ItemType>
void ArrayDictionary<KeyType, ItemType>::traverse(void visit(const ItemType &)) const {
    for (int i = 0; i < itemCount; i++) {
        visit(items[i].getItem());
    }
}
