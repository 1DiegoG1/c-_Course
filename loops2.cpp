#include <iostream>

using namespace std;

    bool isHappy = true;
    char input;




int main()
{

        do
        {
            std::cout << "Estas feliz brou? (Y/N) " << '\n';
            std:: cin >> input;
            if (input == 'y')
            {
                std::cout << "Brou si estas feliz :D" << '\n';
            } else if (input == 'n')
            {
                std::cout << "Que mal bro :(" << '\n';
                isHappy = false;
            }
            
            

        } while (isHappy == true);
        


    return 0;
}