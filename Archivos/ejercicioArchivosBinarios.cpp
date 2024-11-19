/*Inventario en una Lbreria*/
#include <iostream>
#include <fstream>
using namespace std;

struct Libro{
    char titulo[40];
    char autor[30];
    double precio; 
    int cantidad;
};

void crearArchivoBinario (){
    ofstream archBinario("libros.dat", ios::binary);
    int n;
    cout << "Ingrese el numero de libros a registrar: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        Libro libro;
        cout << "Ingrese el titulo: ";
        cin.getline(libro.titulo,40);
        cout << "Ingrese el autor: ";
        cin.getline(libro.autor,40);
        cout << "Ingrese el precio: ";
        cin >> libro.precio;
        cout << "Ingrese la cantidad de libros registrados: ";
        cin >> libro.cantidad;
        cin.ignore();

        archBinario.write( (char*)&libro, sizeof(Libro)); //Estilo C
        //archBinario.write( reinterpret_cast<char*>(&libro), sizeof(Libro))

    }
}


void generarReporte(){
    ifstream origen("libros.dat", ios::binary);

    ofstream destino("reporte.txt");

    Libro libro;

    destino << "Reporte de la Libreria: " <<endl;

    while(origen.read( (char*)&libro, sizeof(Libro))){
        destino << "Titulo: " << libro.titulo << endl;
        destino << "Autor: " << libro.autor << endl;
        destino << "Precio: " << libro.precio << endl;
        destino << "Cantidad: " << libro.cantidad << endl;

    }

}

int main(){

    //IMplemente otras funciones adecuadas
    //buscar un libro
    //actualizar la cantidad de libros disponibles

    //y muestre un menu al usuario

    crearArchivoBinario();
    generarReporte();

    return 0; 
}


//TAREA: Uso de Archivos de acceso aleatorio  (RAF)
//1. Escribir una funcion para crear o actualizar  un archivo
//usar modos de apertura (ios::binary | ios:: in | ios:: out | ios:: app)

//2. Buscar y mostrar informacion de un libro especifico
//usar su posicion ,

//3 actualizar la candidad en el invetario de un libro.(usando la posicion del libro)


//4 generar su peporte.

//Presentar en forma de un menu conopciones al usuario