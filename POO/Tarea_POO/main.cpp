#include <iostream>
#include "complejos_cuaterniones.h"

int main() {

    // Ejemplo con números complejos.

    Complejo c1(3.0, 4.0), c2(1.0, 2.0);

    cout << "Número complejo 1: ";
    c1.imprimir();
    cout << "Número complejo 2: ";
    c2.imprimir();

    Complejo suma = c1 + c2;
    cout << "Suma: ";
    suma.imprimir();

    Complejo resta = c1 - c2;
    cout << "Resta: ";
    resta.imprimir();

    Complejo multiplicacion = c1 * c2;
    cout << "Multiplicación: ";
    multiplicacion.imprimir();

    Complejo division = c1 / c2;
    cout << "División: ";
    division.imprimir();

    // Ejemplo con cuaterniones.
    
    Cuaternion q1(1.0, 2.0, 3.0, 4.0), q2(5.0, 6.0, 7.0, 8.0);

    cout << "Cuaternión 1: ";
    q1.imprimir();
    cout << "Cuaternión 2: ";
    q2.imprimir();

    Cuaternion q_suma = q1 + q2;
    cout << "Suma de cuaterniones: ";
    q_suma.imprimir();

    Cuaternion q_multiplicacion = q1 * q2;
    cout << "Multiplicación de cuaterniones: ";
    q_multiplicacion.imprimir();

    Cuaternion q_conjugado = q1.conjugado();
    cout << "Conjugado del cuaternión 1: ";
    q_conjugado.imprimir();

    double norma_q1 = q1.norma();
    cout << "Norma del cuaternión 1: " << norma_q1 << endl;

    Cuaternion q_inversa = q1.inversa();
    cout << "Inversa del cuaternión 1: ";
    q_inversa.imprimir();

    return 0;
}
