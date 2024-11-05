/*Considere formar un arreglo dinámico con valores enteros positivos ingresados
 por el usuario, de manera que solo se inserte valores no repetidos.
  Cada valor positivo x es insertado al final del arreglo si x es mayor
   que el máximo de los valores ya almacenados, de lo contrario es insertado
    al inicio de arreglo. No suponga una longitud constante para el arreglo, 
    sino que debe variar en cada inserción de nuevos valores. Finalmente imprima 
    el arreglo formado y el valor de máximo.
Ejemplo:*/

#include <iostream>
using namespace std;

int perteneceArreglo(int *p, int n, int x){
    for(int i = 0; i < n; i++){
        if(*p == x){
           return 1; 
        }else{
            p++;
        }
    }
    return 0;
}

void insertar(int *&p, int &n, int a, int & max){
    int *arregloDinamicoTemp = new int [n + 1];
    if(p != nullptr){
        for(int i = 0; i < n; i++){
            arregloDinamicoTemp[i] = p[i];
        }
        delete [] p;
    }

    //completar
    if(a > max){
        arregloDinamicoTemp[n] = a;
        max = a;
    }else{
        for(int i = n; i > 0; i--){
            arregloDinamicoTemp[i] = arregloDinamicoTemp[i-1];
        }
        arregloDinamicoTemp[0] = a;
    }

    p = arregloDinamicoTemp;
    n++;
}




void imprimirArreglo(int *p, int n){
    cout << "Arreglo Formado: " <<endl;
    for(int i = 0; i < n; i++){
        cout << p[i] << " ";
    }
}
int main(){

    int max = -1;
    int n = 0; //tamaño inicial

    int *p = nullptr;

    int a = 1; 

    while(a > 0){
        cout  << "ingrese un numero positivo: ";
        cin >> a;

        if(a>0 && !perteneceArreglo(p,n,a)){
            insertar(p,n,a,max);
        }

    }

    imprimirArreglo(p,n);

    cout << "\nEl valor maximo es: " << max;

    delete [] p;

    return 0; 
}