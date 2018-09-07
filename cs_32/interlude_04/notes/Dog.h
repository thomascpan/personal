//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_DOG_H
#define NOTES_DOG_H

#include <iostream>
#include "AnimalInterface.h"

using namespace std;

template<class ItemType>
class Dog : public AnimalInterface<ItemType> {
private:
    string name;
    int age;
public:
    Dog();
    Dog(string& newName, int age);
    virtual ~Dog()



    string &getName() const;
    void setName(const string &newName);
    int getAge() const;
    void setAge(int newAge);
};


#endif //NOTES_DOG_H
