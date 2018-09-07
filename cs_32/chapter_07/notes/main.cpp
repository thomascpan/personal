#include <iostream>
#include "ArrayStack.h"
#include "LinkedStack.h"

using namespace std;

void displayStack(StackInterface<string>* stackPtr) {
    cout << endl;
    while (!stackPtr->isEmpty()) {
        cout << stackPtr->peek() <<  " ";
        stackPtr->pop();
    }
    cout << endl << endl;
}


// stopped at chapter 7
int main() {
    StackInterface<string>* stackPtr = new LinkedStack<string>();

    cout << "isEmpty: " << stackPtr->isEmpty()
         << "; should return 1" << endl;

    cout << "push: " << stackPtr->push("one")
         << "; should return 1" << endl;
    cout << "push: " << stackPtr->push("two")
         << "; should return 1" << endl;
    cout << "push: " << stackPtr->push("three")
         << "; should return 1" << endl;
    cout << "push: " << stackPtr->push("four")
         << "; should return 1" << endl;
    cout << "push: " << stackPtr->push("five")
         << "; should return 1" << endl;
    cout << "push: " << stackPtr->push("six")
         << "; should return 0" << endl;

    cout << "isEmpty: " << stackPtr->isEmpty()
         << "; should return 0" << endl;

    displayStack(stackPtr);

    cout << "isEmpty: " << stackPtr->isEmpty()
         << "; should return 1" << endl;

    cout << stackPtr->peek() << endl;

    return 0;
}