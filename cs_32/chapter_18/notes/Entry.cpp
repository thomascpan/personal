//
// Created by Thomas Pan on 6/21/18.
//

#include "Entry.h"



template<class KeyType, class ItemType>
void Entry<KeyType, ItemType>::setKey(const KeyType &newSearchKey) {
    searchKey = newSearchKey;
}

template<class KeyType, class ItemType>
Entry<KeyType, ItemType>::Entry() {

}

template<class KeyType, class ItemType>
Entry<KeyType, ItemType>::Entry(ItemType newEntry, KeyType newSearchKey) : item(newEntry), searchKey(newSearchKey) {

}

template<class KeyType, class ItemType>
ItemType Entry<KeyType, ItemType>::getItem() const {
    return item;
}

template<class KeyType, class ItemType>
KeyType Entry<KeyType, ItemType>::getKey() const {
    return searchKey;
}

template<class KeyType, class ItemType>
void Entry<KeyType, ItemType>::setItem(const ItemType &newEntry) {
    item = newEntry;
}

template<class KeyType, class ItemType>
bool Entry<KeyType, ItemType>::operator==(const Entry<KeyType, ItemType> &rightHandItem) const {
    return searchKey == rightHandItem.searchKey;
}

template<class KeyType, class ItemType>
bool Entry<KeyType, ItemType>::operator>(const Entry<KeyType, ItemType> &rightHandItem) const {
    return searchKey > rightHandItem.searchKey;
}
