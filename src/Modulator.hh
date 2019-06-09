#ifndef __test_modulator
#define __test_modulator
class Modulator
{
private:
    long mod;
public:
    Modulator(long d);
    ~Modulator();
    long modulate(long value);
};

#endif