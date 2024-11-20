# Implementación de Clases para Números Complejos y Cuaterniones

## Números Complejos

Los números complejos son una extensión de los números reales que incluyen una parte imaginaria. Un número complejo se puede expresar en la forma:

$$
z = a + bi
$$

Donde:
- $a$ es la parte real.
- $b$ es la parte imaginaria.
- $i$ es la unidad imaginaria, tal que:  $i^2 = -1$.

## Operaciones con Números Complejos

Al igual que los números reales, los números complejos tienen operaciones definidas, como la suma, la resta, la multiplicación y la división:

- **Suma:** $(a + bi) + (c + di) = (a+c) + (b+d)i$
- **Resta:** $(a + bi) - (c + di) = (a-c) + (b-d)i$
- **Multiplicación:** $(a + bi) \cdot (c + di) = (ac - bd) + (ad + bc)i$
- **División:** $\frac{a + bi}{c + di} = \frac{(a+bi) \cdot (c-di)}{c^2 + d^2}$

Los números complejos tienen muchas aplicaciones en matemáticas y física, especialmente en la resolución de ecuaciones diferenciales, transformadas de Fourier, electromagnetismo y mecánica cuántica.

## Cuaterniones

Los cuaterniones son una extensión de los números complejos a cuatro dimensiones y se usan principalmente en computación gráfica, física y matemáticas. Un cuaternión se expresa como:

$$
q = a + bi + cj + dk
$$

Donde:
- $a$, $b$, $c$, $d$ son números reales.
- $i$, $j$, $k$ son las unidades imaginarias, con las siguientes propiedades:
  - $i^2 = j^2 = k^2 = ijk = -1$
  - Las multiplicaciones entre ellos siguen ciertas reglas que no son conmutativas.

La **suma de cuaterniones** se realiza sumando sus componentes correspondientes. Si tenemos dos cuaterniones:

$$
q_1 = a_1 + b_1i + c_1j + d_1k
$$
$$
q_2 = a_2 + b_2i + c_2j + d_2k
$$

La suma de $q_1$ y $q_2$ es:

$$
q_1 + q_2 = (a_1 + a_2) + (b_1 + b_2)i + (c_1 + c_2)j + (d_1 + d_2)k
$$

La **resta de cuaterniones** se realiza restando sus componentes correspondientes. 
$$
q_1 - q_2 = (a_1 - a_2) + (b_1 - b_2)i + (c_1 - c_2)j + (d_1 - d_2)k
$$

La **multiplicación de cuaterniones** no es conmutativa. Para multiplicar usamos la siguiente fórmula:

$$
q_1 \cdot q_2 = (a_1a_2 - b_1b_2 - c_1c_2 - d_1d_2) + (a_1b_2 + b_1a_2 + c_1d_2 - d_1c_2)i + (a_1c_2 - b_1d_2 + c_1a_2 + d_1b_2)j + (a_1d_2 + b_1c_2 - c_1b_2 + d_1a_2)k
$$

El **conjugado de un cuaternión** se obtiene cambiando el signo de los componentes imaginarios. Para un cuaternión:

$$
q = a + bi + cj + dk
$$

El conjugado de $q$, denotado $q^*$, es:

$$
q^* = a - bi - cj - dk
$$


La **norma de un cuaternión** es una medida de su "tamaño". Se calcula como la raíz cuadrada de la suma de los cuadrados de sus componentes:

$$
|q| = \sqrt{a^2 + b^2 + c^2 + d^2}
$$

La **inversa de un cuaternión** $q = a + bi + cj + dk$ se puede calcular como:

$$
q^{-1} = \frac{q^*}{|q|^2}
$$

Es decir, se divide el conjugado del cuaternión entre el cuadrado de su norma. 

Los cuaterniones permiten representar rotaciones en 3D de forma eficiente, evitando problemas como la interpolación de ángulos de Euler (gimbal lock).
   

## Descripción de la Tarea

El objetivo de la Tarea es implementar una clase en C++ para representar **números complejos** y **cuaterniones**, y las operaciones entre ellos. Esta implementación servirá como introducción a la programación orientada a objetos, usando conceptos fundamentales como clases, objetos, funciones miembro y la **sobrecarga de operadores**.

## Implementaciones a realizar

1. **Implementación de la clase para Números Complejos:**
   - Los números complejos deben tener dos miembros de datos: la parte real y la parte imaginaria.
   - Implementar las operaciones básicas: suma, resta, multiplicación y división.

2. **Implementación de la clase para Cuaterniones:**
   - Los cuaterniones deben tener cuatro miembros de datos: $a$, $b$, $c$ y $d$ que corresponden a los coeficientes.
   - Implementar las operaciones básicas: suma, resta, multiplicación , conjugado, norma e inversa.

## Estructura de su Implementación

 Su implementación debe estar organizado en tres partes:

1. **Archivo de cabecera (Header File)** para las definiciones de las clases.
2. **Archivo de implementación** para las definiciones de las funciones miembro.
3. **Archivo principal (Main File)** donde se implementa la aplicación que utiliza las clases y operaciones definidas.

Debe realizar la compilación manual de estos archivos. 

Adicionalmente puede investigar la automatización del proceso de compilación de proyectos reales usando MakeFiles.

Una vez implementada las funciones miembros para realizar las operaciones, investigar sobre  sobrecarga de operadores en C++, 



## Archivo de Cabecera complejos_cuaterniones.h
 Este archivo debe contener las definiciones de las clases `Complejo` y `Cuaternion`, así como las declaraciones de las funciones miembro.

```cpp
// complejos_cuaterniones.h
#ifndef COMPLEJOS_CUATERNIONES_H
#define COMPLEJOS_CUATERNIONES_H

#include <iostream>

class Complejo {
private:
    double real; 
    double imag;

public:
    Complejo(double r = 0.0, double i = 0.0);
    Complejo sumar(Complejo &s); 
    Complejo restar(Complejo &s) ;
    Complejo multiplicar(Complejo &s); 
    Complejo dividir(Complejo &s);

    void imprimir() 
};

class Cuaternion {
private:
    double a,
    double b,
    double c,
    double d;

public:
    Cuaternion(double w = 0.0, double x = 0.0, double y = 0.0, double z = 0.0);
    Cuaternion sumar(Cuaternion &s);
    Cuaternion restar(Cuaternion &s);
    Cuaternion multiplicar(Cuaternion &s);
    //.... completar las otras operaciones
    void print() 
};

#endif
