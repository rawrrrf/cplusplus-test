#pragma once
#include "Calculator.hh"


class Operator
{
protected:
	unsigned int op;
	long num1;
	long num2;
public:
	virtual long operation(long x, long y) = 0;
	void setOperand(unsigned short operators) {
		op = operators;
	};
	void setNum1(long x) {
		num1 = x;
	};
	void setNum2(long y) {
		num2 = y;
	};
};
class Modulator : public Operator
{
public:
	long operation(long x, long y) {
		return x % y;
	};
};
class Addition : public Operator
{
public:
	long operation(long x, long y) {
		return x + y;
	};
};
class Subtraction : public Operator
{
public:
	long operation(long x, long y) {
		return x - y;
	};
};
class Multiplication : public Operator
{
public:
	long operation(long x, long y) {
		return x * y;
	};
};

class Division : public Operator
{
public:
	long operation(long x, long y) {
		return x / y;
	};
};