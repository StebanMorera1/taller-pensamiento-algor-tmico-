#include <iostream>
int main () {
    float x, y ;
    char opt;
    std::cin >> x >> opt >> y;

switch (opt) {
    case '*':
    std::cout << x * y << std::endl;
    break;

    case '/':
         if(y==0) {
             std::cout  << "error";
             break;

     }
     std::cout << x / y << std::endl;
     break;
     default:
     std::cout << "sintaxis error" << std::endl;


}
}
