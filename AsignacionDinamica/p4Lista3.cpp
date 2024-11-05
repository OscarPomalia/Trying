/* P4 Lista 3
Autor: MISAEL ALEJANDRO URBANO COCHACHIN
Modificado por: Americo Chulluncuy
Crea una función que reciba dos arreglos dinámicos y su tamaño, y 
devuelva un nuevo arreglo dinámico que sea la concatenación de ambos.
*/

#include <iostream>

using namespace std;

void crear_arreglo(int**, int);
int* concatenar(int*, int, int*, int);
void imprimir_arreglo(int*, int);

int main (){
   
    int *p1, *p2, *p3;
    int n, m;
   
    cout << "Ingrese el tamaño de los arreglos: " << endl;
    cin >> n;
    cin >> m;
    crear_arreglo(&p1, n);
    crear_arreglo(&p2, m);
    p3 = concatenar(p1, n, p2, m);
    imprimir_arreglo(p3, n+m);
    delete [] p1;
    delete [] p2;
    delete [] p3;
   
    return 0;
}

void crear_arreglo(int**p, int n){
   
    *p = new int[n];
    for(int i = 0 ; i < n; i++){
        cout << "Ingrese el elemento " << i + 1 << " : ";
        cin >> (*p)[i];//*(p + i) <> p[i]; es diferente de  *((*p) + i)
    }
}

int* concatenar(int* p1, int n, int* p2, int m){
   
    int* p3;
    p3 = new int[n + m];
    for (int i = 0; i < n; i++){
        *(p3 + i) = *(p1 + i);
    }
    for (int j = 0; j < m; j++){
        *(p3 + n + j) = *(p2 + j);
    }
   
    return p3;
}

void imprimir_arreglo(int* p, int n){
   
    for (int j = 0; j < n; j++){
        cout << *(p + j) << " ";
    }
   
}