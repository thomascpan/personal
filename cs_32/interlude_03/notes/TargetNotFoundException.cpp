//
// Created by Thomas Pan on 5/20/18.
//
#include "TargetNotFoundException.h"

TargetNotFoundException::TargetNotFoundException(const string& message)
        : out_of_range("Target not found: " + message)
{
}