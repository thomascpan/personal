//
// Created by Thomas Pan on 5/13/18.
//

#ifndef GOODMEMORY_H
#define GOODMEMORY_H

#include <string>
#include "ToyBox.h"
using namespace std;

class GoodMemory {
private:
    ToyBox<string>* someBoxPtr;
public:
    GoodMemory();
    ~GoodMemory();
    void fixedLeak(const double& someItem);
};


#include "GoodMemory.cpp"
#endif //GOODMEMORY_H
