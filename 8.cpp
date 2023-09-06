#include <iostream>

int main() {
    int a, b, c;
    
    std::cout << "Digite su primer número: ";
    std::cin >> a;
    
    std::cout << "Digite su segundo número: ";
    std::cin >> b;
    
    c = a + b;
    
    std::cout << "El resultado de la suma es " << c << std::endl;
    
    return 0;
}