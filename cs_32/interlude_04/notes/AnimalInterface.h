//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_ANIMALINTERFACE_H
#define NOTES_ANIMALINTERFACE_H

template<class ItemType>
class AnimalInterface {
public:
    virtual ~AnimalInterface() {};
    virtual void setAttribute(const ItemType& theItem) = 0;
    virtual ItemType getAttribute() const = 0;
};

#endif //NOTES_ANIMALINTERFACE_H
