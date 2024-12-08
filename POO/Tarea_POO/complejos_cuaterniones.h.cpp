#ifndef COMPLEJOS_CUATERNIONES_H
#define COMPLEJOS_CUATERNIONES_H

#include <iostream>
#include <cmath>

using namespace std;

class Complejo {
private:

    double real;
    double imaginario;

public:
    
    Complejo(double r = 0.0, double i = 0.0);

    double obtenerReal() const;
    double obtenerImaginario() const;

    Complejo sumar(const Complejo &obj) const;
    Complejo restar(const Complejo &obj) const;
    Complejo multiplicar(const Complejo &obj) const;
    Complejo dividir(const Complejo &obj) const;

    Complejo operator + (const Complejo &obj) const;
    Complejo operator - (const Complejo &obj) const;
    Complejo operator * (const Complejo &obj) const;
    Complejo operator / (const Complejo &obj) const;

    void imprimir() const;
};

class Cuaternion {
private:

    double a, b, c, d;

public:

    Cuaternion(double a = 0.0, double b = 0.0, double c = 0.0, double d = 0.0);

    double obtenerA() const;
    double obtenerB() const;
    double obtenerC() const;
    double obtenerD() const;

    Cuaternion sumar(const Cuaternion &obj) const;
    Cuaternion restar(const Cuaternion &obj) const;
    Cuaternion multiplicar(const Cuaternion &obj) const;
    Cuaternion conjugado() const;
    double norma() const;
    Cuaternion inversa() const;

    Cuaternion operator + (const Cuaternion &obj) const;
    Cuaternion operator - (const Cuaternion &obj) const;
    Cuaternion operator * (const Cuaternion &obj) const;

    void imprimir() const;
};

#endif
