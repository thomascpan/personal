//
// Created by Thomas Pan on 5/22/18.
//

#include "PrecondViolatedExcep.h"

PrecondViolatedExcep::PrecondViolatedExcep(const string &message) : logic_error("Precondition Violated Exception: " + message) {
}
