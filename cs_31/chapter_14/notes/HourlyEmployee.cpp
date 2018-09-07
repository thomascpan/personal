//
// Created by Thomas Pan on 6/9/18.
//

#include <string>
#include <iostream>
#include "HourlyEmployee.h"

using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
    HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0) {

    }

    HourlyEmployee::HourlyEmployee(const string &theName, const string &theSsn, double theWageRate, double theHours)
            : Employee(theName, theSsn), wageRate(theWageRate), hours(theHours) {

    }

    void HourlyEmployee::setRate(double newWageRate) {
        wageRate = newWageRate;
    }

    double HourlyEmployee::getRate() const {
        return wageRate;
    }

    void HourlyEmployee::setHours(double hoursWorked) {
        hours = hoursWorked;
    }

    double HourlyEmployee::getHours() const {
        return hours;
    }

    void HourlyEmployee::printCheck() {
        setNetPay(hours * wageRate);

        cout << "\n_______________________________________\n"
             << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n"
             << "_________________________________________\n"
             << "Check Stub: NOT NEGOTIABLE\n"
             << "Employee Number: " << getSsn() << endl;
        cout << "Hourly Employee. \nHours worked: " << getHours()
             << " Rate: " << getRate() << " Pay: " << getNetPay() << endl;
        cout << "_________________________________________\n";
    }
}
