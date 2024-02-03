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