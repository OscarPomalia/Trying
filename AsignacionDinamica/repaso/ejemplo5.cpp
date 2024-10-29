#include<iostream>
#include<cstring> // strlen(), strcpy()
using namespace std;

int main(int argc, char *argv[]){
    
    char** textoentrada; //Puntero doble para manejar múltiples cadenas
    int n = 3;
    char buffer[81];
    textoentrada = new char*[n]; // reserva de memoria
    
    for (int i = 0; i < n; i++){
        cout << " Ingrese linea " << i+1 << ": ";
        cin.getline(buffer,80);
        textoentrada[i] = new char [strlen (buffer)+1]; //ajuste
        strcpy (textoentrada[i], buffer);
    }
    
    cout <<"longitud linea\n";
    
    for (int i = 0; i < n; i++) // visualización con punteros
        cout << strlen(*(textoentrada + i)) << " :" << *(textoentrada + i) << endl;

    //Liberar memoria   
    for (int i = 0; i < n; i++)
        delete [] textoentrada[i];

    delete [] textoentrada;
     
        
    return 0;
}