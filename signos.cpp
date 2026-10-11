
#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    double f;

    std::cout << "Temperatura en Fahrenheit: ";
    std::cin >> f;

    std::cout << "Temperatura en Celsius: "
              << fahrenheitACelsius(f) << std::endl;

    return 0;
}
