//
// Created by Thomas Pan on 6/11/18.
//

#ifndef NOTES_PFARRAYDBAK_H
#define NOTES_PFARRAYDBAK_H
#include "PFArray.h"

namespace PFArraySavitch {
    template<class T>
    class PFArrayBak : public PFArray<T> {
    public:
        PFArrayBak();

        PFArrayBak(int capacityValue);

        PFArrayBak(const PFArrayBak<T>& Object);

        void backup();

        void restore();

        PFArrayBak<T>& operator =(const PFArrayBak<T>& rightSide);

        virtual ~PFArrayBak();
    private:
        T *b;
        int usedB;
    };
}

#include "PFArrayBak.cpp"
#endif //NOTES_PFARRAYDBAK_H
