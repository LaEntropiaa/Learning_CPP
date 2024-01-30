#include <iostream>
#include <cmath>

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main() 
{
    int base, exponent;
    std::cout << "Entre a base and exponent:\n> ";
    std::cin >> base >> exponent;
    std::cout << power(base, exponent);
    return 0;
}

