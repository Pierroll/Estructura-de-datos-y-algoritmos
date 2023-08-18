#include <iostream>
//Convertir de celcius a fahrenheit
using namespace std;

int main() {


    double temperaturaCelsius, temperaturaFahrenheit;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperaturaCelsius;

    // Aplicar la fórmula de conversión Celsius a Fahrenheit: F = C * 9/5 + 32
    temperaturaFahrenheit = temperaturaCelsius * 9/5 + 32;

    cout << "La temperatura en grados Fahrenheit es: " << temperaturaFahrenheit << endl;
    cin.ignore();
    cin.get();
    return 0;
}
