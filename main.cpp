#include "src/Calculator.hh"
#include <iostream>
using namespace std; 

int main()
{
    Calculator c = Calculator();
    std::cout << "Adding 5 + 4 = " << c.do_operation(5, 4) << std::endl;
    std::cout << "Adding 5 + 5 = " << c.do_operation(5, 5) << std::endl;
    std::cout << "Adding 5 + 6 = " << c.do_operation(5, 6) << std::endl;

    return 0;
}
