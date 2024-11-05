/*
Escriba un programa que defina una estructura Persona y una función 
crearPersona que reciba un nombre y una edad como argumentos, cree una 
Persona con estos valores y la retorne. En la función principal  main, llama a esta 
función y muestra los datos de la Persona retornada.
*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

Persona crearPersona(string nombre, int edad){
    Persona p;
    p.nombre = nombre;
    p.edad = edad;

    return p;
}

int main(){

    Persona q = crearPersona("Juan", 35);

    cout << q.nombre <<endl;
    cout << q.edad <<endl;

    return 0; 
}