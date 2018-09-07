//
// Created by Thomas Pan on 5/20/18.
//

#ifndef NOTES_TARGETNOTFOUNDEXCEPTION_H
#define NOTES_TARGETNOTFOUNDEXCEPTION_H

#include <stdexcept>
#include <string>
using namespace std;
class TargetNotFoundException : public out_of_range
{
public:
    TargetNotFoundException(const string& message = "");
};

#include "TargetNotFoundException.cpp"
#endif //NOTES_TARGETNOTFOUNDEXCEPTION_H
