#include <iostream>
#include <vector>
#include <Windows.h>
#include <cstdlib>

void sleep(int seconds)
{
    Sleep(seconds * 1000);
    return;
}

void clear()
{
    system("cls");
    return;
}

void print_vector(std::vector<int> vectr)
{
    for (int i = 0; i < vectr.size(); i++)
    {
        std::cout << vectr[i] << "\n";
    }
    return;
}