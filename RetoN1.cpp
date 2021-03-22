#include <iostream>

using namespace std;

float radio = 5, circulo = 0.0, esfera = 0.0, pi = 3.1416;

int main(){
    circulo = (radio * radio) * pi;
    std::cout << circulo << '\n';
    esfera = (4 * pi) * (radio * radio);
    std::cout << esfera << '\n';

    return 0;
}
