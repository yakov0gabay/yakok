#include <iostream>

int main() {
    double n, f, c, k;
    int unidad;
    
    std::cout << "Digite su temperatura: ";
    std::cin >> n;
    
    std::cout << "Con qué unidad desea esa temperatura?\n";
    std::cout << "Si es Celsius, presione 1.\n";
    std::cout << "Si es Fahrenheit, presione 2.\n";
    std::cout << "Si es Kelvin, presione 3.\n";
    std::cin >> unidad;
    
    switch (unidad) {
        case 1:
            f = (n * 9/5) + 32;
            k = n + 273.15;
            std::cout << "Su temperatura es igual a " << f << "F ____ " << k << "K" << std::endl;
            break;
        case 2:
            c = (n - 32) / 1.8;
            k = (n - 32) / 1.8 + 273.15;
            std::cout << "Su temperatura es igual a " << c << "C ____ " << k << "K" << std::endl;
            break;
        case 3:
            c = n - 273.15;
            f = (n - 273.15) * 1.8 + 32;
            std::cout << "Su temperatura es igual a " << c << "C ____ " << f << "F" << std::endl;
            break;
        default:
            std::cout << "Unidad no válida" << std::endl;
    }
    
    return 0;
}
