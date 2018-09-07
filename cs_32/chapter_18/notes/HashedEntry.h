//
// Created by Thomas Pan on 6/23/18.
//

#ifndef NOTES_HASHEDENTRY_H
#define NOTES_HASHEDENTRY_H

#include "Entry.h"

template <class KeyType, class ItemType>
class HashedEntry : public Entry<KeyType, ItemType> {
private:
    HashedEntry<KeyType, ItemType>* nextPtr;
public:
    HashedEntry();
    HashedEntry(ItemType newEntry, KeyType searchKey);
    HashedEntry(ItemType newEntry, KeyType searchKey, HashedEntry<KeyType, ItemType>* nextEntryPtr);

    void setNext(HashedEntry<KeyType, ItemType>* nextEntryPtr);
    HashedEntry<KeyType, ItemType>* getNext() const;
};

#include "HashedEntry.cpp"
#endif //NOTES_HASHEDENTRY_H
