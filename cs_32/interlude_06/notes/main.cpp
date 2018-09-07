#include <iostream>
#include "LinkedList.h"

using namespace std;

void displayOneItem(string itemToDisplay) {
    cout << itemToDisplay << endl;
}

int main() {
    LinkedList<string> list;
    list.insert(1, "one");
    list.insert(2, "two");
    list.insert(3, "three");
    list.insert(4, "four");
    list.insert(5, "five");

    for (int i = 0; i < list.getLength(); i++) {
        cout << list.getEntry(i+1) << endl;
    }

    cout << endl;

    LinkedIterator<string> currentIterator = list.begin();

    while (currentIterator != list.end()) {
        cout << *currentIterator << endl;
        ++currentIterator;
    }

    cout << endl;

    for_each(list.begin(), list.end(), displayOneItem);

    cout << endl;

    currentIterator = find(list.begin(), list.end(), "one");
    cout << *currentIterator << endl;

    cout << endl;

    int fourCourt = count(list.begin(), list.end(), "four");
    cout << fourCourt << endl;

    cout << endl;

    advance(currentIterator, 2);
    cout << *currentIterator << endl;

    cout << endl;

    currentIterator = list.begin();
    advance(currentIterator, 5);

    int numberRemaining = distance(currentIterator, list.end());
    cout << numberRemaining << endl;

    cout << endl;


    return 0;
}