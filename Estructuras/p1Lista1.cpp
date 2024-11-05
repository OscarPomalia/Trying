/*
1. Escribe un programa que defina una estructura Persona con los campos nombre 
(cadena de caracteres) y edad (entero). Crea una instancia de Persona, asigna 
valores a sus campos y muestra estos valores por pantalla
*/

#include <iostream>
#include <cstring>
using namespace std;


struct Persona{
    char nombre[30];
    string apellido;
    int edad;
};

void inicializar(Persona& p){
    cout << "Ingrese la edad: ";
    cin >> p.edad;
    cout << "Ingrese el nombre: ";
    cin.ignore(); //Limpiar el buffer
    cin.getline(p.nombre,30);//cin >> p.nombre;
    cout << "Ingrese el apellido: ";
    getline(cin,p.apellido); //Para leer strings
    
}


void mostrar(Persona& p){
    cout <<"Edad: " << p.edad << endl;
     cout <<"Nombre: " <<p.nombre << endl;
    cout << "Apellido: " << p.apellido <<endl;
}

int main(){

    Persona p;

    inicializar(p);
    mostrar(p);

    /*
    //Forma 1: Solicitar al usuario
   

    //Forma 2: Declarar e inicializar
    Persona q = {"Andres", 34};

    //Forma 3: inicializamos cada miembro
    strcpy(p.nombre, "Juan");
    p.edad = 33;

    */

    return 0; 
}