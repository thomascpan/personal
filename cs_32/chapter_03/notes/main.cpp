// 3.2.4

#include <iostream>
#include <string>
#include "ArrayBag.h"

using namespace std;

void displayBag(ArrayBag<string>& bag) {
    cout << "The bag contains " << bag.getCurrentSize()
                                << " items:" << endl;

    vector<string> bagItems = bag.toVector();
    int numberOfEntries = (int) bagItems.size();
    for (int i = 0; i < numberOfEntries; i++) {
        cout << bagItems[i] << " ";
    }

    cout << endl << endl;
}

void bagTester(ArrayBag<string>& bag) {
    cout << "isEmpty: returns " << bag.isEmpty()
                                << "; should be 1 (true)" << endl;
    displayBag(bag);

    string items[] = {"one", "two", "three", "four", "five", "one"};
    cout << "Add 6 items to the bag: " << endl;
    for (int i = 0; i < 6; i++) {
        bag.add(items[i]);
    }

    displayBag(bag);

    cout << "isEmpty: returns " << bag.isEmpty()
                                << "; should be 0 (false)" << endl;
    cout << "getCurrentSize: returns " << bag.getCurrentSize()
                                        << "; should be 6" << endl;
    cout << "add(\"extra\") returns "
         << bag.add("extra") << endl;

    displayBag(bag);

    cout << "getFrequencyOf: returns " << bag.getFrequencyOf("one")
                                       << "; should be 2" << endl;

    cout << "contains: returns " << bag.contains("two")
         << "; should be 1" << endl;

    cout << "contains: returns " << bag.contains("extra")
         << "; should be 1" << endl;

    cout << "remove: returns " << bag.remove("one")
         << "; should be 1" << endl;

    displayBag(bag);


    cout << "clear" << endl;
    bag.clear();

    displayBag(bag);

    cout << "isEmpty: returns " << bag.isEmpty()
         << "; should be 1 (true)" << endl;
}

int main() {
    ArrayBag<string> bag;
    cout << "Testing Array-Based Bag: " << endl;
    cout << "The initial bag is empty." << endl;
    bagTester(bag);
    cout << "All done!" << endl;

    return 0;
}