/*
Implementar un programa que realice las siguientes acciones: 
a. Define una estructura Direccion con los campos calle y numero.  
b. Define una estructura Persona que contenga un nombre, edad y una 
Direccion.  
c. Crea una instancia de Persona con una dirección y muestra todos los 
datos.
*/

#include <iostream>
using namespace std;

struct Direccion{
    string calle;
    int numero;
};


struct Persona{
    string nombre;
    int edad;
    Direccion dir;
};


int main(){
    Persona p = {"Juan", 45, {"Av Tupac Amaru", 123}};

    cout << "Direccion: " << p.dir.calle << " " << p.dir.numero <<endl;

    return 0; 
}