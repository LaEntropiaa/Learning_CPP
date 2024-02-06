#include <iostream>
#include<vector>

void print_vector(std::vector<int> vectr)
{
    for (int i = 0; i < vectr.size(); i++)
    {
        std::cout << vectr[i] << "\n";
    }
    return;
}

int main()
{
    std::vector<int> data = { 1,2,3,4,8,1972 };
    print_vector(data);
    return 0;
}
