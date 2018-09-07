//
// Created by Thomas Pan on 6/21/18.
//

#ifndef NOTES_ENTRY_H
#define NOTES_ENTRY_H

template<class KeyType, class ItemType>
class Entry {
private:
    ItemType item;
    KeyType searchKey;

protected:
    void setKey(const KeyType& searchKey);

public:
    Entry();
    Entry(ItemType newEntry, KeyType searchKey);
    ItemType getItem() const;
    KeyType getKey() const;
    void setItem(const ItemType& newEntry);

    bool operator==(const Entry<KeyType, ItemType>& rightHandItem) const;
    bool operator>(const Entry<KeyType, ItemType>& rightHandItem) const;
};

#include "Entry.cpp"
#endif //NOTES_ENTRY_H
