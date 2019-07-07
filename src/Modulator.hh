#pragma once

class Modulator
{
private:
    long mod;
public:
    explicit Modulator(long d);
    ~Modulator();
    long operation(long x, long y);
};
