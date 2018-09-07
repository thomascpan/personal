//
// Created by Thomas Pan on 5/6/18.
//

#ifndef _TOY_BOX
#define _TOY_BOX
#include "PlainBox.h"

enum Color {BLACK, RED, BLUE, GREEN, YELLOW, WHITE};

template<class ItemType>
class ToyBox : public PlainBox<ItemType> {
private:
    Color boxColor;

public:
    ToyBox();

    ToyBox(const Color& theColor);

    ToyBox(const ItemType& theItem, const Color& theColor);

    Color getColor() const;
}; // end ToyBox

#include "ToyBox.cpp"
#endif //_TOYBOX
