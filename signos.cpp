
#include <iostream>
#include <string>

double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    }
    else if (lpm <= 100) {
        return "normal";
    }
    else {
        return "taquicardia";
    }
}

int main() {
    double f;
    int lpm;

    std::cout << "Temperatura en Fahrenheit: ";
    std::cin >> f;

    std::cout << "Temperatura en Celsius: "
              << fahrenheitACelsius(f) << std::endl;

    std::cout << "Frecuencia cardiaca (lpm): ";
    std::cin >> lpm;

    std::cout << "Clasificacion: "
              << clasificarFrecuencia(lpm) << std::endl;

    return 0;
}
