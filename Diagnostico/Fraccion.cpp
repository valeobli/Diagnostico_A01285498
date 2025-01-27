#include "Fraccion.hpp"
#include <iostream>
using namespace std;

void Fraccion::simplificar() {
    int menor = (numerador < denominador) ? numerador : denominador;
    for (int i = menor; i > 1; i--) {
        if (numerador % i == 0 && denominador % i == 0) {
            numerador /= i;
            denominador /= i;
            break;
        }
    }
}

Fraccion::Fraccion(int num, int den) {
    if (den == 0) {
        cout << "El denominador no puede ser 0." << endl;
        denominador = 1;
    } else {
        if (num < 0 && den < 0) {
            num = -num;
            den = -den;
        } else if (den < 0) {
            num = -num;
            den = -den;
        }
        numerador = num;
        denominador = den;
        simplificar();
    }
}

Fraccion Fraccion::operator+(const Fraccion& otra) const {
    int num = numerador * otra.denominador + denominador * otra.numerador;
    int den = denominador * otra.denominador;
    return Fraccion(num, den);
}

Fraccion Fraccion::multiplicar(const Fraccion& otra) {
    int num = numerador * otra.numerador;
    int den = denominador * otra.denominador;
    return Fraccion(num, den);
}

void Fraccion::imprimir() const {
    cout << numerador << " / " << denominador << endl;
}
