//
// Created by Thomas Pan on 6/16/18.
//

#include "ArrayMaxHeap.h"
#include <math.h>
#include <iostream>

using namespace std;

template<class T>
int ArrayMaxHeap<T>::getLeftChildIndex(const int parentIndex) const {
    return 2*parentIndex+1;
}

template<class T>
int ArrayMaxHeap<T>::getRightChildIndex(const int parentIndex) const {
    return 2*parentIndex+2;
}

template<class T>
int ArrayMaxHeap<T>::getParentIndex(const int childIndex) const {
    return (childIndex-1)/2;
}

template<class T>
bool ArrayMaxHeap<T>::isLeaf(const int nodeIndex, int n) const {
    return getLeftChildIndex(nodeIndex) >= n;

}

template<class T>
void ArrayMaxHeap<T>::heapRebuild(const int subTreeRootIndex, T anArray[], int n) {
    if (!isLeaf(subTreeRootIndex, n)) {
        int largerChildIndex = getLeftChildIndex(subTreeRootIndex);
        if (getRightChildIndex(subTreeRootIndex) < n) {
            int rightChildIndex = getRightChildIndex(subTreeRootIndex);
            if (anArray[rightChildIndex] > anArray[largerChildIndex]) {
                largerChildIndex = rightChildIndex;
            }
        }
        if (anArray[subTreeRootIndex] < anArray[largerChildIndex]) {
            T temp = anArray[subTreeRootIndex];
            anArray[subTreeRootIndex] = anArray[largerChildIndex];
            anArray[largerChildIndex] = temp;
            heapRebuild(largerChildIndex, anArray, n);
        }
    }
}

template<class T>
void ArrayMaxHeap<T>::heapCreate() {
    for (int i = itemCount/2; i >= 0; i--)
        heapRebuild(i, items, itemCount);
}

template<class T>
ArrayMaxHeap<T>::ArrayMaxHeap() : itemCount(0), maxItems(DEFAULT_CAPACITY) {
    items = new T[maxItems];
}

template<class T>
ArrayMaxHeap<T>::ArrayMaxHeap(const T *someArray, const int arraySize) : itemCount(arraySize), maxItems(DEFAULT_CAPACITY) {
    for (int i = 0; i < itemCount; i++)
        items[i] = someArray[i];
    heapCreate();
}

template<class T>
ArrayMaxHeap<T>::~ArrayMaxHeap() {
    delete [] items;
    items = nullptr;
}

template<class T>
bool ArrayMaxHeap<T>::isEmpty() const {
    return itemCount == 0;
}

template<class T>
int ArrayMaxHeap<T>::getNumberOfNodes() const {
    return itemCount;
}

template<class T>
int ArrayMaxHeap<T>::getHeight() const {
    return ceil(log2((itemCount+1)))-1;
}

template<class T>
T ArrayMaxHeap<T>::peekTop() const {
    return items[ROOT_INDEX];
}

template<class T>
bool ArrayMaxHeap<T>::add(const T &newData) {
    bool result = (itemCount < maxItems);
    if (result) {
        items[itemCount] = newData;
        itemCount++;
        int currentIndex = itemCount-1;
        int parentIndex = getParentIndex(currentIndex);
        while (items[currentIndex] > items[parentIndex]) {
            T temp = items[currentIndex];
            items[currentIndex] = items[parentIndex];
            items[parentIndex] = temp;
            currentIndex = parentIndex;
            parentIndex = getParentIndex(currentIndex);
        }
    }
    return result;
}

template<class T>
bool ArrayMaxHeap<T>::remove() {
    bool result = (itemCount > 0);

    if (result) {
        items[ROOT_INDEX] = items[itemCount-1];
        itemCount--;
        heapRebuild(ROOT_INDEX, items, itemCount);
    }
    return result;
}

template<class T>
void ArrayMaxHeap<T>::clear() {
    itemCount = 0;
}

template<class T>
void ArrayMaxHeap<T>::print() const {
    for (int i = 0; i < itemCount; i++)
        cout << items[i] << " ";
    cout << endl;
}

template<class T>
void ArrayMaxHeap<T>::heapSort(T anArray[], int n) {
    if (n > 0) {
        for (int i = n/2; i >= 0; i--) {
            heapRebuild(i, anArray, n);
        }
        T temp = anArray[0];
        anArray[0] = anArray[n-1];
        anArray[n-1] = temp;
        n--;
        while (n > 1) {
            heapRebuild(0, anArray, n);
            temp = anArray[0];
            anArray[0] = anArray[n-1];
            anArray[n-1] = temp;
            n--;
        }
    }
}
