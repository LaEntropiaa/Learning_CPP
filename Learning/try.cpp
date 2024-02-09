#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream file ("hello.txt");
    std::string current_line = "try";
    std::vector<std::string> file_data;
    while (current_line.size() > 1)
    {
        std::getline(file, current_line);
        file_data.push_back(current_line);
    }
    for (std::string line : file_data)
    {
        std::cout << line << "\n";
    }

    file.close();

    return 0;
}
