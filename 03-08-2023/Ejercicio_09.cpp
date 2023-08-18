#include <iostream>
//mostrar números pares
using namespace std;

int main() {
    int limite;
    
    cout << "Ingrese el numero limite: ";
    cin >> limite;
    
    cout << "Secuencia de numeros pares hasta " << limite << ":" << endl;
    
    for (int i = 1; i <= limite; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    cin.ignore();
    cin.get();
    return 0;
}
