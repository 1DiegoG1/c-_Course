
#include <iostream>
#include <fstream>

using namespace std;

//Contexto: Eres un pirata, cuyo viaje le lleva a explorar una gran isla, en busca de un tesoro legendario.

void DrawMap(int playerposX,int playerposY, char gameMap[6][6])
{
    for( int i = 0; i < 6; i++)
    {
        for(int f = 0; f < 6; f++)
        {
          if( f != playerposX)
          {
           cout << gameMap[f][i];
          }
          else
          {
           if(i != playerposY)
           {
               cout << gameMap[f][i];
           }
           else
           {
               cout <<"H";
           }
           }
         }
         cout << endl;
    }
}

int generateRandom(){
    return rand() % 3 + 3;}

int main()
{
    ofstream MyFile("GameData.txt");
    string playerName = "";
    int playerposX = 0;
    int playerposY = 0;
    bool isgameover = false;
    char mover = ' ';

    if(MyFile.is_open())
        {
        cout << "Introduce tu nombre: "<< endl;
        cin >> playerName;
        MyFile << "Ve por ese tesoro" << endl;
        MyFile << playerName;

        cout << "Hay que elegir un lugar para bajar el ancla, escoge uno de los 6 sectores (0-4)" << endl;
        cin >> playerposX;
        cout << "Bien, pero hara falta ser mas especifico, Apresurate (0-4)" << endl;
        cin >> playerposY;
        }

    MyFile.close();

    ifstream MyFileR("GameData.txt");
    string line;

    if(MyFileR.is_open())
    {
            while(getline(MyFileR, line))
            {
                cout << line << endl;
            }
    }
    else
    {
        cout << "Ha ocurrido un error al abrir el archivo, revisa tu antivirus";
    }
    char gameMap[6][6] =
    {
        {'.', '.', '~', '~', '-','-'},
        {'.', '.', '~', '~', '-','-'},
        {'.', '.', '~', '~', '-','-'},
        {'.', '.', '~', '~', '-','-'},
        {'.', '.', '~', '~', '-','-'},
        {'.', '.', '~', '~', '-','-'}

    };

    int treasureX = generateRandom();
    int treasureY = generateRandom();
    gameMap[treasureX][treasureY] = 'X';

    DrawMap(playerposX, playerposY, gameMap);


    while(isgameover == false)
{
    cout <<"\nEncuentra el tesoro, marcado con una X en el mapa " << endl;
    cin >> mover;
    switch (mover)
        {
        case'd':
            playerposX++;
            break;
        case'a':
            playerposX--;
            break;

        case'w':
            playerposY--;
            break;
        case's':
            playerposY++;
            break;

        case'p':
            isgameover = true;
            break;
        default:
            cout<<"No es momento de filosofar pirata"<<endl;
            break;
        }

    DrawMap(playerposX, playerposY, gameMap);


    if (playerposX < 0 || playerposX > 5 || playerposY < 0 || playerposY > 5)
        {
            cout<<"PERDISTE: Hemos perdido un gran camarada"<<endl;
            isgameover = true;
        }
    else if(playerposX == treasureX && playerposY == treasureY)
    {
            cout<<"GANASTE: Lo lograste, bajen las velas! "<<endl;
            isgameover = true;
    }
}

    return 0;
}