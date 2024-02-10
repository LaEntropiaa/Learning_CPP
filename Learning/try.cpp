#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void print_array(const int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        
        std::cout << data[i] << "\n";
    }
}

int main()
{
    int data[] = { 1,2,3 };
    print_array(data, sizeof(data) / sizeof(data[0]));

    return 0;
}
