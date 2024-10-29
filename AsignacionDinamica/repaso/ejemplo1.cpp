#include <iostream>
#include <cstring> //strlen()
using namespace std;



int main(int argc, char *argv[]){

    //Declaramos variables
    const char *Cadena = "Los programadores no son gente normal. Piensan en bits y bytes";
    int * pEntero, lonCadena, Entero = 15;
    char *pCadena;
    
    lonCadena = strlen(Cadena);
    pCadena = new char[lonCadena+1]; //asignamos memoria con una posición para el fin de cadena
    strcpy(pCadena, Cadena); //copia Cadena a nueva área de memoria (Heap)
    
    pEntero = new int; //se reserva memoria para un entero
    *pEntero = Entero; // se almacena en contenido de pEntero 15


    cout << " pCadena =" << pCadena << endl;
    cout << " longitud = "<< lonCadena<< endl;
    // libera memoria de pCadena ???
    delete [] pCadena;
    

    cout << " *pEntero = " << *pEntero << endl ;
    delete pEntero; // libera memoria de pEnter;

    //Tarea 1: reescribir el programa usando funciones
    return 0;
}