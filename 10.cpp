#include <iostream>

int main() {
    double a, kg, gr;
    int b;
    
    std::cout << "Digite el número en libras que desea convertir: ";
    std::cin >> a;
    
    std::cout << "Si desea convertir a kilogramos, presione 1, y si desea convertir a gramos, presione 2: ";
    std::cin >> b;
    
    if (b == 1) {
        kg = a / 2.20462262;
        std::cout << "Su conversión da " << kg << " kg" << std::endl;
    } else if (b == 2) {
        gr = a * 453.592;
        std::cout << "Su conversión da " << gr << " gramos" << std::endl;
    } else {
        std::cout << "Opción no válida" << std::endl;
    }
    
    return 0;
}
