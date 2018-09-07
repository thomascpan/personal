//
// Created by Thomas Pan on 5/19/18.
//

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H
#include "ListInterface.h"
#include "PrecondViolatedExcept.h"

using namespace std;

template<class ItemType>
class ArrayList : public ListInterface<ItemType> {
private:
    static const int DEFAULT_CAPACITY = 100;
    ItemType items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;
public:
    ArrayList();
    bool isEmpty() const;
    int getLength() const;
    bool insert(int newPosition, const ItemType &newEntry);
    bool remove(int position);
    void clear();
    ItemType getEntry(int position) const throw(PrecondViolatedExcept);
    void setEntry(int position, const ItemType &newEntry) throw(PrecondViolatedExcept);
};

#include "ArrayList.cpp"
#endif //ARRAY_LIST_H
