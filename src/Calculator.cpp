#include <iostream>
#include "Calculator.hh"

using namespace std; 


Calculator::Calculator()
{
    mod = new Modulator(10);
}

Calculator::~Calculator()
{
    delete mod;
}

long Calculator::do_operation(long x, long y) {
    return mod->operation(x, y);
}

