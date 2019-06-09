#include <iostream>
#include "Calculator.hh"

using namespace std; 


Calculator::Calculator()
{
    std::cout << "Calculator Constructed" << std::endl;
}

Calculator::~Calculator()
{
    std::cout << "Calculator Destructed" << std::endl;
}

long Calculator::add(long x, long y) {
    return x+y;
}

long Calculator::sub(long x, long y) {
    return x-y;
}

