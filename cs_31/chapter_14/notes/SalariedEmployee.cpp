//
// Created by Thomas Pan on 6/9/18.
//

#include <iostream>
#include <string>
#include "SalariedEmployee.h"

using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
    SalariedEmployee::SalariedEmployee() : Employee(), salary(0) {

    }

    SalariedEmployee::SalariedEmployee(const string &theName, const string &theSsn, double theWeeklySalary)
            : Employee(theName, theSsn), salary(theWeeklySalary)  {

    }

    double SalariedEmployee::getSalary() const {
        return salary;
    }

    void SalariedEmployee::setSalary(double newSalary) {
        salary = newSalary;
    }

    void SalariedEmployee::printCheck() {
        setNetPay(salary);

        cout << "\n_______________________________________\n"
             << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n"
             << "_________________________________________\n"
             << "Check Stub: NOT NEGOTIABLE\n"
             << "Employee Number: " << getSsn() << endl;
        cout << "Salaried Employee. Regular Pay: "
             << getSalary() << endl;
        cout << "_________________________________________\n";
    }
}