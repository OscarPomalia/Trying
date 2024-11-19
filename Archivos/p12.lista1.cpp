#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void imprimirArreglo(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " "; 
    }
}

int main(){
    ifstream f("archivo12.txt");

    const int TAM_MAX = 100;

    int *datos = new int[TAM_MAX];

    int cantDatos  = 0;

    string linea;

    while(getline(f, linea)){
        int valor;

        istringstream ss(linea);
        while(ss >> valor){
            datos[cantDatos] = valor;
            cantDatos++;
        }
    }

    imprimirArreglo(datos,cantDatos);


    delete [] datos;


    return 0; 
}