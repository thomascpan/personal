//#include <iostream>
//#include "Sale.h"
//#include "DiscountSale.h"
//using std::cout;
//using std::endl;
//using std::ios;
//
//using namespace SavitchSale;
//
//int main() {
//    Sale simple(10.00);
//    DiscountSale discount(11.00, 10);
//
//    cout.setf(ios::fixed);
//    cout.setf(ios::showpoint);
//    cout.precision(2);
//
//    if (discount < simple) {
//        cout << "Discounted item is cheaper.\n";
//        cout << "Savings is $" << simple.savings(discount) << endl;
//    } else {
//        cout << "Discounted item is not cheaper.\n";
//    }
//
//    return 0;
//}

#include <iostream>
#include "Pet.h"
#include "Dog.h"

using std::cout;
using std::endl;

int main() {
    Dog vdog;
    Pet vpet;
    vdog.name = "Tiny";
    vdog.breed = "Great Dane";
    vpet = vdog;

    cout << "The slicing problem:\n";
    vpet.print();
    cout << "Note that it was print from Pet that was invoked.\n";

    cout << "The slicing problem defeated:\n";
    Pet* ppet;
    Dog* pdog;
    pdog = new Dog;
    pdog->name = "Tiny";
    pdog->breed = "Great Dane";
    ppet = pdog;
    ppet->print();
    pdog->print();

    return 0;
}