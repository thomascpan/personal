cmake_minimum_required(VERSION 3.9)
project(notes)

set(CMAKE_CXX_STANDARD 11)

add_executable(notes main.cpp ListInterface.h PrecondViolatedExcep.h PrecondViolatedExcep.cpp Node.h LinkedList.h LinkedIterator.h)