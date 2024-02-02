#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>

#ifdef _WIN32
#endif // _WIN32


int main() 
{   
    int answer = 34;
    int points;
    int guess;
    std::cout << "Guess the number;\n> ";
    std::cin >> guess;
    points = guess == answer ? 10 : 0;
    std::cout << "Points: " << points;

    return 0;
}
