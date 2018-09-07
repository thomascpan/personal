//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_TREENODE_H
#define NOTES_TREENODE_H

template<class ItemType>
class TreeNode {
private:
    ItemType item;
    int leftChild;
    int rightChild;
public:
    TreeNode();

    TreeNode(const ItemType& nodeItem, int left, int right);
};

#endif //NOTES_TREENODE_H
