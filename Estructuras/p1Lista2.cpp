/*Escriba un programa en C++ a fin de crear un vector dinámico el cual debe llenarse ingresando enteros 
mayores a 0. Cada vez que se llene se debe redimensionar su tamaño por dos, y continuar ingresando 
datos  hasta  que  el  usuario  crea  conveniente,  el  vector  inicial  tiene  tamaño  1.  Finalmente  imprimir 
todos los valores del tamaño del vector actual con el formato indicado líneas abajo*/

#include <iostream>
using namespace std;

int main(){

    int n;
    int tam = 1, cont = 0;

    int *arregloDinamico = new int[tam];


    cout << "Ingrese enteros mayores a 0 " <<endl;

    while(true){
        cout << "Ingrese un entero ";
        cin >> n;
        if( n <= 0){
            break;
        }
        arregloDinamico[cont] = n;
        cont++;

        if(cont == tam){
            int* arregloDinamicoTemp = new int[2*tam];
        

            for(int i = 0; i < tam; i++){
                arregloDinamicoTemp[i] = arregloDinamico[i];
            }

            delete [] arregloDinamico;

            arregloDinamico = arregloDinamicoTemp;

            tam *=2; 
        }

    }


    cout << "Elementos ingresados: " <<endl;
    for(int  i = 0; i < cont ; i++){
        cout << arregloDinamico[i] << " ";
    }

    cout << "\ntamaño actual " << tam <<endl;

    delete [] arregloDinamico;

    return 0; 
}