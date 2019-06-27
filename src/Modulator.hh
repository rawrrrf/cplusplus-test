#pragma once

class Modulator
{
private:
    long mod;
public:
    Modulator(long d);
    ~Modulator();
    long modulate(long value);
};
