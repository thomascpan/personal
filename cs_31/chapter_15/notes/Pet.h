//
// Created by Thomas Pan on 6/11/18.
//

#ifndef NOTES_PET_H
#define NOTES_PET_H

#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Pet {
public:
    string name;
    virtual void print() const;
};


#endif //NOTES_PET_H
