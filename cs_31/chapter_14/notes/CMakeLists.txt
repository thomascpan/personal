cmake_minimum_required(VERSION 3.9)
project(notes)

set(CMAKE_CXX_STANDARD 11)

add_executable(notes main.cpp Employee.cpp Employee.h HourlyEmployee.cpp HourlyEmployee.h SalariedEmployee.cpp SalariedEmployee.h PFArrayD.cpp PFArrayD.h PFArrayDBak.cpp PFArrayDBak.h)