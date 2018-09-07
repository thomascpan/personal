//
// Created by Thomas Pan on 6/12/18.
//

#ifndef NOTES_PAIR_H
#define NOTES_PAIR_H

template<class T>
class Pair {
public:
    Pair();
    Pair(T firstValue, T secondValue);
    void setFirst(T newValue);
    void setSecond(T newValue);
    T getFirst() const;
    T getSecond() const;
private:
    T first;
    T second;
};

#include "Pair.cpp"
#endif //NOTES_PAIR_H
