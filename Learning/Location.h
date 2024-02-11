#ifndef LOCATION_H
#define LOCATION_H

#include "Coords.h"
#include <string>
class Location : public Coords
{
public:
    std::string name;
    std::string country;
    Location();
    void output_info();
};

#endif