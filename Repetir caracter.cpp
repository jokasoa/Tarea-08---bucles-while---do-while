#include <iostream>

int main() {
    char caracter;
    int cantidad;

    // Solicitar al usuario un carácter
    std::cout << "Ingrese un carácter (a): ";
    std::cin >> caracter;

    // Solicitar al usuario la cantidad de veces que debe repetirse el carácter
    std::cout << "Ingrese la cantidad de veces que el carácter debe repetirse: ";
    std::cin >> cantidad;

    // Imprimir el carácter repetido la cantidad de veces especificada
    for (int i = 0; i < cantidad; ++i) {
        std::cout << caracter << "a ";
    }
    std::cout << std::endl;  // Imprimir una nueva línea al final

    return 0;
}
