#include "Modulator.hh"
#include <iostream>

Modulator::Modulator(long m)
{
    mod = m;
}

Modulator::~Modulator() = default;

long Modulator::operation(long x, long y) {
    return (x+y) % mod;
}
