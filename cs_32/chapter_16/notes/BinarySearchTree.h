//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_BINARYSEARCHTREE_H
#define NOTES_BINARYSEARCHTREE_H
#include "BinaryNodeTree.h"

template<class ItemType>
class BinarySearchTree : public BinaryNodeTree<ItemType> {
private:
    BinaryNode<ItemType>* rootPtr;
protected:
    BinaryNode<ItemType>* insertInorder(BinaryNode<ItemType>* subTreePtr, BinaryNode<ItemType>* newNode);
    BinaryNode<ItemType>* removeValue(BinaryNode<ItemType>* subTreePtr, const ItemType target, bool& success);
    BinaryNode<ItemType>* removeNode(BinaryNode<ItemType>* nodePtr);
    BinaryNode<ItemType>* removeLeftmostNode(BinaryNode<ItemType>* subTreePtr, ItemType& inorderSuccessor);
    BinaryNode<ItemType>* findNode(BinaryNode<ItemType>* treePtr, const ItemType& target) const);
public:
    BinarySearchTree();
    BinarySearchTree(const ItemType& rootItem);
    BinarySearchTree(const BinarySearchTree<ItemType>& tree);
    virtual ~BinarySearchTree();
    bool isEmpty() const;
    int getHeight() const;
//    more methods here...
};

#include "BinarySearchTree.cpp"
#endif //NOTES_BINARYSEARCHTREE_H
