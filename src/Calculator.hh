#pragma once

#include "Modulator.hh"
class Calculator
{
private:
    Modulator* mod;
public:
    Calculator();
    ~Calculator();
    long do_operation(long x, long y);
};
