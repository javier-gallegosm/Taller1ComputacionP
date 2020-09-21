#include <iostream>
#include "funciones.h"

/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc, char** argv) {

    std::cout << std::endl;
    for (int i = 0; i < argc; i++) {
        imprimir(argv[i]);
    }

    participantes();
    std::cout << std::endl;

    return 0;
}

