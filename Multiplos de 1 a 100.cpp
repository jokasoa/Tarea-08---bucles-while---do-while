#include <iostream>
//FALTA ENUNCIADO

int main() {
    int numero = 1;

    // Mientras el número sea menor o igual a 100
    while (numero <= 100) {
        // Verificar si el número es múltiplo de 5
        if (numero % 5 == 0) {
            std::cout << numero << std::endl;
        }
        // Incrementar el número en 1
        numero++;
    }

    return 0;
}



