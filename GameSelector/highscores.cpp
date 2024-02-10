#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void show_scores()
{
    std::ifstream file("gues_game.txt");
    std::string current_line = "try";
    std::vector<std::string> file_data;
    while (current_line.size() > 0)
    {
        std::getline(file, current_line);
        file_data.push_back(current_line);
    }
    for (std::string score : file_data)
    {
        std::cout << score << "\n";
    }

    file.close();
}

void input_scores(int score)
{
    std::ofstream file("gues_game.txt", std::ofstream::app);
    file << score << "\n";
    file.close();
}
