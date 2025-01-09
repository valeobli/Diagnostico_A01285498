#ifndef FRACCION_HPP
#define FRACCION_HPP

class Fraccion {

public:
    
    Fraccion(int num = 0, int den = 1);
    Fraccion sumar(const Fraccion& otra);
    Fraccion multiplicar(const Fraccion& otra);

    void imprimir() const;

private:
    int numerador;
    int denominador;
    void simplificar();
    
};

#endif