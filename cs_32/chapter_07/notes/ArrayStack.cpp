//
// Created by Thomas Pan on 5/20/18.
//

#include "ArrayStack.h"
#include <cassert>

template<class ItemType>
ArrayStack<ItemType>::ArrayStack() : top(-1) {
}

template<class ItemType>
bool ArrayStack<ItemType>::isEmpty() const {
    return top < 0;
}

template<class ItemType>
bool ArrayStack<ItemType>::push(const ItemType &newEntry) {
    bool result = false;
    if (top < MAX_STACK - 1) {
        top++;
        items[top] = newEntry;
        result = true;
    }
    return result;
}

template<class ItemType>
bool ArrayStack<ItemType>::pop() {
    bool result = false;
    if (!isEmpty()) {
        top--;
        result = true;
    }
    return result;
}

template<class ItemType>
ItemType ArrayStack<ItemType>::peek() const throw(PrecondViolatedExcep) {
    if (isEmpty()) {
        throw PrecondViolatedExcep("peek() called with an empty stack");
    }

    return items[top];
}
