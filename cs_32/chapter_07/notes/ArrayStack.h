//
// Created by Thomas Pan on 5/20/18.
//

#ifndef NOTES_ARRAYSTACK_H
#define NOTES_ARRAYSTACK_H

#include "StackInterface.h"
#include "PrecondViolatedExcep.h"
const int MAX_STACK = 5;

template<class ItemType>
class ArrayStack : public StackInterface<ItemType> {
private:
    ItemType items[MAX_STACK];
    int top;
public:
    ArrayStack();
    bool isEmpty() const;
    bool push(const ItemType &newEntry);
    bool pop();
    ItemType peek() const throw(PrecondViolatedExcep);
};

#include "ArrayStack.cpp"
#endif //NOTES_ARRAYSTACK_H
