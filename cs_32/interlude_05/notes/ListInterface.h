//
// Created by Thomas Pan on 5/19/18.
//

#ifndef LIST_INTERFACE_H
#define LIST_INTERFACE_H

template<class ItemType>
class ListInterface {
public:
    virtual bool isEmpty() const = 0;
    virtual int getLength() const = 0;
    virtual bool insert(int newPosition, const ItemType& newEntry) = 0;
    virtual bool remove(int position) = 0;
    virtual void clear() = 0;
    virtual ItemType getEntry(int position) const = 0;
    virtual void setEntry(int position, const ItemType& newEntry) = 0;
    virtual bool operator==(const ListInterface<ItemType>& rightHandSide) const = 0;
};

#endif //LIST_INTERFACE_H
