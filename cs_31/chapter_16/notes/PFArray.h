//
// Created by Thomas Pan on 6/11/18.
//

#ifndef NOTES_PFARRAYD_H
#define NOTES_PFARRAYD_H

namespace PFArraySavitch {
    template<class T>
    class PFArray {
    public:
        PFArray();

        PFArray(int capacityValue);

        PFArray(const PFArray<T>& pfaObject);

        void addElement(const T& element);

        bool full() const;

        int getCapacity() const;

        int getNumberUsed() const;

        void emptyArray();

        T& operator[](int index);

        PFArray<T>& operator =(const PFArray<T>& rightSide);

        virtual ~PFArray();
    private:
        T *a;
        int capacity;
        int used;
    };
}

#include "PFArray.cpp"
#endif //NOTES_PFARRAYD_H
