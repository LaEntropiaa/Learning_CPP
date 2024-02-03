#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functionality.h"

void guess_game()
{
    srand(time(NULL));
    int secret_number = (rand() % 100) + 1;//random number 0-99, we add one so is 1-100
    int guess = 0;
    while (guess != secret_number)
    {
        clear();
        std::cout << "Guess the number between 1 and 100\n> ";
        std::cin >> guess;
        if (secret_number > guess)
        {
            std::cout << "Your guess was lower than the secret number";
            sleep(2);
            clear();
        }
        else if (secret_number < guess)
        {
            std::cout << "Your guess was higher than the secret number";
            sleep(2);
            clear();
        };
    }
    clear();
    std::cout << "Congrats, you guessed the number!\n";
    std::cout << "Returning to menu...";
    sleep(2);
    clear();
    return;
}