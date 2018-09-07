//#include <iostream>
//#include "HourlyEmployee.h"
//#include "SalariedEmployee.h"
//
//using std::cout;
//using std::endl;
//using SavitchEmployees::HourlyEmployee;
//using SavitchEmployees::SalariedEmployee;
//
//int main() {
//    HourlyEmployee joe;
//    joe.setName("Mighty Joe");
//    joe.setSsn("123-45-6789");
//    joe.setRate(20.50);
//    joe.setHours(40);
//
//    cout << "Check for " << joe.getName()
//         << " for " << joe.getHours() << " hours.\n";
//    joe.printCheck();
//    cout << endl;
//
//    SalariedEmployee boss("Mr. Big Shot", "987-65-4321", 10500.50);
//    cout << "Check for " << boss.getName() << endl;
//    boss.printCheck();
//
//    return 0;
//}


#include <iostream>
#include "PFArrayDBak.h"
using std::cin;
using std::cout;
using std::endl;

void testPFArrayDBak();

int main() {
    cout << "This program tests the class PFArrayDBak.\n";
    char ans;
    do {
        testPFArrayDBak();
        cout << "Test again? (y/n) ";
        cin >> ans;
    } while ((ans == 'y') || (ans == 'Y'));

    return 0;
}

void testPFArrayDBak() {
    int cap;
    cout << "Enter capacity of this super array: ";
    cin >> cap;
    PFArrayDBak a(cap);

    cout << "Enter up to " << cap << " nonnegative numbers.\n";
    cout << "Place a negative number at the end.\n";

    double next;

    cin >> next;
    while ((next >= 0) && (!a.full())) {
        a.addElement(next);
        cin >> next;
    }

    if (next >= 0) {
        cout << "Could not read all numbers.\n";
        while (next >= 0) {
            cin >> next;
        }
    }

    int count = a.getNumberUsed();
    cout << "The following " << count
         << " numbers read and stored:\n";
    int index;
    for (index = 0; index < count; index++) {
        cout << a[index] << " ";
    }
    cout << endl;

    cout << "Backing up array.\n";
    a.backup();

    cout << "Emptying array.\n";
    a.emptyArray();
    cout << a.getNumberUsed()
         << " numbers are now stored in array.\n";

    cout << "Restoring array.\n";
    a.restore();

    count = a.getNumberUsed();
    cout << "The following " << count
         << " numbers are now stored:\n";
    for (index = 0; index < count; index++) {
        cout << a[index] << " ";
    }
    cout << endl;
}