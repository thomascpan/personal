//
// Created by Thomas Pan on 6/21/18.
//

#ifndef NOTES_ARRAYDICTIONARY_H
#define NOTES_ARRAYDICTIONARY_H

#include "DictionaryInterface.h"
#include "Entry.h"
#include "PrecondViolatedExcept.h"

template <class KeyType, class ItemType>
class ArrayDictionary : public DictionaryInterface<KeyType, ItemType> {
private:
    static const int DEFAULT_CAPACITY = 21;
    Entry<KeyType, ItemType>* items;
    int itemCount;
    int maxItems;

    void destroyDictionary();
    int findEntryIndex(int firstIndex, int lastIndex, const KeyType& searchKey) const;

public:
    ArrayDictionary();
    ArrayDictionary(int maxNumberOfEntries);
    ArrayDictionary(const ArrayDictionary<KeyType, ItemType>& dict);

    virtual ~ArrayDictionary();

    bool isEmpty() const;

    int getNumberOfItems() const;

    bool add(const KeyType &searchKey, const ItemType &newItem);

    bool remove(const KeyType &searchKey);

    void clear();

    ItemType getItem(const KeyType &searchKey) const throw(PrecondViolatedExcept);

    bool contains(const KeyType &searchKey) const;

    void traverse(void visit(const ItemType &)) const;
};

#include "ArrayDictionary.cpp"
#endif //NOTES_ARRAYDICTIONARY_H
