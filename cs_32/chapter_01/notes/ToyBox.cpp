//
// Created by Thomas Pan on 5/6/18.
//

#include "ToyBox.h"

template<class ItemType>
ToyBox<ItemType>::ToyBox() {
    PlainBox<ItemType>();
    boxColor = BLACK;
}

template<class ItemType>
ToyBox<ItemType>::ToyBox(const Color &theColor) {
    PlainBox<ItemType>();
    boxColor = theColor;
}

template<class ItemType>
ToyBox<ItemType>::ToyBox(const ItemType &theItem, const Color &theColor) {
    PlainBox<ItemType>();
    PlainBox<ItemType>::setItem(theItem);
    boxColor = theColor;
}

template<class ItemType>
Color ToyBox<ItemType>::getColor() const {
    return boxColor;
}
