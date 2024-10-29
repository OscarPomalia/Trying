#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int i, *v, n, *pEntero;
    pEntero = new int(20); //o {20}, reserva e incialización de memoria
    
    cout << " *pEntero incializado: " << *pEntero << endl;
    
    cout << " introduzca dimension de v : ";
    cin >> n;
    v = new int[n]; // reserva dinámica no se puede inicializar

    for( i = 0; i < n; i++)
        v[i] = 10 * (i+1); // rellenado del vector

    cout <<" vector :\n";
    for( i = 0; i < n; i++)
        cout << " v[" << i << "]=" << *v++ <<endl;//salida de datos con puntero

    //Liberando memoria ??
    delete [] v;

    


}