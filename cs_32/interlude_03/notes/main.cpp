#include <iostream>
#include "PlainBox.h"
#include "TargetNotFoundException.h"
#include <cassert>
#define MAX_SIZE 10

using namespace std;

PlainBox<string> findBox(PlainBox<string> boxes[], int size, string target) throw(TargetNotFoundException);

void encodeChar(int i, string& str);

void encodeString(int numChar, string& str);

int main() {
    PlainBox<string> myBoxes[5];
    myBoxes[0]  = PlainBox<string>("ring");
    myBoxes[1]  = PlainBox<string>("hat");
    myBoxes[2]  = PlainBox<string>("shirt");
    myBoxes[3]  = PlainBox<string>("sock");
    myBoxes[4]  = PlainBox<string>("shoe");
    PlainBox<string> foundBox;
    try {
        foundBox = findBox(myBoxes, 5, "glasses");
    } catch (logic_error logErr) {
        cout << logErr.what() << endl;
        foundBox = PlainBox<string>("nothing");
    }

    cout << foundBox.getItem() << endl;


//    string str1 = "Sarah";
//    encodeString(99, str1);
//    cout << str1 << endl;
    return 0;
}

PlainBox<string> findBox(PlainBox<string> boxes[], int size, string target) throw(TargetNotFoundException) {
    int index = 0;
    bool found = false;
    while (!found && (index < size)) {
        if (target == boxes[index].getItem()) {
            found = true;
        } else {
            index++;
        }
    }
    if (!found) {
        throw TargetNotFoundException(target + " not found in box!");
    }
    return  boxes[index];
}


void encodeChar(int i, string &str) {
    int base = static_cast<int>('a');
    if (isupper(str[i])) {
        base = int('A');
    }

    char newChar = (static_cast<int>(str[i]) - base + 3) % 26 + base;
    str.replace(i, 1, 1, newChar);
}

void encodeString(int numChar, string &str) {
    try {
        for (int j = numChar - 1; j >= 0; j--) {
            encodeChar(j, str);
        }
    } catch (out_of_range e) {
        cout << "The string does not contain " << numChar << " characters." << endl;
        cout << e.what() << endl;
    }
}
