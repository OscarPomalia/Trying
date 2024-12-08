#include "complejos_cuaterniones.h"

Complejo::Complejo(double r, double i) : real(r), imaginario(i) {}

double Complejo::obtenerReal() const {
    return real;
}

double Complejo::obtenerImaginario() const {
    return imaginario;
}

Complejo Complejo::sumar(const Complejo &obj) const {
    return Complejo(real + obj.obtenerReal(), imaginario + obj.obtenerImaginario());
}

Complejo Complejo::restar(const Complejo &obj) const {
    return Complejo(real - obj.obtenerReal(), imaginario - obj.obtenerImaginario());
}

Complejo Complejo::multiplicar(const Complejo &obj) const {
    double r = real * obj.obtenerReal() - imaginario * obj.obtenerImaginario();
    double i = real * obj.obtenerImaginario() + imaginario * obj.obtenerReal();
    return Complejo(r, i);
}

Complejo Complejo::dividir(const Complejo &obj) const {
    double denom = obj.obtenerReal() * obj.obtenerReal() + obj.obtenerImaginario() * obj.obtenerImaginario();
    double r = (real * obj.obtenerReal() + imaginario * obj.obtenerImaginario()) / denom;
    double i = (imaginario * obj.obtenerReal() - real * obj.obtenerImaginario()) / denom;
    return Complejo(r, i);
}

Complejo Complejo::operator + (const Complejo &obj) const {
    return Complejo(real + obj.obtenerReal(), imaginario + obj.obtenerImaginario());
}

Complejo Complejo::operator - (const Complejo &obj) const {
    return Complejo(real - obj.obtenerReal(), imaginario - obj.obtenerImaginario());
}

Complejo Complejo::operator * (const Complejo &obj) const {
    return multiplicar(obj);
}

Complejo Complejo::operator / (const Complejo &obj) const {
    return dividir(obj);
}

void Complejo::imprimir() const {
    if (imaginario >= 0)
        cout << real << " + " << imaginario << "i" << endl;
    else
        cout << real << " - " << -imaginario << "i" << endl;
}



Cuaternion::Cuaternion(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {}

double Cuaternion::obtenerA() const {
    return a;
}

double Cuaternion::obtenerB() const {
    return b;
}

double Cuaternion::obtenerC() const {
    return c;
}

double Cuaternion::obtenerD() const {
    return d;
}

Cuaternion Cuaternion::sumar(const Cuaternion &obj) const {
    return Cuaternion(a + obj.obtenerA(), b + obj.obtenerB(), c + obj.obtenerC(), d + obj.obtenerD());
}

Cuaternion Cuaternion::restar(const Cuaternion &obj) const {
    return Cuaternion(a - obj.obtenerA(), b - obj.obtenerB(), c - obj.obtenerC(), d - obj.obtenerD());
}

Cuaternion Cuaternion::multiplicar(const Cuaternion &obj) const {
    double new_a = a * obj.obtenerA() - b * obj.obtenerB() - c * obj.obtenerC() - d * obj.obtenerD();
    double new_b = a * obj.obtenerB() + b * obj.obtenerA() + c * obj.obtenerD() - d * obj.obtenerC();
    double new_c = a * obj.obtenerC() - b * obj.obtenerD() + c * obj.obtenerA() + d * obj.obtenerB();
    double new_d = a * obj.obtenerD() + b * obj.obtenerC() - c * obj.obtenerB() + d * obj.obtenerA();
    return Cuaternion(new_a, new_b, new_c, new_d);
}

Cuaternion Cuaternion::conjugado() const {
    return Cuaternion(a, -b, -c, -d);
}

double Cuaternion::norma() const {
    return sqrt(a * a + b * b + c * c + d * d);
}

Cuaternion Cuaternion::inversa() const {
    double norm_sq = norma() * norma();
    Cuaternion conj = conjugado();
    return Cuaternion(conj.obtenerA() / norm_sq, conj.obtenerB() / norm_sq, conj.obtenerC() / norm_sq, conj.obtenerD() / norm_sq);
}

Cuaternion Cuaternion::operator + (const Cuaternion &obj) const {
    return sumar(obj);
}

Cuaternion Cuaternion::operator - (const Cuaternion &obj) const {
    return restar(obj);
}

Cuaternion Cuaternion::operator * (const Cuaternion &obj) const {
    return multiplicar(obj);
}

void Cuaternion::imprimir() const {
    cout << a << " + " << b << "i + " << c << "j + " << d << "k" << endl;
}
