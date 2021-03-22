#include <iostream>

#include <fstream>

using namespace std;

int main()
{

    ofstream Myfile ("game.txt");

    string namePlayer;
    
    if (Myfile.is_open())
    {

        Myfile << "Hola platzi" << endl;

        Myfile << "Mi nombre es" << endl;

        cout << "Introduce el nombre de tu heroe" << endl;

        cin >> namePlayer;
    
        Myfile << namePlayer;

    }



    
    
    
    Myfile.close();

    ifstream MyFileRead ("game.txt");

    string nickname;

    int reglon;

    string line;

    if (MyFileRead.is_open())
    {
        while (getline(MyFileRead, line))
        {
            
            reglon++;
        
            if (reglon == 3)
            {
                
                nickname = line;

            }
            

        }
        
    }
    
    
    cout << "Welcome:" << endl;
    cout << nickname << endl;

    return 0;

}