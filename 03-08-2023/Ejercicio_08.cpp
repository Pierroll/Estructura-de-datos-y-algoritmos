#include <iostream>

using namespace std;

int main() {
    double lado;
    
    cout << "Ingrese la longitud de un lado del cuadrado: ";
    cin >> lado;
    
    double area = lado * lado; // Calcula el área
    
    cout << "El area del cuadrado es: " << area << endl;
    cin.ignore();
    cin.get();
    return 0;
}
