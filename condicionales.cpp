#include <iostream>

using namespace std;

int main(){
    int Math;
    int Biology;
    std::cout << "¿Cuanto sacaste en Matematicas?" << '\n';
    std::cin >> Math;
    std::cout << "¿Cuanto sacaste en Biologia" << '\n';
    std::cin >> Biology;

    if (Math >= 5)
    std::cout << "Aprobado" << '\n';
        else if(Math == 20)
            std::cout << "Excelente" << '\n';
    else 
        std::cout << "reprobado" << '\n';
    if (Biology >= 8)   
        std::cout << "Aprovado" << '\n';
        else if(Biology == 20)
            std::cout << "Excelente" << '\n';
    else  
        std::cout << "reprobado" << '\n';

    
    
}