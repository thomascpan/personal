//
// Created by Thomas Pan on 6/21/18.
//

#ifndef NOTES_DICTIONARYINTERFACE_H
#define NOTES_DICTIONARYINTERFACE_H

#include "PrecondViolatedExcept.h"

template<class KeyType, class ItemType>
class DictionaryInterface {
public:
    virtual bool isEmpty() const = 0;

    virtual int getNumberOfItems() const = 0;

    virtual bool add(const KeyType& searchKey, const ItemType& newItem) = 0;

    virtual bool remove(const KeyType& searchKey) = 0;

    virtual void clear() = 0;

    virtual ItemType getItem(const KeyType& searchKey) const throw(PrecondViolatedExcept) = 0;

    virtual bool contains(const KeyType &searchKey) const = 0;

    virtual void traverse(void visit(const ItemType&)) const = 0;
};

#endif //NOTES_DICTIONARYINTERFACE_H
