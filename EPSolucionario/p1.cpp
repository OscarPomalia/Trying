/*Escriba un programa que solicite las dimensiones de dos tensores A y B,
los complete aleatoriamente con valores entre 1 y 10 e
imprima en la pantalla los tensores generados. 
También calcule e imprima el producto tensorial A⊗B. 
Para resolver debe:  
a)  Definir los tensores A, B y C con punteros. (no puede usar new ni delete)
b) Crear la función completarTensor() que llene el tensor con números aleatorios del 1 al 10.
c)  Crear la función productoVectorial() que calcule el producto tensorial A⊗B. 
d) Para todo el programa utilice en las matrices notación de punteros en lugar de notación de índices. 
Nota: Asuma que las dimensiones de los tensores A y B no sobrepasan las dimensiones 5×5*/
#include <iostream>
using namespace std;


//CompletarTensor ok
void completarTensor(int **A, int filas , int columnas){
    for(int i = 0; i < filas; ++i){
        for (int j = 0; j < columnas; j++){
             A[i][j] = rand() % 10 + 1;
        }
    }
}

//Imprimir tensor ok
void imprimirTensor(int **A, int filas, int columnas, string s){
    cout << "\nTensor " << s << ":\n";
    for(int i = 0; i < filas; ++i){
        for (int j = 0; j < columnas; j++){
            cout << A[i][j] << "\t";
        }
        cout <<endl;
    }
}

// Implementar productorVectorial ???


void productoVectorial(int **A, int filasA, int columnasA, int  **B, int filasB, int columnasB, int **resultado){
    for(int i = 0; i <filasA; i++){
        for(int j = 0; j < columnasA; j++){
            for(int k = 0; k < filasB; k++){
                for(int l = 0; l < columnasB; l++){
                    resultado[i*filasB+k][j*columnasB+l] = A[i][j]*B[k][l]; 
                }
            }
        }
        cout <<endl;
    }
}

int main(){

    //solicitamos las dimensiones de los tensores
    int filsA, colsA, filsB, colsB;
    cout << "Ingrese las filas y columnas de A: ";
    cin >>filsA >> colsA;

    cout << "Ingrese las filas y columnas de B: ";
    cin >>filsB >> colsB;

    //Declaramos las matrices
    int A1[5][5], B1[5][5],C1[25][25];


    //USAMOS PUNTEROS  (no usar (int*))
    //Opcion 1: Usando un solo puntero
    // int *A = &A1[0][0];

    //Opcion 2: Usando un puntero a un arreglo de tamaño 5
    //int (*A)[5] = A1; 

    //Opción 3: Usando arreglos de punteros
    int *A[5], *B[5], *C[25];

    for(int i = 0; i < 25; i++){
        if( i < 5){
            A[i] = A1[i];
            B[i] = B1[i];
            C[i] = C1[i];
        }else{
            C[i] = C1[i];
        }
    }

    completarTensor(A,filsA,colsA);
    completarTensor(B,filsB,colsB);

    imprimirTensor(A, filsA, colsA, "A");
    imprimirTensor(B, filsB, colsB, "B");

    productoVectorial(A, filsA, colsA, B, filsB, colsB, C);

    imprimirTensor(C, filsA*filsB, colsA*colsB, "Resultado");


    return 0; 
}
