#include <iostream>
int main () {
    char x;
    float y, s, r;



    std::cout << "¿que tipo de cliente es?" << std::endl;
    std::cout << "1. cliente vip" << std::endl;
    std::cout << "2. cliente regular" << std::endl;

std::cin >> x;
switch (x) {
    case '1':
        std::cout << "usted tiene el 20%" << std::endl;
        std::cout << "ingrese el costo de sus productos" << std::endl;
        std::cin >> y;
        std::cout << "su total fue de" << std::endl;
        std::cout << y - (y*0.20) << std::endl;
        break;

    case '2':
        std::cout << "¿cual es el total de su comprar?" << std::endl;
        std::cin >> s;
        std::cout << "¿cuantos productos comprar?" << std::endl;
        std::cin >> r;
        if(r > 3 ) {
            std::cout << "usted tiene el 10%" << std::endl;
            std::cout << "su total es de " << std::endl;
            std::cout << s - (s*0.10) << std::endl;
            break;
        }else{
             std::cout << "usted no cuenta con descuentos" << std::endl;
             std::cout << "su total es de" << std::endl;
             std::cout << s;
             break;
        }
default:
std::cout <<  "opcion invalida" << std::endl;
        break;}
}
