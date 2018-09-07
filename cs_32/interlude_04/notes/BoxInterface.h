//
// Created by Thomas Pan on 5/6/18.
//

#ifndef _BOX_INTERFACE
#define _BOX_INTERFACE
template <class ItemType>
class BoxInterface {
public:
    virtual ~BoxInterface() {};
    virtual void setItem(const ItemType& theItem) = 0;
    virtual ItemType getItem() const = 0;
};

#endif //_BOX_INTERFACE
