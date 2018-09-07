//
// Created by Thomas Pan on 6/11/18.
//

#ifndef NOTES_DOG_H
#define NOTES_DOG_H

#include <string>
#include <iostream>
#include "Pet.h"
using std::string;
using std::cout;
using std::endl;

class Dog : public Pet {
public:
    string breed;
    virtual void print() const;
    void test() const;

};


#endif //NOTES_DOG_H
