//
// Created by Thomas Pan on 5/22/18.
//

#ifndef NOTES_PRECONDVIOLATEDEXCEP_H
#define NOTES_PRECONDVIOLATEDEXCEP_H

#include <stdexcept>
#include <string>

using namespace std;

class PrecondViolatedExcep : public logic_error {
public:
    PrecondViolatedExcep(const string& message = "");
};

#include "PrecondViolatedExcep.cpp"
#endif //NOTES_PRECONDVIOLATEDEXCEP_H
