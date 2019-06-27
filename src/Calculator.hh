#pragma once

#include "Modulator.hh"
class Calculator
{
private:
    Modulator* mod;
public:
    Calculator();
    ~Calculator();
    long add(long x, long y);
    long sub(long x, long y);
};
