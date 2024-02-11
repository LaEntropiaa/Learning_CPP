#include <iostream>
#include <vector>
#include <string>
#include "Coords.h"
#include "Location.h"


int main()
{
    Location location;
    Coords& u = location;

    u.output_info();

    return 0;
}
