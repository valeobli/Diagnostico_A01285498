#include <iostream>
#include "Fraccion.hpp"
using namespace std;

int main() {
    Fraccion f1(6, 3);
    Fraccion f2(2, 7);

    cout << "Fracción 1: ";
    f1.imprimir();
    cout << "Fracción 2: ";
    f2.imprimir();

    Fraccion suma = f1 + f2;  
    cout << "Suma: ";
    suma.imprimir();

    Fraccion multiplicacion = f1.multiplicar(f2);
    cout << "Multiplicación: ";
    multiplicacion.imprimir();

    return 0;
}
