#include <iostream>

int main() {
    int edad;
    
    std::cout << "Escriba su edad en entero: ";
    std::cin >> edad;
    
    if (edad >= 18) {
        std::cout << "Ud es mayor de edad" << std::endl;
    } else {
        std::cout << "Ud es menor" << std::endl;
    }
    
    return 0;
}