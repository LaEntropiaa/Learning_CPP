#ifndef COORDS_H
#define COORDS_H
#include <iostream>
#include <vector>
#include <string>
class Coords
{
private:
    int status;
public:
    int x ;
    int y ;
    Coords();
    Coords(int x, int y);
    Coords operator + (Coords coord);
    bool operator == (Coords coord);
    friend void output_status(Coords coord);
    virtual void output_info();
};
void output_status(Coords coord);
std::ostream& operator << (std::ostream& out, Coords coord);
std::istream& operator >> (std::istream& in, Coords& coord);

#endif