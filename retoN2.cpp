#include <iostream>

using namespace std;

char desicion;

int desicionA;

void ejercio(int a)
{
    
    if (a == 1)
    {
        std::cout << "Bien, hagamos adminales" << '\n';

        std::cout << "Listo"  << '\n';

    }
    
    else if (a == 2)
    {
        std::cout << "Bien, hagamos Arm" << '\n';

        std::cout << "Listo"  << '\n';

    }
    
    else if (a == 3)
    {
        std::cout << "Niiice, hagamos adminales y Arm" << '\n';

        std::cout << "Listo"  << '\n';

    }
    

    else

        std::cout << "Uuuuups, algo salio mal" << '\n';


}

void desayuno(int a)
{
    if ( a == 1)

    {
        std::cout << "Preparamos la arepa" << '\n';
        
        std::cout << "Y a desayunar" << '\n';
        
        std::cout << ":D" << '\n';

    }

    else if (a == 2)

    {

        std::cout << "Preparamos el pan" << '\n';

        std::cout << "Y a desayunar" << '\n';

        std::cout << ":D" << '\n';

    }
    
    else if(a == 3)

    {

        std::cout << "Preparamos el pan" << '\n';

        std::cout << "Y a desayunar" << '\n';

        std::cout << ":D" << '\n';

    }

    else
        std::cout << "Uuuups, ha salido algo mal D:" << '\n';

}

void final(){
    std::cout << "Listo puedes continuar con tu dia" << '\n';
}

void duchaFria(){
    std::cout << "Entras al baño" << '\n';
    std::cout << "Abres la regadera" << '\n';
    std::cout << "Y a disfrutar una ducha bien fria :)" << '\n';

}

void banoCaliente()
{
    std::cout << "Entras al baño" << '\n';
    std::cout << "Abres el grifo para elejir la temperatura adecuada" << '\n';
    std::cout << "Disfrutas de un baño caliente muy relajante" << '\n';
}

int main()

{

    std::cout << "Hola, Buenos dias" << '\n';

    std::cout << "¿Que haras primero?" << '\n';

    std::cout << "(a) para un Baño" << '\n';

    std::cout << "(b) para desayunar" << '\n';

    std::cout << "(c) para hacer ejercicio" << '\n';

    std:: cin >> desicion;

    if (desicion == 'a')
    {
        std::cout << "Bien vas a bañarte" << '\n';

        std::cout << "¿Que tipo de baño quieres?" << '\n';

        std::cout << "(1) para una ducha fria" << '\n';

        std::cout << "(2) para un baño caliente" << '\n';

        std::cin >> desicionA;

        switch (desicionA)
        {
        case 1:

            std::cout << "¡OK!, elejiste una ducha fria" << '\n';

            duchaFria();

            final();
            
            break;
        
        case 2:

            std::cout << "Good, elejiste un baño caliente" << '\n';

            banoCaliente();

            final();

        default:

            std::cout << "Uuuups, ha salido algo mal ;(" << '\n';

            break;
        }
    }
    
    else if (desicion == 'b')
    {
        std::cout << "¡Vale!, vamos a desayunar, ¿Que quieres desayunar?" << '\n';

        std::cout << "(1) Arepa" << '\n';

        std::cout << "(2) Pan" << '\n';

        std::cout << "(3) Cereal" << '\n';

        std::cin >> desicionA;

        desayuno(desicionA);
        final();
    }
    
    else if(desicion == 'c')
    {
        std::cout << "¡Niice!, vamos a hacer ejercicio, ¿Que tipo de ejercicio quieres hacer?" << '\n';

        std::cout << "(1) Abdominales" << '\n';

        std::cout << "(2) Arm" << '\n';

        std::cout << "(3) abdominales y Arm" << '\n';

        std::cin >> desicionA;

        ejercio(desicionA);



    }



}