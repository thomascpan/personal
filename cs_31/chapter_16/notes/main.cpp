//#include <iostream>
//#include "Sort.h"
//using std::cout;
//using std::endl;
//
//int main() {
//    int i;
//    int a[10] = {9,8,7,6,5,1,2,3,0,4};
//    cout << "Unsorted integers:\n";
//    for (i = 0; i < 10; i++)
//        cout << a[i] << " ";
//    cout << endl;
//    sort(a, 10);
//    cout << "In sorted order of integers are:\n";
//    for (i = 0; i < 10; i++)
//        cout << a[i] << " ";
//    cout << endl;
//    double b[5] = {5.5,4.4,1.1,3.3,2.2};
//    cout << "Unsorted doubles:\n";
//    for (i = 0; i < 5; i++)
//        cout << b[i] << " ";
//    cout << endl;
//    sort(b, 5);
//    cout << "In sorted order of doubles are:\n";
//    for (i = 0; i < 5; i++)
//        cout << b[i] << " ";
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//#include "Pair.h"
//using std::cout;
//using std::endl;
//using std::string;
//
//template<class T>
//T addUp(const Pair<T>& thePair) {
//    return thePair.getFirst() + thePair.getSecond();
//}
//
//int main () {
//    Pair<int> pair1;
//    pair1.setFirst(10);
//    pair1.setSecond(20);
//    cout << pair1.getFirst() << endl;
//    cout << pair1.getSecond() << endl;
//    cout << addUp(pair1) << endl;
//
//    Pair<string> pair2("first", "second");
//    cout << pair2.getFirst() << endl;
//    cout << pair2.getSecond() << endl;
//    cout << addUp(pair2) << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using std::cin;
//using std::cout;
//using std::endl;
//using std::string;
//
//#include "PFArray.h"
//#include "PFArray.cpp"
//using PFArraySavitch::PFArray;
//
//// left of 16.5
//int main() {
//    PFArray<int> a(10);
//
//    cout << "Enter up to 10 nonnegative integers.\n";
//    cout << "Place a negative number at the end.\n";
//    int next;
//    cin >> next;
//    while ((next >= 0) && (!a.full())) {
//        a.addElement(next);
//        cin >> next;
//    }
//    if (next >= 0) {
//        cout << "Could not read all numbers.\n";
//        while (next >= 0) {
//            cin >> next;
//        }
//    }
//
//    cout << "You entered the following:\n";
//    int index;
//    int count = a.getNumberUsed();
//    for (index = 0; index < count; index++)
//        cout << a[index] << " ";
//    cout << endl;
//    PFArray<string> b(3);
//
//    cout << "Enter three words:\n";
//    string nextWord;
//    for (index = 0; index < 3; index++) {
//        cin >> nextWord;
//        b.addElement(nextWord);
//    }
//
//    cout << "You wrote the following:\n";
//    count = b.getNumberUsed();
//    for (index = 0; index < count; index++)
//        cout << b[index] << " ";
//    cout << endl;
//    cout << "I hope you really mean it.\n";
//
//    return 0;
//}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

#include "PFArrayBak.h"
using PFArraySavitch::PFArrayBak;

// left of 16.5
int main() {
    int cap;
    cout << "Enter the capacity of the super array: ";
    cin >> cap;
    PFArrayBak<string> a(cap);

    cout << "Enter " << cap << " strings\n";
    cout << "separated by blanks.\n";

    string next;
    for (int i = 0; i < cap; i++) {
        cin >> next;
        a.addElement(next);
    }

    int count = a.getNumberUsed();
    cout << "The following " << count
         << " strings read and stored:\n";
    int index;
    for (index = 0; index < count; index++)
        cout << a[index] << " ";
    cout << endl;

    cout << "Backing up array.\n";
    a.backup();
    cout << "Emptying array.\n";
    a.emptyArray();
    cout << a.getNumberUsed()
         << " strings are now stored in the array.\n";
    cout << "Restoring array.\n";
    a.restore();
    count = a.getNumberUsed();
    cout << "The following " << count
         << " strings read and stored:\n";
    for (index = 0; index < count; index++)
        cout << a[index] << " ";
    cout << endl;

    cout << "End of demonstration.\n";
    return 0;
}