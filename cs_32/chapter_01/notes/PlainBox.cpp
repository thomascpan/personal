//
// Created by Thomas Pan on 5/6/18.
//

#include "PlainBox.h"

template<class ItemType>
PlainBox<ItemType>::PlainBox() {

} // end default constructor

template<class ItemType>
PlainBox<ItemType>::PlainBox(const ItemType &theItem) {
    item = theItem;
} // end constructor

template<class ItemType>
void PlainBox<ItemType>::setItem(const ItemType &theItem) {
    item = theItem;
} // end setItem

template<class ItemType>
ItemType PlainBox<ItemType>::getItem() const {
    return item;
} // end getItem
