#include <iostream>
//Promediar números
using namespace std;

int main() {
    int cantidadNumeros;
    double suma = 0.0;
    
    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> cantidadNumeros;
    
    for (int i = 0; i < cantidadNumeros; ++i) {
        double numero;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;
        suma += numero;
    }
    
    double promedio = suma / cantidadNumeros;
    
    cout << "El promedio de los numeros ingresados es: " << promedio << endl;
    cin.ignore();
    cin.get();
    return 0;
}
