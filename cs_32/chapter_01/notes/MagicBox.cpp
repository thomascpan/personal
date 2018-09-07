//
// Created by Thomas Pan on 5/6/18.
//

#include "MagicBox.h"

template<class ItemType>
MagicBox<ItemType>::MagicBox() {
    PlainBox<ItemType>();
    firstItemStored = false;
}

template<class ItemType>
MagicBox<ItemType>::MagicBox(const ItemType &theItem) {
    firstItemStored = false;
    setItem(theItem);

}

template<class ItemType>
void MagicBox<ItemType>::setItem(const ItemType &theItem) {
    if (!firstItemStored) {
        PlainBox<ItemType>::setItem(theItem);
        firstItemStored = true;
    }
}
