//
// Created by Thomas Pan on 5/22/18.
//

#ifndef NOTES_LINKEDSTACK_H
#define NOTES_LINKEDSTACK_H

#include "StackInterface.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class LinkedStack : public StackInterface<ItemType> {
private:
    Node<ItemType>* topPtr;
public:
    LinkedStack();
    LinkedStack(const LinkedStack<ItemType>& aStack);
    virtual ~LinkedStack();
    bool isEmpty() const;
    bool push(const ItemType &newEntry);
    bool pop();
    ItemType peek() const throw(PrecondViolatedExcep);
};

#include "LinkedStack.cpp"
#endif //NOTES_LINKEDSTACK_H
