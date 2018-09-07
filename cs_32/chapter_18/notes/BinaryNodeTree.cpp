//
// Created by Thomas Pan on 6/9/18.
//

#include "BinaryNodeTree.h"



template<class ItemType>
int BinaryNodeTree<ItemType>::getHeightHelper(BinaryNode<ItemType> *subTreePtr) const {
    if (subTreePtr == nullptr) {
        return 0;
    } else {
        return 1 + max(getHeightHelper(subTreePtr->getLeftChildPtr()), getHeightHelper(subTreePtr->getRightChildPtr()));
    }
}

template<class ItemType>
int BinaryNodeTree<ItemType>::getNumberofNodesHelper(BinaryNode<ItemType> *subTreePtr) const {
    if (subTreePtr == nullptr) {
        return 0;
    } else {
        return getNumberofNodesHelper(subTreePtr->getLeftChildPtr()) + getNumberofNodesHelper(subTreePtr->getRightChildPtr());
    }
}

template<class ItemType>
void BinaryNodeTree<ItemType>::destroyTree(BinaryNode<ItemType> *subTreePtr) {
    if (subTreePtr != nullptr) {
        destroyTree(subTreePtr->getLeftChildPtr());
        destroyTree(subTreePtr->getRightChildPtr());
        delete subTreePtr;
    }
}

template<class ItemType>
BinaryNode<ItemType> *
BinaryNodeTree<ItemType>::balancedAdd(BinaryNode<ItemType> *subTreePtr, BinaryNode<ItemType> *newNodePtr) {
    if (subTreePtr == nullptr) {
        return newNodePtr;
    } else {
        BinaryNode<ItemType>* leftPtr = subTreePtr->getLeftChildPtr();
        BinaryNode<ItemType>* rightPtr = subTreePtr->getRightChildPtr();

        if (getHeightHelper(leftPtr) > getHeightHelper(rightPtr)) {
            rightPtr = balancedAdd(rightPtr, newNodePtr);
            subTreePtr->setRightChildPtr(rightPtr);
        } else {
            leftPtr = balancedAdd(leftPtr, newNodePtr);
            subTreePtr->setLeftChildPtr(leftPtr);
        }
        return subTreePtr;
    }
}

template<class ItemType>
BinaryNode<ItemType> *
BinaryNodeTree<ItemType>::removeValue(BinaryNode<ItemType> *subTreePtr, const ItemType target, bool &success) {
    return nullptr;
}

template<class ItemType>
BinaryNode<ItemType> *BinaryNodeTree<ItemType>::moveValuesUpTree(BinaryNode<ItemType> *subTreePtr) {
    return nullptr;
}

template<class ItemType>
BinaryNode<ItemType> *
BinaryNodeTree<ItemType>::findNode(BinaryNode<ItemType> *treePtr, const ItemType &target, bool &success) const {
    return nullptr;
}

template<class ItemType>
BinaryNode<ItemType> *BinaryNodeTree<ItemType>::copyTree(const BinaryNode<ItemType> *treePtr) const {
    BinaryNode<ItemType>* newTreePtr = nullptr;
    if (treePtr != nullptr) {
        newTreePtr = new BinaryNode<ItemType>(treePtr->getItem(), nullptr, nullptr);
        newTreePtr->setLeftChildPtr(copyTree(treePtr->getLeftChildPtr()));
        newTreePtr->setRightChildPtr(copyTree(treePtr->getRightChildPtr()));
    }
    return newTreePtr;
}

template<class ItemType>
void BinaryNodeTree<ItemType>::preorder(void (*visit)(ItemType &), BinaryNode<ItemType> *treePtr) const {
    if (treePtr != nullptr) {
        ItemType theItem = treePtr->getItem();
        visit(theItem);
        preorder(visit, treePtr->getLeftChildPtr());
        preorder(visit, treePtr->getRightChildPtr());
    }
}

template<class ItemType>
void BinaryNodeTree<ItemType>::inorder(void (*visit)(ItemType &), BinaryNode<ItemType> *treePtr) const {
    if (treePtr != nullptr) {
        inorder(visit, treePtr->getLeftChildPtr());
        ItemType theItem = treePtr->getItem();
        visit(theItem);
        inorder(visit, treePtr->getRightChildPtr());
    }
}

template<class ItemType>
void BinaryNodeTree<ItemType>::postorder(void (*visit)(ItemType &), BinaryNode<ItemType> *treePtr) const {
    postorder(visit, treePtr->getLeftChildPtr());
    postorder(visit, treePtr->getRightChildPtr());
    ItemType theItem = treePtr->getItem();
    visit(theItem);
}

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree() : rootPtr(nullptr) {
}

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree(const ItemType& rootItem) {
    rootPtr = new BinaryNode<ItemType>(rootItem, nullptr, nullptr);
}

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree(const ItemType& rootItem, const BinaryNodeTree<ItemType>* leftTreePtr,
                                         const BinaryNodeTree<ItemType> *rightTreePtr) {
    rootPtr = new BinaryNode<ItemType>(rootItem, copyTree(leftTreePtr->rootPtr), copyTree(rightTreePtr->rootPtr));
}

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree(const BinaryNodeTree<ItemType> &tree) {
    rootPtr = copyTree(tree.rootPtr);
}

template<class ItemType>
BinaryNodeTree<ItemType>::~BinaryNodeTree() {
    destroyTree(rootPtr);
}

template<class ItemType>
bool BinaryNodeTree<ItemType>::isEmpty() const {
    return false;
}

template<class ItemType>
int BinaryNodeTree<ItemType>::getHeight() const {
    return getHeightHelper(rootPtr);
}

template<class ItemType>
int BinaryNodeTree<ItemType>::getNumberOfNodes() const {
    return getNumberofNodesHelper(rootPtr);
}

template<class ItemType>
ItemType BinaryNodeTree<ItemType>::getRootData() const {
    return rootPtr->getItem();
}

template<class ItemType>
void BinaryNodeTree<ItemType>::setRootData(const ItemType &newData) {
    if (rootPtr != nullptr) {
        rootPtr->setItem(newData);
    } else {
        rootPtr = new BinaryNode<ItemType>(newData);
    }
}

template<class ItemType>
bool BinaryNodeTree<ItemType>::add(const ItemType &newData) {
    BinaryNode<ItemType>* newNodePtr = new BinaryNode<ItemType>(newData);
    rootPtr = balancedAdd(rootPtr, newNodePtr);
    return true;
}

template<class ItemType>
bool BinaryNodeTree<ItemType>::remove(const ItemType &data) {
    return false;
}

template<class ItemType>
void BinaryNodeTree<ItemType>::clear() {

}

template<class ItemType>
ItemType BinaryNodeTree<ItemType>::getEntry(const ItemType &anEntry) const {
    return nullptr;
}

template<class ItemType>
bool BinaryNodeTree<ItemType>::contains(const ItemType &anEntry) const {
    return false;
}

template<class ItemType>
void BinaryNodeTree<ItemType>::preoderTraverse(void (*visit)(ItemType &)) const {
    preorder(visit, rootPtr);
}

template<class ItemType>
void BinaryNodeTree<ItemType>::inoderTraverse(void (*visit)(ItemType &)) const {
    inorder(visit, rootPtr);
}

template<class ItemType>
void BinaryNodeTree<ItemType>::postoderTraverse(void (*visit)(ItemType &)) const {
    postorder(visit, rootPtr);
}

template<class ItemType>
BinaryNodeTree &BinaryNodeTree<ItemType>::operator=(const BinaryNodeTree &rightHandSide) {
    return <#initializer#>;
}
