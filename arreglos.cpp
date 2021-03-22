#include <iostream>

using namespace std;



char letras[5] { 'n', 'e', 'f', 'a', 'u'};

string palabras[5] = {"Hola", "Como", "Estas", "Tu", "Hoy"};



int main()

{
    int index;


    std::cin >> index;

    string palabra = palabras[index];

    std:: cout << palabra << '\n';

}