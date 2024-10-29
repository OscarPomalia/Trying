#include <iostream>
using namespace std;

struct Punto{//declaro mi tipo de dato llamado Punto. 
public:    
    float coordX;
    float coordY;
};

Punto *Vector; 

void leerPunto( Punto &p){
    cout << "Ingrese coordenada x e y : ";
    cin >> p.coordX >> p.coordY;
}

void escribirPunto(Punto p){
    cout << " "<< p.coordX <<" "<< p.coordY << endl;
}

void leerVectorPuntos(Punto *Vector, int n){
    for (int i = 0; i < n; i++)
        leerPunto(Vector[i]);
}

void escrbirVectorPuntos( Punto *Vector, int n){
    cout <<"\nLos puntos ingresados son:\n";
    for (int i = 0; i < n; i++)
        escribirPunto(Vector[i]);
}

int main(int argc, char *argv[]){
    int n;
    cout << "Cuantos puntos ingresara?: ";
    //cin >> n;
    //Validar n ??
    do{
        cin >> n;
        if(n <= 0)
            cout<< "La cantidad de puntos debe ser positivo"<<endl;  
    }while(n<=0);
    
    
    Vector = new Punto[n];
    
    leerVectorPuntos(Vector, n);
    
    escrbirVectorPuntos(Vector, n);

    //Liberar memoria ??
    delete [] Vector;

    return 0;
}