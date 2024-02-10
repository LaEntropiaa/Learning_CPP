#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Rectangle
{
    double length;
    double width;
};

double area(Rectangle rect)
{
    return rect.length * rect.width;
}

double area(double x)
{
    return x * x;
}

double area(double x, double y)
{
    return x * y;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}

int main()
{
    Rectangle rect;
    rect.length = 40;
    rect.width = 60;

    std::cout << area(rect.length) << "\n";
    std::cout << area(rect.length, rect.width) << "\n";
    std::cout << area(rect);

    return 0;
}
