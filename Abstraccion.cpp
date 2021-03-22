#include <iostream>

using namespace std;

class Human {

    public:

    Human(int Iage)
    {

        age = Iage;


    }

    void thinking(){

        cout << think() << endl;
    }

    private:

    int age;
    int inteligencia;
    int estadoEmocional;
    int estadoSocial;

    string think(){

        if ( age < 18)
        {
            return "I'm a babby";

        }   else if (inteligencia == 100) {

            return "Soy un genio";
        
        }   else if (estadoSocial == 100){

        
            return "Wow, soy todo un capo";
        }  else if (estadoEmocional == 0) {

            return "Estoy triste ;( ";
        }
        
        

    }

};

int main()
{

 Human Bob(18);

    Bob.thinking();
    return 0;

}