#include <iostream>

using namespace std;

class mage 

{

    public:


    mage(int hp, int mana, int power)
    {

    iHp = hp;

    iMana = mana;

    iPower = power;

    }

    void spell()
    
    {

        cout << "Fireworks!!" << iPower << endl;


    }



    

    int iHp, iMana, iPower;
    
     

};

class iceMage: public mage
    
{
    public:

        iceMage(int hp, int mana, int power): mage(hp, mana, power)

        {


            iHp = hp;

            iMana = mana;

            iPower = power + 100;


        }



};

int main()

{

    mage Bob(100, 10, 20);

    Bob.spell();

    iceMage Lius(100, 100, 20);
    Lius.spell();

    return 0;

}