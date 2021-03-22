#include <iostream>

using namespace std;

bool isMyplayerDead(int hp){
    if(hp <= 0)
        return true;
    else
        return false;
}

int main()
{
    int totalLife;

    std::cout << "Ingresa la vida del Jugador" << '\n';

    std::cin >> totalLife;
    
    if(isMyplayerDead(totalLife)){
        std::cout << "Game Over" << '\n';
    
    }
}