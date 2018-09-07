//
// Created by Thomas Pan on 5/13/18.
//

#ifndef LINKEDBAG_H
#define LINKEDBAG_H

#include "BagInterface.h"
#include "Node.h"

using namespace std;

template<class ItemType>
class LinkedBag : public BagInterface<ItemType> {
private:
    Node<ItemType>* headPtr;
    int itemCount;

    Node<ItemType>* getPointerTo(const ItemType &target, Node<ItemType>* curPtr) const;
    void fillVector(vector<ItemType>& bagContents, Node<ItemType>* curPtr) const;

public:
    LinkedBag();
    LinkedBag(const LinkedBag<ItemType>& aBag);
    virtual ~LinkedBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType &newEntry);
    bool remove(const ItemType &anEntry);
    void clear();
    int getFrequencyOf(const ItemType &anEntry) const;
    bool contains(const ItemType &anEntry) const;
    vector<ItemType> toVector() const;
};

#include "LinkedBag.cpp"
#endif //LINKEDBAG_H
