#include <iostream>

using namespace std;

int direccion = 4585;
int segundaDireccion = 2214;
int* apuntador = &direccion;

int main(){
    std::cout << *apuntador << '\n';
    
}




