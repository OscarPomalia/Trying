/*(Leyendo un archivo de texto) Escribe un programa que abra un archivo de
texto y  muestre su contenido en la consola.*/

#include <iostream>
#include<fstream> //para trabajar con archivos
//Contienen clases que permiten trabajar con archivos
//Contienen modos (binario ios:binary)
//ifstream (input file stream) ~ cin
//oftream (output file stream) ~ cout
using namespace std;


//Implementar funciones 
//ifstream& leerArchivo(string nombreArchivo){
//    ifstream arch_lectura(nombreArchivo);
//}


int main(){

    int cont  = 0;
    ifstream ifile; //instanciar
    ifile.open("arch1_lista1.txt"); //abrimos el archivo

    if(ifile.is_open()){
        string linea;

        while(getline(ifile, linea)){
            cout << linea <<endl;
            cont++;
        }
    }else{
        cout << "Error al abrir el archivo ";
    }

    cout << "Numero de lineas: " << cont <<endl;

    ifile.close();

    return 0; 
}