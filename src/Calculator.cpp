#include <iostream>
#include "Calculator.hh"

using namespace std; 


Calculator::Calculator()
{
	op = nullptr;
}

Calculator::~Calculator()
{
	delete op;
}


long Calculator::do_operation(unsigned int operate, long x, long y) {

	switch (operate) {
	case add:
		op = new Addition();
		break;
	case subtract:
		op = new Subtraction();
		break;
	case divide:
		if (0 != y) {
			op = new Division(); //avoid division by zero
		}
		else {
			cout << "Error: division by zero";
		}
		break;
	case multiply:
		op = new Multiplication();
		break;
	case modulo:
		op = new Modulator();
		break;
	default:
		cout << "invalid operation";
		break;
	}
	if (op)
		return op->operation(x, y);
	else
		return 0;
}

