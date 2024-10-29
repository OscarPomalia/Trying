#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int i, j, m, n;
    //typedef int* col; // col es un sinónimo de puntero a entero
    //using col = int*; //equivalente  C++11, posteriores, más clara y legible

    int **ptr; //m es puntero que apuntan a punteros a enteros
    cout << " introduzca dimension de las filas y columnas (m,n) : ";
    cin >> m >> n;

    ptr = new int*[m]; // reserva de memoria para m punteros a enteros

    //int (*ptr1)[3] = new int[2][3];
    
    for( i = 0; i < m; i++){
        ptr[i] = new int[n]; // ptr[i] puntero a vector de n enteros

        for (j = 0; j < n; j++)
        ptr[i][j] = 10 * (i + 1) + j;
    }
    
    cout << "\n mostrando la matriz con indexacion: \n";
    for( i = 0; i < m; i++){
        for (j = 0; j < n; j++)
            cout << " " << ptr[i][j]; // indexación tipo matriz
        cout << endl;
    }
            
    cout << "\n mostrando matriz con punteros: \n" ;
    for( i = 0; i < m; i++){
        for (j = 0; j < n; j++)
            cout<<" " << *(*(ptr+i)+j); // también válido con *(ptr[i]+j)...*(i[ptr] + j)
        cout << endl;
    }

    //Liberando memoria
    for( i = 0; i < m; i++){
        delete [] ptr[i];

    delete [] ptr;
    

    return 0;
}