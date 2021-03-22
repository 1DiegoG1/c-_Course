#include <iostream>

using namespace std;

char map[5] = {'1', '1', '1', '1', '1'};
int heroPos = 0;
char input;
bool isGameOver = false;


void drawMap(int a, char b[])
{
    for (int i = 0; i < 5; i++)
    {
        if(i != heroPos)
        {
            cout << map[i];
        }
        else
            cout << 'H';
    }
    
    cout << '\n';


}

int main()
{
    while (isGameOver == false)
    {
        drawMap(heroPos, map);

    cin >> input;

    if (input == 'd')
    {
        heroPos = heroPos + 1;
    } else if (input == 'a')
    {
        heroPos = heroPos - 1;
    }
    
    drawMap(heroPos, map);    
        
    }
    


    return 0;
}