#include <iostream>

using namespace std;

class cat 
{

    public:

    string name;

    cat()
    {
        name = "Guapo";



    }
    cat (string catName)
    {

        name = catName;


    }

    void Meow()
    {

        cout << name << " DICE: SOY ARRECHO" << endl;


    }

};

int main()
{
    cat miPrimerGato;
    cat segundoGato("Francisco");

    miPrimerGato.Meow();
    segundoGato.Meow();

    cout << miPrimerGato.name << endl;

    cout << segundoGato.name << endl;

    

    for (int i = 0; i < 3; i++)

    {

        segundoGato.Meow();

    }
     return 0;
}