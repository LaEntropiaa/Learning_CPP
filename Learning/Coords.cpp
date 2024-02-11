#include <iostream>
#include <vector>
#include <string>
#include "Coords.h"

Coords::Coords() {}
Coords::Coords(int x, int y)
{
    this->x = x;
    this->y = y;
}

Coords Coords::operator + (Coords coord)
{
Coords new_coord;
    new_coord.x = x + coord.x;
    new_coord.y = y + coord.y;
    return new_coord;
}

bool Coords::operator == (Coords coord)
{
    if (x == coord.x && y == coord.y)
    {
        return true;
    }
    return false;
}

void Coords::output_info()
{
    std::cout << "Cordinates";
}

void output_status(Coords coord);


void output_status(Coords coord)
{
    std::cout << coord.status;
}

std::ostream& operator << (std::ostream& out, Coords coord)
{
    out << "(" << coord.x << "," << coord.y << ")";
    return out;
}

std::istream& operator >> (std::istream& in, Coords& coord)
{
    in >> coord.x >> coord.y;
    return in;
}

