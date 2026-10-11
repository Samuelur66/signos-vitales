#include "frecuencia_cardiaca.h"

#include <iostream>

int main() {
    int lpm;

    std::cout << "Ingrese la frecuencia cardiaca en lpm: ";
    if (!(std::cin >> lpm)) {
        std::cerr << "Entrada invalida. Ingrese un numero entero.\n";
        return 1;
    }

    std::cout << "Clasificacion: " << clasificarFrecuencia(lpm) << '\n';
    return 0;
}
