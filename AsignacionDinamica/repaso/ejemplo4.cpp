#include <iostream>
using namespace std;

void leermatriz (int** m, int n){
    int i, j;
    cout << "Ingrese los elementos:\n";
    for( i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> m[i][j] ;
}

void escribirmatriz (int** m, int n){
    int i, j;
    for( i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            cout << " " << m[i][j] ;
        cout << endl;
    }
}


int main(int argc, char *argv[]){
    int n;
    int **m; 
    cout << " introduzca la dimension de la matriz cuadrada: ";
    cin >> n;
    
    m = new int*[n];
    
    for (int i = 0; i < n; i++)
        m[i] = new int[n];
        
    leermatriz(m,n);
    escribirmatriz(m,n);

    //Liberar memoria ??
    for (int i = 0; i < n; i++)
        delete [] m[i];

    delete [] m;

    return 0;
}