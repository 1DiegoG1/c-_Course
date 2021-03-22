#include <iostream>

using namespace std;

class dog
{

    public:

    


    dog(string name, string barkType){


        nName = name;

        nBark = barkType;

    }

    string getName()
    {


        return nName;
    }

    void setName(string newName)
    {

        nName = newName;



    }

    void ladrido()
    {

        cout << nBark << endl;


    }

    private:

    string nName;

    string nBark;       


};

int main()

{
    
    dog druppy("Druppy", "Wooof");
    druppy.setName("Poppy");
    dog catira("Catira", "wouf");
    
    
    cout << druppy.getName() << endl;
    cout << catira.getName() << endl;

    druppy.ladrido();
    catira.ladrido();
    
    



    return 0;

}