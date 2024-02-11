#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "functionality.h"
#include "highscores.h"

void guess_game()
{
    srand(time(NULL));
    int secret_number = (rand() % 100) + 1;//random number 0-99, we add one so is 1-100
    int guess = 0;
    int attempts = 0;
    std::vector<int> guesses;
    while (guess != secret_number)
    {
        util::clear();
        std::cout << "Guess the number between 1 and 100\n> ";
        std::cin >> guess;
        if (secret_number > guess)
        {
            std::cout << "Your guess was lower than the secret number";
        }
        else if (secret_number < guess)
        {
            std::cout << "Your guess was higher than the secret number";
        };
        util::sleep(2);
        util::clear();
        guesses.push_back(guess);
        attempts++;
    }
    util::clear();
    std::cout << "Congrats, you guessed the number in " << attempts << " attempst!\n";
    std::cout << "Guesses:\n";
    util::print_vector(guesses);
    input_scores(attempts);
    std::cout << "Returning to menu...";
    util::sleep(4);
    util::clear();
    return;
}