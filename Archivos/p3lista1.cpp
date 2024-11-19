/*(Copiar contenido de un archivo a otro) Crea un
programa que lea un archivo de 
texto y copie su contenido en otro archivo*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream entrada("origen3.txt");
    ofstream salida ("destino3.txt");

    string linea;

    while(getline(entrada,linea)){
        salida << linea <<endl;
    }

    entrada.close();
    salida.close();

    return 0; 
}