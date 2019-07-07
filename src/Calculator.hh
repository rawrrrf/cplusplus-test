#pragma once

#include "Operator.hh"

class Calculator
{
private:
	Operator * op;
public:
    Calculator();
    ~Calculator();
	long do_operation(unsigned int op, long x, long y);
	enum {
		add = 0,
		subtract,
		divide,
		multiply,
		modulo
	} operators;
};
