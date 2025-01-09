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
        cout << "no puede ser 0 el denominador" << endl;
        denominador = 1;
    }
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


Fraccion Fraccion::multiplicar(const Fraccion& otra) {
    int num = numerador * otra.numerador;
    int den = denominador * otra.denominador;
    Fraccion resultado(num, den);
    return resultado;
}

Fraccion Fraccion::sumar(const Fraccion& otra) {
    int num = numerador * otra.denominador + denominador * otra.numerador;
    int den = denominador * otra.denominador;
    Fraccion resultado(num, den);
    return resultado;
}


void Fraccion::imprimir() const {
    cout << numerador << " / " << denominador << endl;
}