#include <iostream>

using namespace std;

class mage

{

    public:

    void printHp(){
        
        cout << hp << endl;
    }

    mage(int iHp, int iPower)
    {

        hp = iHp;

        power = iPower;



    }

    float damage()
    {



        return power;

    }

    void getDamage(int value)

    {

        hp -= value;

        cout << "Le quedan: " << hp << endl;


    }

    void speelGreet()
    
    {

        cout << "Whoooosss, Hi" << endl; 
    

    }

    protected:

    int power;
    int hp;

};

class iceMage: public mage
{

    public:

    iceMage(int iHp, int iPower): mage(iHp, iPower)

        {

            hp = iHp;

            power = iPower + 20;



        }




};

class fireMage: public mage
{
    public:

    fireMage(int iHp, int iPower): mage(iHp, iPower)
    {

        hp = iHp + 20;

         power = iPower;



    }

};

int main()

{

    mage* currentMage;
    
    mage Harry(100, 100);
    Harry.speelGreet();

    iceMage Wifeo(10, 10);
    fireMage Lesea(10, 10);

    currentMage = &Wifeo;
    currentMage->getDamage(1);

    currentMage = &Lesea;
    currentMage->getDamage(2);

    Wifeo.printHp();
    Lesea.printHp();

    return 0;

}