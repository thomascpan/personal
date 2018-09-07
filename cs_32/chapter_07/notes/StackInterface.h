//
// Created by Thomas Pan on 5/20/18.
//

#ifndef NOTES_STACKINTERFACE_H
#define NOTES_STACKINTERFACE_H

template<class ItemType>
class StackInterface {
public:
    virtual bool isEmpty() const = 0;
    virtual bool push(const ItemType& newEntry) = 0;
    virtual bool pop() = 0;
    virtual ItemType peek() const = 0;
};

#endif //NOTES_STACKINTERFACE_H
