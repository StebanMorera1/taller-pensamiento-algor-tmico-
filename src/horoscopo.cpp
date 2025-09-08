#include <iostream>


std::string signoZodiacal(int dia, int mes) {
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) return "Aries";
    if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) return "Tauro";
    if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) return "Géminis";
    if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) return "Cáncer";
    if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) return "Leo";
    if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) return "Virgo";
    if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) return "Libra";
    if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) return "Escorpio";
    if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) return "Sagitario";
    if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) return "Capricornio";
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) return "Acuario";
    if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) return "Piscis";
    return "Fecha inválida";
}

int main() {
    int dia, mes;
    std::cout << "Ingrese dia de nacimiento: ";
    std::cin >> dia;
    std::cout << "Ingrese mes de nacimiento (1-12): ";
    std::cin >> mes;

    std::cout << "Su signo zodiacal es: " << signoZodiacal(dia, mes) << std::endl;
    return 0;
}
