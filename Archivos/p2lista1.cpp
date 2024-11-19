/*(Escribiendo en un archivo de texto) Escribe un programa
que tome una cadena de  texto del usuario y la escriba en un archivo.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream ofile; //instanciar
    ofile.open("arch2_lista1.txt"); //abrimos el archivo

    string linea;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, linea);

    ofile << linea; //escribe en el archivo;

    ofile.close();

    return 0; 
}