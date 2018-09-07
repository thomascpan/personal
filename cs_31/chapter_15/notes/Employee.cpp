//
// Created by Thomas Pan on 6/9/18.
//

#include <string>
#include <cstdlib>
#include <iostream>
#include "Employee.h"

namespace SavitchEmployees {
    Employee::Employee() : name("No name yet"), ssn("No number yet"), netPay(0) {

    }

    Employee::Employee(const string &theName, const string &theSsn) : name(theName), ssn(theSsn), netPay(0) {

    }

    string Employee::getName() const {
        return name;
    }

    string Employee::getSsn() const {
        return ssn;
    }

    double Employee::getNetPay() const {
        return netPay;
    }

    void Employee::setName(const string &newName) {
        name = newName;
    }

    void Employee::setSsn(const string &newSsn) {
        ssn = newSsn;
    }

    void Employee::setNetPay(double newNetPay) {
        netPay = newNetPay;
    }
}
