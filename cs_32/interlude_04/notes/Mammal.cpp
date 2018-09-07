//
// Created by Thomas Pan on 6/9/18.
//

#include "Mammal.h"

template<class ItemType>
Mammal<ItemType>::Mammal() {
}

template<class ItemType>
Mammal<ItemType>::Mammal(const string &newName, int newAge, const ItemType& newAttribute): name(newName), age(newAge), attribute(newAttribute) {
}

template<class ItemType>
string &Mammal<ItemType>::getName() const {
    return name;
}

template<class ItemType>
void Mammal<ItemType>::setName(const string &newName) {
    name = newName;
}

template<class ItemType>
int Mammal<ItemType>::getAge() const {
    return age;
}

template<class ItemType>
void Mammal<ItemType>::setAge(int newAge) {
    age = newAge;
}

template<class ItemType>
void Mammal<ItemType>::action() const {
    cout << "Mammal action!" << endl;
}

template<class ItemType>
ItemType Mammal<ItemType>::getAttribute() const {
    return attribute;
}

template<class ItemType>
void Mammal<ItemType>::setAttribute(const ItemType& theItem) {
    attribute = theItem;
}
