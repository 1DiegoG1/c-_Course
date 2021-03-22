#include <iostream>

using namespace std;

int main(){
    int notaCastellano, notaBiologia, notaQuimica, notaFisica, notaEducFisica, notaReligion;
    std::cout << "Introdusca la nota de Castellano" << '\n';
    std::cin >> notaCastellano;

    std::cout << "Introdusca la nota de Religion" << '\n';
    std::cin >> notaReligion;

    std::cout << "Introdusca la nota de EducFisica" << '\n';
    std::cin >> notaEducFisica;

    std::cout << "Introdusca la nota de Biologia" << '\n';
    std::cin >> notaBiologia;

    std::cout << "Introdusca la nota de Fisica" << '\n';
    std::cin >> notaFisica;

    std::cout << "Introdusca la nota de Quimica" << '\n';
    std::cin >> notaQuimica;

    switch (notaCastellano)
    {
    case 20:
        std::cout << "Excelente 20 puntos en Castellano" << '\n';
        break;

    case 19:
        std::cout << "Muy bien 19 puntos en Castellano" << '\n';
        break;
    case 18:
        std::cout << "Muy bien 18 puntos en Castellano" << '\n';
    case 17:
        std::cout << "Bien 17 en Castellano" << '\n';
    case 16:
        std::cout << "Bien 16 en Castellano" << '\n';
    case 15:
        std::cout << "Bien 15 en Castellano" << '\n';
    case 14:
        std::cout << "Sacaste 14 en Castellano" << '\n';
    case 13:
        std::cout << "Sacaste 13 en Castellano" << '\n';
    case 12:
        std::cout << "Sacaste 12 en Castellano" << '\n';
    case 11:
        std::cout << "Sacaste 11 en Castellano" << '\n';
    case 10:
        std::cout << "Sacaste 10 en Castellano" << '\n';
    case 9:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 8:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 7:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 6:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 5:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 4:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 3:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 2:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 1:
        std::cout << "Sacaste 9, requiere reparacion en Castellano" << '\n';
    case 0:
        std::cout << "Sacaste 0, Reprovaste en Castellano" << '\n';
    case 55:
        std::cout << "El alumno no vino, presenta despúes en Castellano" << '\n';
    default:
        std::cout << "Oh, a ocurrido un error introduzca bien la nota(en Castellano)" << '\n';
        break;
    }
    switch (notaQuimica)
    {
    case 20:
        std::cout << "Excelente 20 puntos en Quimica" << '\n';
        break;

    case 19:
        std::cout << "Muy bien 19 puntos en Quimica" << '\n';
        break;
    case 18:
        std::cout << "Muy bien 18 puntos en Quimica" << '\n';
    case 17:
        std::cout << "Bien 17 en Quimica" << '\n';
    case 16:
        std::cout << "Bien 16 en Quimica" << '\n';
    case 15:
        std::cout << "Bien 15 en Quimica" << '\n';
    case 14:
        std::cout << "Sacaste 14 en Quimica" << '\n';
    case 13:
        std::cout << "Sacaste 13 en Quimica" << '\n';
    case 12:
        std::cout << "Sacaste 12 en Quimica" << '\n';
    case 11:
        std::cout << "Sacaste 11 en Quimica" << '\n';
    case 10:
        std::cout << "Sacaste 10 en Quimica" << '\n';
    case 9:
        std::cout << "Sacaste 9, requiere reparacion en Quimica" << '\n';
    case 8:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 7:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 6:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 5:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 4:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 3:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 2:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 1:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 0:
        std::cout << "Sacaste 0, Reprovaste" << '\n';
    case 55:
        std::cout << "El alumno no vino, presenta despúes" << '\n';
    default:
        std::cout << "Oh, a ocurrido un error introduzca bien la nota" << '\n';
        break;
    }
    switch (notaReligion)
    {
    case 20:
        std::cout << "Excelente 20 puntos" << '\n';
        break;

    case 19:
        std::cout << "Muy bien 19 puntos" << '\n';
        break;
    case 18:
        std::cout << "Muy bien 18 puntos" << '\n';
    case 17:
        std::cout << "Bien 17" << '\n';
    case 16:
        std::cout << "Bien 16" << '\n';
    case 15:
        std::cout << "Bien 15" << '\n';
    case 14:
        std::cout << "Sacaste 14" << '\n';
    case 13:
        std::cout << "Sacaste 13" << '\n';
    case 12:
        std::cout << "Sacaste 12" << '\n';
    case 11:
        std::cout << "Sacaste 11" << '\n';
    case 10:
        std::cout << "Sacaste 10" << '\n';
    case 9:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 8:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 7:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 6:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 5:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 4:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 3:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 2:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 1:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 0:
        std::cout << "Sacaste 0, Reprovaste" << '\n';
    case 55:
        std::cout << "El alumno no vino, presenta despúes" << '\n';
    default:
        std::cout << "Oh, a ocurrido un error introduzca bien la nota" << '\n';
        break;
    }
    switch (notaEducFisica)
    {
    case 20:
        std::cout << "Excelente 20 puntos" << '\n';
        break;

    case 19:
        std::cout << "Muy bien 19 puntos" << '\n';
        break;
    case 18:
        std::cout << "Muy bien 18 puntos" << '\n';
    case 17:
        std::cout << "Bien 17" << '\n';
    case 16:
        std::cout << "Bien 16" << '\n';
    case 15:
        std::cout << "Bien 15" << '\n';
    case 14:
        std::cout << "Sacaste 14" << '\n';
    case 13:
        std::cout << "Sacaste 13" << '\n';
    case 12:
        std::cout << "Sacaste 12" << '\n';
    case 11:
        std::cout << "Sacaste 11" << '\n';
    case 10:
        std::cout << "Sacaste 10" << '\n';
    case 9:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 8:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 7:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 6:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 5:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 4:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 3:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 2:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 1:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 0:
        std::cout << "Sacaste 0, Reprovaste" << '\n';
    case 55:
        std::cout << "El alumno no vino, presenta despúes" << '\n';
    default:
        std::cout << "Oh, a ocurrido un error introduzca bien la nota" << '\n';
        break;
    }
    switch (notaBiologia)
    {
    case 20:
        std::cout << "Excelente 20 puntos" << '\n';
        break;

    case 19:
        std::cout << "Muy bien 19 puntos" << '\n';
        break;
    case 18:
        std::cout << "Muy bien 18 puntos" << '\n';
    case 17:
        std::cout << "Bien 17" << '\n';
    case 16:
        std::cout << "Bien 16" << '\n';
    case 15:
        std::cout << "Bien 15" << '\n';
    case 14:
        std::cout << "Sacaste 14" << '\n';
    case 13:
        std::cout << "Sacaste 13" << '\n';
    case 12:
        std::cout << "Sacaste 12" << '\n';
    case 11:
        std::cout << "Sacaste 11" << '\n';
    case 10:
        std::cout << "Sacaste 10" << '\n';
    case 9:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 8:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 7:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 6:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 5:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 4:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 3:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 2:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 1:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 0:
        std::cout << "Sacaste 0, Reprovaste" << '\n';
    case 55:
        std::cout << "El alumno no vino, presenta despúes" << '\n';
    default:
        std::cout << "Oh, a ocurrido un error introduzca bien la nota" << '\n';
        break;
    }
    switch (notaFisica)
    {
    case 20:
        std::cout << "Excelente 20 puntos" << '\n';
        break;

    case 19:
        std::cout << "Muy bien 19 puntos" << '\n';
        break;
    case 18:
        std::cout << "Muy bien 18 puntos" << '\n';
    case 17:
        std::cout << "Bien 17" << '\n';
    case 16:
        std::cout << "Bien 16" << '\n';
    case 15:
        std::cout << "Bien 15" << '\n';
    case 14:
        std::cout << "Sacaste 14" << '\n';
    case 13:
        std::cout << "Sacaste 13" << '\n';
    case 12:
        std::cout << "Sacaste 12" << '\n';
    case 11:
        std::cout << "Sacaste 11" << '\n';
    case 10:
        std::cout << "Sacaste 10" << '\n';
    case 9:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 8:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 7:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 6:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 5:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 4:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 3:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 2:
        std::cout << "Sacaste 9, requiere reparacion" << '\n';
    case 1:
        std::cout << "Sacaste 9, requiere reparacion en Quimica" << '\n';
    case 0:
        std::cout << "Sacaste 0, Reprovaste" << '\n';
    case 55:
        std::cout << "El alumno no vino, presenta despúes" << '\n';
    default:
        std::cout << "Oh, a ocurrido un error introduzca bien la nota" << '\n';
        break;
    }
}