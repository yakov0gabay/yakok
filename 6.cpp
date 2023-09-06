#include <iostream>

int main() {
    int n;
    double nota = 0.0;
    
    std::cout << "¿Cuántas notas son? ";
    std::cin >> n;
    
    int x = 0;
    while (x < n) {
        double nota1;
        std::cout << "Digite su nota: ";
        std::cin >> nota1;
        nota += nota1;
        x++;
    }
    
    double promedio = nota / n;
    std::cout << "El promedio es: " << promedio << std::endl;
    std::cout << "El promedio ponderado (20%) es: " << (promedio * 0.2) << std::endl;
    
    return 0;
}
