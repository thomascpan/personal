//
// Created by Thomas Pan on 6/16/18.
//

#ifndef NOTES_ARRAYMAXHEAP_H
#define NOTES_ARRAYMAXHEAP_H

#include "HeapInterface.h"
#include "PrecondViolatedExcept.h"

template <class T>
class ArrayMaxHeap : public HeapInterface<T> {
private:
    static const int ROOT_INDEX = 0;
    static const int DEFAULT_CAPACITY = 21;
    T* items;
    int itemCount;
    int maxItems;

    int getLeftChildIndex(const int parentIndex) const;

    int getRightChildIndex(const int parentIndex) const;

    int getParentIndex(const int childIndex) const;

    bool isLeaf(const int nodeIndex, int n) const;

    void heapRebuild(const int subTreeRootIndex, T anArray[], int n);

    void heapCreate();
public:
    ArrayMaxHeap();

    ArrayMaxHeap(const T someArray[], const int arraySize);

    virtual ~ArrayMaxHeap();

    virtual bool isEmpty() const;

    virtual int getNumberOfNodes() const;

    virtual int getHeight() const;

    virtual T peekTop() const;

    virtual bool add(const T &newData);

    virtual bool remove();

    virtual void clear();

    virtual void print() const;

    virtual void heapSort(T anArray[], int n);
};

#include "ArrayMaxHeap.cpp"
#endif //NOTES_ARRAYMAXHEAP_H
