#include <iostream>
//Programa para calcular área de un triángulo
int main() {
    using namespace std;

    double base, altura;
    
    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    // Calcula el área del triángulo utilizando la fórmula (base * altura) / 2
    double area = (base * altura) / 2;

    cout << "El area del triangulo es: " << area << endl;
    cin.ignore();
    cin.get();
    return 0;
}