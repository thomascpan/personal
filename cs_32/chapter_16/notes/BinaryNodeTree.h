//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_BINARYNODETREE_H
#define NOTES_BINARYNODETREE_H

#include "BinaryTreeInterface.h"
#include "BinaryNode.h"
#include "PrecondViolatedExcept.h"
#include "TargetNotFoundException.h"

template<class ItemType>
class BinaryNodeTree : public BinaryTreeInterface<ItemType> {
private:
    BinaryNode<ItemType>* rootPtr;
protected:
    virtual int getHeightHelper(BinaryNode<ItemType>* subTreePtr) const;

    virtual int getNumberofNodesHelper(BinaryNode<ItemType>* subTreePtr) const;

    virtual void destroyTree(BinaryNode<ItemType>* subTreePtr);

    virtual BinaryNode<ItemType>* balancedAdd(BinaryNode<ItemType>* subTreePtr, BinaryNode<ItemType>* newNodePtr);

    virtual BinaryNode<ItemType>* removeValue(BinaryNode<ItemType>* subTreePtr, const ItemType target, bool& success);

    virtual BinaryNode<ItemType>* moveValuesUpTree(BinaryNode<ItemType>* subTreePtr);

    virtual BinaryNode<ItemType>* findNode(BinaryNode<ItemType>* treePtr, const ItemType& target, bool& success) const;

    virtual BinaryNode<ItemType>* copyTree(const BinaryNode<ItemType>* treePtr) const;

    virtual void preorder(void visit(ItemType&), BinaryNode<ItemType>* treePtr) const;

    virtual void inorder(void visit(ItemType&), BinaryNode<ItemType>* treePtr) const;

    virtual void postorder(void visit(ItemType&), BinaryNode<ItemType>* treePtr) const;

public:
    BinaryNodeTree();
    BinaryNodeTree(const ItemType& rootItem);
    BinaryNodeTree(const ItemType& rootItem, const BinaryNodeTree<ItemType>* leftTreePtr, const BinaryNodeTree<ItemType>* rightTreePtr);
    BinaryNodeTree(const BinaryNodeTree<ItemType>& tree);
    virtual ~BinaryNodeTree();

    bool isEmpty() const;
    int getHeight() const;
    int getNumberOfNodes() const;
    ItemType getRootData() const;
    void setRootData(const ItemType& newData);
    bool add(const ItemType& newData);
    bool remove(const ItemType& data);
    void clear();
    ItemType getEntry(const ItemType& anEntry) const throw (TargetNotFoundException);
    bool contains(const ItemType& anEntry) const;

    virtual void preoderTraverse(void visit(ItemType&)) const;

    virtual void inoderTraverse(void visit(ItemType&)) const;

    virtual void postoderTraverse(void visit(ItemType&)) const;

    virtual BinaryNodeTree& operator=(const BinaryNodeTree& rightHandSide);
};

#include "BinaryNodeTree.cpp"
#endif //NOTES_BINARYNODETREE_H
