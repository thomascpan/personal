//
// Created by Thomas Pan on 6/23/18.
//

#ifndef NOTES_TRINODE_H
#define NOTES_TRINODE_H

template <class ItemType>
class TriNode {
private:
    ItemType smallItem, largeItem;
    TriNode<ItemType>* leftChildPtr;
    TriNode<ItemType>* midChildPtr;
    TriNode<ItemType>* rightChildPtr;

public:
    TriNode();
    TriNode(const ItemType& anItem);
    TriNode(const ItemType& anItem, TriNode<ItemType>* leftPtr, TriNode<ItemType>* midPtr, TriNode<ItemType>* rightPtr);
    bool isLeaf() const;
    bool isTwoNode() const;
    bool isThreeNode() const;
    ItemType getSmallItem() const;
    ItemType getLargeItem() const;
    void setSmallItem(const ItemType& anItem);
    void setLargeItem(const ItemType& anItem);

    TriNode<ItemType> *getLeftChildPtr() const;
    TriNode<ItemType> *getMidChildPtr() const;
    TriNode<ItemType> *getRightChildPtr() const;

    void setLeftChildPtr(TriNode<ItemType> *leftPtr);
    void setMidChildPtr(TriNode<ItemType> *midPtr);
    void setRightChildPtr(TriNode<ItemType> *rightPtr);
};

#include "TriNode.cpp"
#endif //NOTES_TRINODE_H
