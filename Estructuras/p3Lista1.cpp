/*
Escriba un programa que defina una estructura Persona y crea una instancia de 
ella. Usa un puntero a la estructura para asignar valores a sus campos y luego 
muestra los valores usando el puntero. 
*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

void inicializar(Persona *p){
    cout << "Ingrese el nombre:  ";
    //utilizando el operador flecha
    cin >> p -> nombre;//cin >> (*p).nombre;
    cout << "Ingrese la edad:  ";
    cin >> p -> edad;//cin >> (*p).edad;
}

void mostrar(Persona *p){
    cout << "Nombre: " <<  p -> nombre <<endl; //(*p). nombre <<endl;
    cout << "Edad: " << p -> edad << endl; //(*p).edad <<endl;
}


int main(){

    Persona p;

    Persona *ptrEstruct = &p; 
    inicializar(ptrEstruct);
    mostrar(ptrEstruct);

    return 0; 
}