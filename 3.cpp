#include <iostream>

int main() {
    int x, n;
    x = 0;
    
    std::cout << "Hasta qué número desea su listado: ";
    std::cin >> n;
    
    while (x != n) {
        x = x + 1;
        std::cout << x << std::endl;
    }
    
    return 0;
}