#include <iostream>
#include <string>
#include "functionality.h"

int main()
{
    int i = 0;
    while (i == 0)
    {
        clear();
        int choice;
        std::cout << "=============\nGAME SELECTOR\n=============\n";
        std::cout << "Slelect an option:\n1- Play\n2- Quit\n> ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            clear();
            std::cout << "game :)";
            break;
        case 2:
            clear();
            std::cout << "Goodbye :)";
            sleep(2);
            clear();
            i++;
            break;
        default:
            clear();
            std::cout << "Unvalid option, use the option numbers";
            sleep(2);
            break;
        }
    }
    return 0;
}