//
// Created by Thomas Pan on 5/19/18.
//

#ifndef _LINKED_LIST
#define _LINKED_LIST

#include "ListInterface.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"
#include "LinkedIterator.h"

template<class ItemType>
class LinkedList : public ListInterface<ItemType> {
private:
    Node<ItemType>* headPtr;
    int itemCount;
    Node<ItemType>* getNodeAt(int position) const;
    Node<ItemType>* insertNode(int position, Node<ItemType>* newNodePtr, Node<ItemType>* subChainPtr);
public:
    LinkedList();
    LinkedList(const LinkedList<ItemType>& aList);
    virtual ~LinkedList();

    bool isEmpty() const;
    int getLength() const;
    bool insert(int newPosition, const ItemType& newEntry);
    bool remove(int position);
    void clear();
    ItemType getEntry(int position) const throw(PrecondViolatedExcep);
    void setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep);
    LinkedIterator<ItemType> begin();
    LinkedIterator<ItemType> end();
};

#include "LinkedList.cpp"
#endif //_LINKED_LIST
