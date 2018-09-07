//
// Created by Thomas Pan on 6/11/18.
//

#ifndef NOTES_PFARRAYDBAK_H
#define NOTES_PFARRAYDBAK_H
#include "PFArrayD.h"


class PFArrayDBak : public PFArrayD {
public:
    PFArrayDBak();

    PFArrayDBak(int capacityValue);

    PFArrayDBak(const PFArrayDBak& Object);

    void backup();
    void restore();
    PFArrayDBak& operator =(const PFArrayDBak& rightSide);
    ~PFArrayDBak();
private:
    double *b;
    int usedB;
};


#endif //NOTES_PFARRAYDBAK_H
