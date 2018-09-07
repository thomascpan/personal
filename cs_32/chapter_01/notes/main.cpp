// C++ Interlude 1

#include <iostream>
#include <string>
#include "PlainBox.h"
#include "MagicBox.h"

using namespace std;

void placeInBox(PlainBox<string>* theBox, string theItem)
{
    theBox->setItem(theItem);
} // end placeInBox

int main()
{
    string specialItem = "Riches beyond compare!";
    string otherItem = "Hammer";

    PlainBox<string>* myPlainBoxPtr = new PlainBox<string>();
    placeInBox(myPlainBoxPtr, specialItem);

    MagicBox<string>* myMagicBoxPtr = new MagicBox<string>();
    placeInBox(myMagicBoxPtr, otherItem);
    placeInBox(myMagicBoxPtr, specialItem);

    cout << myMagicBoxPtr->getItem() << endl;

    delete myPlainBoxPtr;
    myPlainBoxPtr = nullptr;
    delete myMagicBoxPtr;
    myMagicBoxPtr = nullptr;

    return 0;
}  // end main