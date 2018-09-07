cmake_minimum_required(VERSION 3.9)
project(notes)

set(CMAKE_CXX_STANDARD 11)

add_executable(notes main.cpp DictionaryInterface.h PrecondViolatedExcept.h PrecondViolatedExcept.cpp Entry.h ArrayDictionary.h TreeDictionary.h HashedEntry.h)