/*
Escriba un programa que defina un arreglo de 3 elementos de la estructura 
Persona (con campos nombre y edad). Inicializa el arreglo con datos y muestra los 
valores de cada persona por pantalla.
*/
#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

void inicializar(Persona p[], int n){
    for(int i = 0; i < n; i++){
        cout << "Ingrese la edad de la persona " << i + 1 << ": ";
        cin >> p[i].edad;
        cout << "Ingrese en nombre de la persona " << i + 1 << ": ";
        cin >> p[i].nombre;
    }  
}


void mostrar(Persona p[], int n){
    for(int i = 0; i < n; i++){
        cout << "Edad de la persona " << i + 1 << ": " << p[i].edad <<endl;
        cout << "Nombre de la persona " << i + 1 << ": " <<p[i].nombre <<endl;
    } 
}


int main(){
    Persona p[3];
    inicializar(p,3);
    mostrar(p,3);

    return 0; 
}