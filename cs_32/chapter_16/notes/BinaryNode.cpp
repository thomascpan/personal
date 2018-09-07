//
// Created by Thomas Pan on 6/9/18.
//

#include "BinaryNode.h"

template<class ItemType>
BinaryNode<ItemType>::BinaryNode() : leftChildPtr(nullptr), rightChildPtr(nullptr) {
}

template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType &anItem) : item(anItem), leftChildPtr(nullptr), rightChildPtr(nullptr) {

}

template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType &anItem, BinaryNode<ItemType> *leftPtr,
                                 BinaryNode<ItemType> *rightPtr): item(anItem), leftChildPtr(leftPtr), rightChildPtr(rightPtr) {

}

template<class ItemType>
void BinaryNode<ItemType>::setItem(const ItemType &anItem) {
    item = anItem;
}

template<class ItemType>
ItemType BinaryNode<ItemType>::getItem() const {
    return item;
}

template<class ItemType>
bool BinaryNode<ItemType>::isLeaf() const {
    return (getLeftChildPtr() == nullptr && getRightChildPtr() == nullptr);
}

template<class ItemType>
BinaryNode<ItemType> *BinaryNode<ItemType>::getLeftChildPtr() const {
    return leftChildPtr;
}

template<class ItemType>
BinaryNode<ItemType> *BinaryNode<ItemType>::getRightChildPtr() const {
    return rightChildPtr;
}

template<class ItemType>
void BinaryNode<ItemType>::setLeftChildPtr(BinaryNode<ItemType> *leftPtr) {
    leftChildPtr = leftPtr;
}

template<class ItemType>
void BinaryNode<ItemType>::setRightChildPtr(BinaryNode<ItemType> *rightPtr) {
    rightChildPtr = rightPtr;
}
