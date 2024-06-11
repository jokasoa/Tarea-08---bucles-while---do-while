//FALTA ENUNCIADO
#include <iostream>
#include <cstdlib>  // para std::rand() y std::srand()
#include <ctime>    // para std::time()

int main() {
    // Inicializar la semilla para la generación de números aleatorios
    std::srand(std::time(0));

    int contador = 0;

    // Usando bucle while para imprimir 100 números aleatorios
    while (contador < 100) {
        int numeroAleatorio = 15 + std::rand() % 106; // Números entre 15 y 120
        std::cout << numeroAleatorio << std::endl;
        contador++;
    }

    return 0;
}


