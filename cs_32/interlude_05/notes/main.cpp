#include <iostream>
#include "LinkedList.h"

int main() {
    ListInterface<string>* list1 = new LinkedList<string>();
    ListInterface<string>* list2 = new LinkedList<string>();

    cout << list1->insert(1,"one") << endl;
    cout << list1->insert(2,"two") << endl;
    cout << list1->insert(3,"three") << endl;

    cout << list1->operator==(*list2) << endl;

    return 0;
}