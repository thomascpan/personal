//
// Created by Thomas Pan on 6/12/18.
//

#ifndef NOTES_SORT_H
#define NOTES_SORT_H

template<class T>
void sort(T a[], int numberUsed);

template<class T>
void swapValues(T& variable1, T& variable2);

template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed);

#include "Sort.cpp"

#endif //NOTES_SORT_H
