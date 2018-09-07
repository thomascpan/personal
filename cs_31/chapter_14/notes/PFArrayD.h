//
// Created by Thomas Pan on 6/11/18.
//

#ifndef NOTES_PFARRAYD_H
#define NOTES_PFARRAYD_H

class PFArrayD {
public:
    PFArrayD();
    PFArrayD(int capacityValue);
    PFArrayD(const PFArrayD& pfaObject);

    void addElement(double element);
    bool full() const { return (capacity == used);}
    int getCapacity() const {return capacity;};
    int getNumberUsed() const { return used;};
    void emptyArray() {used = 0;};

    double& operator[](int index);
    PFArrayD& operator =(const PFArrayD& rightSide);

    ~PFArrayD();

private:
    double *a;
    int capacity;
    int used;
};


#endif //NOTES_PFARRAYD_H
