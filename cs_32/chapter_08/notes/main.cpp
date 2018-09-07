#include <iostream>
#include <string>
#include "ArrayList.h"
#include "LinkedList.h"

using namespace std;

//void displayList(ArrayList<string>& list) {
//    cout << "list size: " << list.getLength() << endl;
//    for (int i = 1; i < (list.getLength()+1); i++) {
//        cout << list.getEntry(i) << " ";
//    }
//    cout << endl << endl;
//}

int main() {
    ListInterface<string>* listPtr = new LinkedList<string>();
    string data[] = {"one", "two", "three", "four", "five", "six"};
    cout << "isEmpty: returns " << listPtr->isEmpty()
                                << "; should be 1 (true)" << endl;

    for (int i = 0; i < 6; i++) {
        if (listPtr->insert(i+1, data[i])) {
            cout << "Inserted " << listPtr->getEntry(i+1)
                 << " at position " << (i+1) << endl;
        } else {
            cout << "Cannot insert " << data[i]
                 << " at position " << (i+1) << endl;
        }
    }

    for (int i = 0; i < 6; i++) {
        if (listPtr->remove(i+1)) {
            cout << "Remove " << data[i]
                 << " at position " << (i+1) << endl;
        } else {
            cout << "Cannot remove " << data[i]
                 << " at position " << (i+1) << endl;
        }
    }

    return 0;
}