#include <iostream>


double calculate(double x, double y, char operation)
{
    if (operation == '+')
    {
        return x + y;
    }
    else if (operation == '-')
    {
        return x - y;
    }
    else if (operation == '*')
    {
        return x * y;
    }
    else if (operation == '/')
    {
        return x / y;
    }
    else
    {
        throw std::invalid_argument("Error: invalid operator.");
    }
}

int main()
{
    double num1;
    double num2;
    char operation;
    std::cout << "Chose an operation\n Format: a+b|a-b|a*b|a/b\n> ";
    std::cin >> num1 >> operation >> num2;
    std::cout << "\n" << calculate(num1, num2, operation);
    return 0;
}
