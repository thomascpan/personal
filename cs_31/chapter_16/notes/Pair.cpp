//
// Created by Thomas Pan on 6/12/18.
//

#include "Pair.h"

template<class T>
Pair<T>::Pair() {

}

template<class T>
Pair<T>::Pair(T firstValue, T secondValue) {
    first = firstValue;
    second = secondValue;
}

template<class T>
void Pair<T>::setFirst(T newValue) {
    first = newValue;
}

template<class T>
void Pair<T>::setSecond(T newValue) {
    second = newValue;
}

template<class T>
T Pair<T>::getFirst() const {
    return first;
}

template<class T>
T Pair<T>::getSecond() const {
    return second;
}
