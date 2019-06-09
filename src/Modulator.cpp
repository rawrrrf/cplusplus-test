#include "Modulator.hh"
#include <iostream>

Modulator::Modulator(long m)
{
    mod = m;
    std::cout << "Modulator Constructed" << std::endl;
}

Modulator::~Modulator()
{
    std::cout << "Modulator Destructed" << std::endl;
}

long Modulator::modulate(long v) {
    return v % mod;
}
