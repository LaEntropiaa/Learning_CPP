#include <iostream>
#include <fstream>


int main()
{
    std::ofstream file ("hello.txt");
    
    file.close();

    return 0;
}
