#include <iostream>
//Calcular el factorial de un número
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int factorial = 1;
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;
    cin.ignore();
    cin.get();
    return 0;
}
