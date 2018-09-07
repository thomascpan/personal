//
// Created by Thomas Pan on 5/6/18.
//

#ifndef _PLAIN_BOX
#define _PLAIN_BOX

#include "BoxInterface.h"

template<class ItemType> // Indicates this is a template definition
// Declaration for the class PlainBox
class PlainBox : public BoxInterface<ItemType> {
private:
    // Data field
    ItemType item;

public:
    // Default constructor
    PlainBox();

    // Parameterized constructor
    PlainBox(const ItemType& theItem);

    // Method to change the value of the data field
    virtual void setItem(const ItemType& theItem);

    // Method to get the value of the data field
    virtual ItemType getItem() const;
}; // end PlainBox

#include "PlainBox.cpp"
#endif //_PLAIN_BOX
