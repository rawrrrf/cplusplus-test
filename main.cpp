#include "src/Calculator.hh"
#include <iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
    Calculator c = Calculator();
    std::cout << "Adding 5 + 5 = " << c.add(5,5) << std::endl;

    return 0;
}
