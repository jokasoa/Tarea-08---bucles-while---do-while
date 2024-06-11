//FALTA ENUNCIADO DEL EJERCICIO

#include <iostream>
#include <cstdlib>  // para std::rand() y std::srand()
#include <ctime>    // para std::time()

int main() {
    int aleatorio, num, oportunidades = 1;
    bool adivinaste = false;

    // Inicializar la semilla para la generación de números aleatorios
    std::srand(std::time(0));
    aleatorio = std::rand() % 100 + 1;  // Número aleatorio entre 1 y 100

    // Explicar el juego al usuario
    std::cout << "Adivina el número (entre 1 y 100) en 3 intentos.\n";

    do {
        std::cout << "Intento " << oportunidades << ": Ingrese su número: ";
        std::cin >> num;

        if (num < aleatorio) {
            std::cout << "El número es mayor.\n";
        } else if (num > aleatorio) {
            std::cout << "El número es menor.\n";
        } else {
            adivinaste = true;
            std::cout << "¡Felicitaciones! Adivinaste el número.\n";
        }

        oportunidades++;
    } while (oportunidades <= 3 && !adivinaste);

    if (!adivinaste) {
        std::cout << "Lo siento, has agotado tus oportunidades. El número era " << aleatorio << ".\n";
    }

    return 0;
}
