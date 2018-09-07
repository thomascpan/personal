//
// Created by Thomas Pan on 5/12/18.
//

#include "ArrayBag.h"

using namespace std;

template<class ItemType>
ArrayBag<ItemType>::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY) {
}

template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry)
{
    bool hasRoomToAdd = (itemCount < maxItems);
    if (!hasRoomToAdd)
    {
        ItemType* oldArray = items;
        items = new ItemType[2 * maxItems];
        for (int index = 0; index < maxItems; index++)
            items[index] = oldArray[index];
        delete [ ] oldArray;
        maxItems = 2 * maxItems;
    } // end if

    // We can always add the item
    items[itemCount] = newEntry;
    itemCount++;
    return true;
} // end ResizableArrayBag add

template<class ItemType>
vector<ItemType> ArrayBag<ItemType>::toVector() const {
    vector<ItemType> bagContents;
    for (int i = 0; i < itemCount; i++) {
        bagContents.push_back(items[i]);
    }

    return bagContents;
}


template<class ItemType>
int ArrayBag<ItemType>::getCurrentSize() const {
    return itemCount;
}

template<class ItemType>
bool ArrayBag<ItemType>::isEmpty() const {
    return itemCount == 0;
}

template<class ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType &theItem) const {
    int frequency = 0;
    int curIndex = 0;
    while (curIndex < itemCount) {
        if (items[curIndex] == theItem) {
            frequency++;
        }
        curIndex++;
    }

    return frequency;
}

template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType &anEntry) const {
    return getIndexOf(anEntry) > -1;
}

template<class ItemType>
bool ArrayBag<ItemType>::remove(const ItemType &anEntry) {
    int locatedIndex = getIndexOf(anEntry);
    bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
    if (canRemoveItem) {
        itemCount--;
        items[locatedIndex] = items[itemCount];
    }

    return canRemoveItem;
}


template<class ItemType>
int ArrayBag<ItemType>::getIndexOf(const ItemType &target) const {
    bool found = false;
    int result = -1;
    int searchIndex = 0;

    while (!found && (searchIndex < itemCount)) {
        if (items[searchIndex] == target) {
            found = true;
            result = searchIndex;
        } else {
            searchIndex++;
        }
    }
    return result;
}

template<class ItemType>
void ArrayBag<ItemType>::clear() {
    itemCount = 0;
}