//
// Created by Thomas Pan on 6/9/18.
//

#include "BinarySearchTree.h"

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree() {

}

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(const ItemType &rootItem):BinaryNodeTree(rootItem) {

}

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(const ItemType &rootItem, const BinaryNodeTree<ItemType> *leftTreePtr,
                                             const BinaryNodeTree<ItemType> *rightTreePtr):BinaryNodeTree(rootItem,
                                                                                                          leftTreePtr,
                                                                                                          rightTreePtr) {

}

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(const BinaryNodeTree<ItemType> &tree):BinaryNodeTree(tree) {

}

template<class ItemType>
BinarySearchTree<ItemType>::~BinarySearchTree() {

}

template<class ItemType>
bool BinarySearchTree<ItemType>::isEmpty() const {
    return BinaryNodeTree::isEmpty();
}

template<class ItemType>
int BinarySearchTree<ItemType>::getHeight() const {
    return BinaryNodeTree::getHeight();
}

template<class ItemType>
int BinarySearchTree<ItemType>::getNumberOfNodes() const {
    return BinaryNodeTree::getNumberOfNodes();
}

template<class ItemType>
ItemType BinarySearchTree<ItemType>::getRootData() const {
    return BinaryNodeTree::getRootData();
}

template<class ItemType>
void BinarySearchTree<ItemType>::setRootData(const ItemType &newData) {
    BinaryNodeTree::setRootData(newData);
}

template<class ItemType>
bool BinarySearchTree<ItemType>::add(const ItemType &newData) {
    BinaryNode<ItemType>* newNodePtr = new BinaryNode<ItemType>(newData);
    rootPtr = insertInorder(rootPtr, newNodePtr);
    return true;
}

template<class ItemType>
bool BinarySearchTree<ItemType>::remove(const ItemType &data) {
    return BinaryNodeTree::remove(data);
}

template<class ItemType>
void BinarySearchTree<ItemType>::clear() {
    BinaryNodeTree::clear();
}

template<class ItemType>
ItemType BinarySearchTree<ItemType>::getEntry(const ItemType &anEntry) {
    return nullptr;
}

template<class ItemType>
bool BinarySearchTree<ItemType>::contains(const ItemType &anEntry) const {
    return BinaryNodeTree::contains(anEntry);
}

template<class ItemType>
void BinarySearchTree<ItemType>::preoderTraverse(void (*visit)(ItemType &)) const {
    BinaryNodeTree::preoderTraverse(visit);
}

template<class ItemType>
void BinarySearchTree<ItemType>::inoderTraverse(void (*visit)(ItemType &)) const {
    BinaryNodeTree::inoderTraverse(visit);
}

template<class ItemType>
void BinarySearchTree<ItemType>::postoderTraverse(void (*visit)(ItemType &)) const {
    BinaryNodeTree::postoderTraverse(visit);
}

template<class ItemType>
BinaryNodeTree<ItemType> &BinarySearchTree<ItemType>::operator=(const BinaryNodeTree &rightHandSide) {
    return BinaryNodeTree::operator=(rightHandSide);
}

template<class ItemType>
void BinarySearchTree<ItemType>::preorderTraverse(void (*visit)(ItemType &)) const {

}

template<class ItemType>
void BinarySearchTree<ItemType>::inorderTraverse(void (*visit)(ItemType &)) const {

}

template<class ItemType>
void BinarySearchTree<ItemType>::postorderTraverse(void (*visit)(ItemType &)) const {

}

template<class ItemType>
int BinarySearchTree<ItemType>::getHeightHelper(BinaryNode<ItemType> *subTreePtr) const {
    return BinaryNodeTree::getHeightHelper(subTreePtr);
}

template<class ItemType>
int BinarySearchTree<ItemType>::getNumberofNodesHelper(BinaryNode<ItemType> *subTreePtr) const {
    return BinaryNodeTree::getNumberofNodesHelper(subTreePtr);
}

template<class ItemType>
void BinarySearchTree<ItemType>::destroyTree(BinaryNode<ItemType> *subTreePtr) {
    BinaryNodeTree::destroyTree(subTreePtr);
}

template<class ItemType>
BinaryNode<ItemType> *
BinarySearchTree<ItemType>::balancedAdd(BinaryNode<ItemType> *subTreePtr, BinaryNode<ItemType> *newNodePtr) {
    return BinaryNodeTree::balancedAdd(subTreePtr, newNodePtr);
}

template<class ItemType>
BinaryNode<ItemType> *
BinarySearchTree<ItemType>::removeValue(BinaryNode<ItemType> *subTreePtr, const ItemType target, bool &success) {
    return BinaryNodeTree::removeValue(subTreePtr, target, success);
}

template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::moveValuesUpTree(BinaryNode<ItemType> *subTreePtr) {
    return BinaryNodeTree::moveValuesUpTree(subTreePtr);
}

template<class ItemType>
BinaryNode<ItemType> *
BinarySearchTree<ItemType>::findNode(BinaryNode<ItemType> *treePtr, const ItemType &target, bool &success) const {
    return BinaryNodeTree::findNode(treePtr, target, success);
}

template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::copyTree(const BinaryNode<ItemType> *treePtr) const {
    return BinaryNodeTree::copyTree(treePtr);
}

template<class ItemType>
void BinarySearchTree<ItemType>::preorder(void (*visit)(ItemType &), BinaryNode<ItemType> *treePtr) const {
    BinaryNodeTree::preorder(visit, treePtr);
}

template<class ItemType>
void BinarySearchTree<ItemType>::inorder(void (*visit)(ItemType &), BinaryNode<ItemType> *treePtr) const {
    BinaryNodeTree::inorder(visit, treePtr);
}

template<class ItemType>
void BinarySearchTree<ItemType>::postorder(void (*visit)(ItemType &), BinaryNode<ItemType> *treePtr) const {
    BinaryNodeTree::postorder(visit, treePtr);
}

template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::insertInorder(BinaryNode<ItemType> *subTreePtr, BinaryNode<ItemType> *newNodePtr) {
    if (subTreePtr == nullptr) {
        return newNodePtr;
    } else if (subTreePtr->getItem() > newNodePtr->getItem()) {
        BinaryNode<ItemType> *tempPtr = insertInorder(subTreePtr->getLeftChildPtr(), newNodePtr);
        subTreePtr->setLeftChildPtr(tempPtr);
    } else {
        BinaryNode<ItemType> *tempPtr = insertInorder(subTreePtr->getRightChildPtr(), newNodePtr);
        subTreePtr->setRightChildPtr(tempPtr);
    }
    return subTreePtr;
}
