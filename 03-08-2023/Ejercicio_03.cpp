#include <iostream>
//Programa para verificar si un número es par o impar
int main() {
    using namespace std;

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }
    cin.ignore();
    cin.get();
    return 0;
}
