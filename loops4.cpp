#include <iostream>

using namespace std;

string nombres[5] = {"Juan", "Pedro", "Dilan", "Fred", "Axel"};

int index;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << nombres[i] << '\n';
    }
    
    while (index < 5)
    {
        std::cout << nombres[index] << '\n';
        index++;
    }
    





}