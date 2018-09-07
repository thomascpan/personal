//
// Created by Thomas Pan on 6/16/18.
//

#ifndef NOTES_HEAPINTERFACE_H
#define NOTES_HEAPINTERFACE_H

template <class T>
class HeapInterface {
public:
    virtual bool isEmpty() const = 0;
    virtual int getNumberOfNodes() const = 0;
    virtual int getHeight() const = 0;
    virtual T peekTop() const = 0;
    virtual bool add(const T& newData) = 0;
    virtual bool remove() = 0;
    virtual void clear() = 0;
    virtual void print() const = 0;
    virtual void heapSort(T anArray[], int n) = 0;
};

#endif //NOTES_HEAPINTERFACE_H
