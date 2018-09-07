//
// Created by Thomas Pan on 6/11/18.
//

#include "PFArrayBak.h"
#include <iostream>
using std::cout;

namespace PFArraySavitch {
    template<class T>
    PFArrayBak<T>::PFArrayBak() : PFArray<T>(), usedB(0) {
        b = new T[this->getCapacity()];
    }

    template<class T>
    PFArrayBak<T>::PFArrayBak(int capacityValue) : PFArray<T>(capacityValue), usedB(0) {
        b = new T[this->getCapacity()];
    }

    template<class T>
    PFArrayBak<T>::PFArrayBak(const PFArrayBak<T>& Object) : PFArray<T>(Object), usedB(0) {
        b = new T[this->getCapacity()];
        usedB = Object.usedB;
        for (int i = 0; i < usedB; i++) {
            b[i] = Object.b[i];
        }
    }

    template<class T>
    void PFArrayBak<T>::backup() {
        usedB = this->getNumberUsed();
        for (int i = 0; i < usedB; i++) {
            b[i] = this->operator[](i);
        }
    }

    template<class T>
    void PFArrayBak<T>::restore() {
        this->emptyArray();
        for (int i = 0; i < usedB; i++) {
            this->addElement(b[i]);
        }
    }

    template<class T>
    PFArrayBak<T>& PFArrayBak<T>::operator=(const PFArrayBak<T>& rightSide) {
        PFArray<T>::operator=(rightSide);
        if (this->getCapacity() != rightSide.getCapacity()) {
            delete [] b;
            b = new T[rightSide.getCapacity()];
        }
        usedB = rightSide.usedB;
        for (int i = 0; i < usedB; i++) {
            b[i] = rightSide.b[i];
        }
        return *this;
    }

    template<class T>
    PFArrayBak<T>::~PFArrayBak() {
        delete [] b;
    }
}