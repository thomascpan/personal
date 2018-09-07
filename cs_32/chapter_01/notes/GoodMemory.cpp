//
// Created by Thomas Pan on 5/13/18.
//

#include "GoodMemory.h"

GoodMemory::GoodMemory() :someBoxPtr(nullptr) {

}

GoodMemory::~GoodMemory() {
    delete someBoxPtr;
}

void GoodMemory::fixedLeak(const double &someItem) {
    someBoxPtr = new ToyBox<double>();
    someBoxPtr->setItem(someItem);
}
