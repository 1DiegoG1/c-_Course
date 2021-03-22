#include <iostream>

using namespace std;

int ids[5] [5] = 
{
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}


};

int main()

{
    for (int i = 0; i < 5; i++)
    {
        for (int p = 0; p < 5; p++)
        {
            std::cout << ids[i] [p];
        }
        std::cout << '\n';
    }
    





    return 0;

}