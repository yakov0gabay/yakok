#include <iostream>

int main() {
    double nota1, nota2, nota3, nota4;
    
    std::cout << "Digite su primera nota: ";
    std::cin >> nota1;
    
    std::cout << "Digite su segunda nota: ";
    std::cin >> nota2;
    
    std::cout << "Digite su tercera nota: ";
    std::cin >> nota3;
    
    std::cout << "Digite su cuarta nota: ";
    std::cin >> nota4;
    
    double definitiva = (nota1 * 0.25) + (nota2 * 0.25) + (nota3 * 0.20) + (nota4 * 0.30);
    
    std::cout << "La nota definitiva es: " << definitiva << std::endl;
    
    return 0;
}