//
// Created by Thomas Pan on 6/23/18.
//

#include "HashedEntry.h"

template<class KeyType, class ItemType>
HashedEntry<KeyType, ItemType>::HashedEntry() {

}

template<class KeyType, class ItemType>
HashedEntry<KeyType, ItemType>::HashedEntry(ItemType newEntry, KeyType searchKey):Entry(newEntry, searchKey) {

}

template<class KeyType, class ItemType>
HashedEntry<KeyType, ItemType>::HashedEntry(ItemType newEntry, KeyType searchKey,
                                            HashedEntry<KeyType, ItemType> *nextEntryPtr) {

}

template<class KeyType, class ItemType>
void HashedEntry<KeyType, ItemType>::setNext(HashedEntry<KeyType, ItemType> *nextEntryPtr) {

}

template<class KeyType, class ItemType>
HashedEntry<KeyType, ItemType> *HashedEntry<KeyType, ItemType>::getNext() const {
    return nullptr;
}
