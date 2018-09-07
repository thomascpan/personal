//
// Created by Thomas Pan on 6/23/18.
//

#include "TriNode.h"

template<class ItemType>
TriNode<ItemType>::TriNode() : leftChildPtr(nullptr), midChildPtr(nullptr), rightChildPtr(nullptr) {

}

template<class ItemType>
TriNode<ItemType>::TriNode(const ItemType &anItem)
        : smallItem(anItem), leftChildPtr(nullptr), midChildPtr(nullptr), rightChildPtr(nullptr) {

}

template<class ItemType>
TriNode<ItemType>::TriNode(const ItemType &anItem, TriNode<ItemType> *leftPtr, TriNode<ItemType> *midPtr, TriNode<ItemType> *rightPtr)
        : smallItem(anItem), leftChildPtr(leftPtr), midChildPtr(midPtr), rightChildPtr(rightPtr) {

}

template<class ItemType>
bool TriNode<ItemType>::isLeaf() const {
    return (leftChildPtr == nullptr && midChildPtr == nullptr && rightChildPtr == nullptr);
}

template<class ItemType>
bool TriNode<ItemType>::isTwoNode() const {
    return false;
}

template<class ItemType>
bool TriNode<ItemType>::isThreeNode() const {
    return false;
}

template<class ItemType>
ItemType TriNode<ItemType>::getSmallItem() const {
    return smallItem;
}

template<class ItemType>
ItemType TriNode<ItemType>::getLargeItem() const {
    return largeItem;
}

template<class ItemType>
void TriNode<ItemType>::setSmallItem(const ItemType &anItem) {
    smallItem = anItem;
}

template<class ItemType>
void TriNode<ItemType>::setLargeItem(const ItemType &anItem) {
    largeItem = anItem;
}

template<class ItemType>
TriNode<ItemType> *TriNode<ItemType>::getLeftChildPtr() const {
    return leftChildPtr;
}

template<class ItemType>
TriNode<ItemType> *TriNode<ItemType>::getMidChildPtr() const {
    return midChildPtr;
}

template<class ItemType>
TriNode<ItemType> *TriNode<ItemType>::getRightChildPtr() const {
    return rightChildPtr;
}

template<class ItemType>
void TriNode<ItemType>::setLeftChildPtr(TriNode<ItemType> *leftPtr) {
    leftChildPtr = leftPtr;
}

template<class ItemType>
void TriNode<ItemType>::setMidChildPtr(TriNode<ItemType> *midPtr) {
    midChildPtr = midPtr;
}

template<class ItemType>
void TriNode<ItemType>::setRightChildPtr(TriNode<ItemType> *rightPtr) {
    rightChildPtr = rightPtr;
}
