#include <iostream>
#include <string>
#include "functionality.h"
#include "guess_game.h"
#include "highscores.h"

int main()
{
    int i = 0;
    while (i == 0)
    {
        util::clear();
        int choice;
        std::cout << "=============\nGAME SELECTOR\n=============\n";
        std::cout << "Slelect an option:\n1- Play guess game\n2- See highscores\n3- Quit\n> ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            util::clear();
            guess_game();
            break;
        case 2:
            util::clear();
            show_scores();
            util::sleep(5);
            break;

        case 3:
            util::clear();
            std::cout << "Goodbye :)";
            util::sleep(2);
            util::clear();
            i++;
            break;
        default:
            util::clear();
            std::cout << "Unvalid option, use the option numbers";
            util::sleep(2);
            break;
        }
    }
    return 0;
}