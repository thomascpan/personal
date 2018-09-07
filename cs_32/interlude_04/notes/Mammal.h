//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_MAMMAL_H
#define NOTES_MAMMAL_H

#include <iostream>
#include "AnimalInterface.h"

using namespace std;

template<class ItemType>
class Mammal : public AnimalInterface<ItemType> {
private:
    string name;
    int age;
    ItemType attribute;
public:
    Mammal();
    Mammal(const string &newName, int newAge, const ItemType& newAttribute);

    string &getName() const;
    void setName(const string &newName);
    int getAge() const;
    void setAge(int newAge);
    ItemType getAttribute() const;
    void setAttribute(const ItemType& theItem);
    void action() const;
};

#include "Mammal.cpp"
#endif //NOTES_MAMMAL_H
