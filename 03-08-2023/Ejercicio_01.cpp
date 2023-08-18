#include <iostream>  // Incluir la biblioteca de entrada y salida estándar
//Programa que suma 2 números
using namespace std;  // Para evitar tener que escribir "std::" repetidamente

int main() {
    // Declaración de variables para almacenar los números ingresados por el usuario
    double numero1, numero2;

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Calcular la suma de los dos números
    double suma = numero1 + numero2;

    // Mostrar el resultado por pantalla
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;
    cin.ignore();
    cin.get();
    return 0;  // Indicar que el programa ha finalizado exitosamente
}