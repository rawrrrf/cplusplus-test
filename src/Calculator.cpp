#include <iostream>
#include "Calculator.hh"

using namespace std; 


Calculator::Calculator()
{
    mod = new Modulator(10);
    std::cout << "Calculator Constructed" << std::endl;
}

Calculator::~Calculator()
{
    std::cout << "Calculator Destructed" << std::endl;
    delete mod;
}

long Calculator::add(long x, long y) {
    return mod->modulate(x+y);
}

long Calculator::sub(long x, long y) {
    return mod->modulate(x-y);
}

