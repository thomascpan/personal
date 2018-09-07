//
// Created by Thomas Pan on 6/16/18.
//

#ifndef NOTES_LINKEDITERATOR_H
#define NOTES_LINKEDITERATOR_H

#include <iterator>
#include "Node.h"

template <class ItemType>
class LinkedList;

template <class ItemType>
class LinkedIterator : public iterator<input_iterator_tag, int> {
private:
    const LinkedList<ItemType>* containerPtr;
    Node<ItemType>* currentItemPtr;
public:
    LinkedIterator(const LinkedList<ItemType>* someList, Node<ItemType>* nodePtr);
    const ItemType operator*();
    LinkedIterator<ItemType> operator++();
    bool operator==(const LinkedIterator<ItemType>& rightHandSide) const;
    bool operator!=(const LinkedIterator<ItemType>& rightHandSide) const;
};

#include "LinkedIterator.cpp"
#endif //NOTES_LINKEDITERATOR_H
