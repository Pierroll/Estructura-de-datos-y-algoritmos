#include <iostream>
//comparar 2 números
using namespace std;

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "El primer numero (" << numero1 << ") es mayor que el segundo numero (" << numero2 << ")." << endl;
    } else if (numero2 > numero1) {
        cout << "El segundo numero (" << numero2 << ") es mayor que el primer numero (" << numero1 << ")." << endl;
    } else {
        cout << "Los dos numeros son iguales." << endl;
    }
    cin.ignore();
    cin.get();
    return 0;
}