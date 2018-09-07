//
// Created by Thomas Pan on 5/19/18.
//

#include "PrecondViolatedExcept.h"

PrecondViolatedExcept::PrecondViolatedExcept(const std::string& message)
        : std::logic_error("Precondition Violated Exception: " + message)
{
}  // end constructor