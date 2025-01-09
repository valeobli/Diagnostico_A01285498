#include <iostream>
#include "Fraccion.hpp"
using namespace std;

int main() {
    Fraccion f1(6, 3);
    Fraccion f2(2, 7);

    cout << "fraccion 1: ";
    f1.imprimir();
    cout << "fraccion 2: ";
    f2.imprimir();

    Fraccion multiplicacion = f1.multiplicar(f2);
    cout << "Multiplicacion: ";
    multiplicacion.imprimir();

    Fraccion suma = f1.sumar(f2);
    cout << "suma: ";
    suma.imprimir();

    return 0;
}