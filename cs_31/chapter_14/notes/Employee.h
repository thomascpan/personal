//
// Created by Thomas Pan on 6/9/18.
//

#ifndef NOTES_EMPLOYEE_H
#define NOTES_EMPLOYEE_H

#include <string>
using std::string;

namespace SavitchEmployees {
    class Employee {
    public:
        Employee();
        Employee(const string& theName, const string& theSsn);
        string getName() const;
        string getSsn() const;
        double getNetPay() const;
        void setName(const string& newName);
        void setSsn(const string& newSsn);
        void setNetPay(double newNetPay);

        void printCheck() const;

    private:
        string name;
        string ssn;
        double netPay;
    };
}


#endif //NOTES_EMPLOYEE_H
