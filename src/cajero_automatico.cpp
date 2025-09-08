#include <iostream>
int main () {
    int x;
    char y;
    double s=100.25;

    
std::cout << "ingrese su pin" << std::endl;
std::cin >> x;
if (x==1008){ 
    std::cout << "bienvenido al menu princpial" << std::endl;
    std::cout << "ingrese la el numero de la transaccion a realizar" << std::endl;
    std::cout << "1. retirar dinero" <<std::endl;
    std::cout << "2. consultar saldo" <<std::endl;
    std::cout << "3. salir del menu" <<std::endl;
}else {
    std::cout << "clave incorrecta" << std::endl;
    return 0;
}
std::cin >> y;
switch (y) {
    case '1':
    std::cout << "¿cuanto dinero desea retirar?" << std::endl;
    std::cin >> s;
    if (s<100.25) {
        std::cout << "tranferencia exitosa" <<std::endl;
        std::cout << "su saldo actual es de  "; 
        std::cout << 100.25 - s << std::endl;
        return 0;
    }else {
        std::cout << "fondos insuficientes" <<std::endl;
        return 0;
    }break;
    case '2':
    std::cout << "su saldo es de " <<std::endl;
    std::cout << s << std::endl;
    break;
    
    case '3':
    return 0;
    break;
    
    default:
std::cout << "opcion invalida" <<std::endl;
break;
} 

}
