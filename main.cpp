#include "src/Calculator.hh"
#include <iostream>
using namespace std; 

int main()
{
    Calculator c = Calculator();
	std::cout << "Modulo 5 + 4 = " << c.do_operation(c.add, 5, 4) << std::endl;
	std::cout << "Modulo 5 - 4 = " << c.do_operation(c.subtract, 5, 4) << std::endl;
	std::cout << "Modulo 5 * 4 = " << c.do_operation(c.multiply, 5, 4) << std::endl;
	std::cout << "Modulo 5 / 4 = " << c.do_operation(c.divide, 5, 4) << std::endl;
    std::cout << "Modulo 5 % 4 = " << c.do_operation(c.modulo, 5, 4) << std::endl;

    return 0;
}
