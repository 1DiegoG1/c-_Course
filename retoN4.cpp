#include <iostream>

#include <fstream>

using namespace std;

void drawMap(int heroPosX, int heroPosY, char map[5] [5])

{


  for (int i = 0; i < 5; i++)

  {

    for (int p = 0; p < 5; p++)

    {
      
    if (i != heroPosY)

    {

      cout << map[p] [i];

    }

    else

    {
      if (p != heroPosX)

      {

        cout << map[p] [i];

      } else

        cout << 'H';

      

      

    }

    }
    
    cout << endl;
    


  }
  
cout << endl;

}

int main()

{

  ofstream MyFile ("RetoN4.txt");

    string playerName;

    string line;

  bool gameOver = false;

  char map[5] [5] = 
  {

    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'}



  };

  int heroPosX;

  int heroPosY;

  cout << "Introduce la posision donde quieres aparecer" << endl;
  
  if (MyFile.is_open())

  {

    cout << "Introduce tu nombre: "<< endl;

    cin >> playerName;

    MyFile << playerName;

    cout << "Introduce el lugar donde quieres aparecer" << endl;

    cout << "Primero, posicion en X" << endl;

    cin  >> heroPosX;

    cout << "Segundo, posicion en Y" << endl;

    cin >> heroPosY; 

  }
    
    MyFile.close();

    ifstream MyFileR("GameData.txt");
    

    if(MyFileR.is_open())

    {

            while(getline(MyFileR, line))

            {

                cout << line << endl;

            }
    }
  char input;

  while (gameOver == false)

  {  

  cout << "Estas aqui." << endl;

  drawMap(heroPosX, heroPosY, map);

  cout << "¿A donde te quieres mover?" << endl;

  cout << "(a) para moverte a la izquierda" << endl;

  cout << "(d) para moverte a la derecha" << endl;

  cout << "(e) para terminar el juego" << endl;

  cout<< "(w) para subir" << endl;

  cout<< "(s) para bajar" << endl;

  cin >> input;

  
  switch (input)

  {

  case 'd':

    heroPosX++;

    drawMap(heroPosX, heroPosY, map);

    break;

  case 'a':

    heroPosX--;

    drawMap(heroPosX, heroPosY, map);

    break;

  case 'e':

    cout << "Game Over" << endl;

    gameOver = true;
    
    break;
  
  case 's':

    heroPosY++;

    drawMap(heroPosX, heroPosY, map);

    break;

  case 'w':

    heroPosY--;

    drawMap(heroPosX, heroPosY, map);

    break;
    

  default:

    cout << "Uuuups, Datos invalido, vuelve a intentarlo" << endl;

    break;

  }

  }
  

  

  
}