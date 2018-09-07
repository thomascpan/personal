cmake_minimum_required(VERSION 3.9)
project(notes)

set(CMAKE_CXX_STANDARD 11)

add_executable(notes main.cpp Sale.cpp Sale.h DiscountSale.cpp DiscountSale.h Employee.h Employee.cpp HourlyEmployee.h HourlyEmployee.cpp SalariedEmployee.h SalariedEmployee.cpp Pet.cpp Pet.h Dog.cpp Dog.h)