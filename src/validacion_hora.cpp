#include <iostream>
int main () {
 int name;
 int x;


 std::cout << "ingrese horario en hora militar" << std::endl;
 std::cin >> x;

 if (x < 24 && x > -1) {
     std::cout << "ingrese minito de horario" << std::endl;
     std::cin >> name;
      if (name < 60 && name > -1) {
    std::cout << "gracias horario aceptado" << std::endl;
    std::cout << "horario ingresado fue"  << std::endl;
    std::cout << x << ":" << name << std::endl;
 } else {
     std::cout << "hora invalida" << std::endl;
     std::cout << "verifique y marque nuevamente" << std::endl;
 } 
    
 } else {
     std::cout << "hora invalida" << std::endl;
     std::cout << "verifique y marque nuevamente" << std::endl;
 }

 }
