#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ofstream file ("hello.txt");
    if (file.is_open())
    {
        std::cout << "success n00b\n";
    }
    std::vector<std::string> names;
    names.push_back("Alonso");
    names.push_back("Kevin");
    names.push_back("Arasha");
    for (std::string i : names)
    {
        file << i << "\n";
    }
    file.close();

    return 0;
}
