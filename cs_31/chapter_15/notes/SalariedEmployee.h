//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_SALARAIEDEMPLOYEE_H
#define NOTES_SALARAIEDEMPLOYEE_H

#include <string>
#include "Employee.h"

using std::string;

namespace SavitchEmployees {
    class SalariedEmployee : public Employee {
    public:
        SalariedEmployee();
        SalariedEmployee(const string &theName, const string &theSsn, double theWeeklySalary);

        double getSalary() const;
        void setSalary(double newSalary);
        void printCheck();

    private:
        double salary;
    };
}


#endif //NOTES_SALARAIEDEMPLOYEE_H
