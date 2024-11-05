/*
 Implementa una lista enlazada simple usando una estructura Nodo con los 
campos nombre, edad y un puntero siguiente. Implementa funciones para insertar 
un nuevo nodo al principio de la lista y para mostrar todos los elementos de la 
lista. Para mayor detalle sobre listas enlazadas y su utilidad puede consultar, ref1. 
 
• Extienda  su implementación de la lista enlazada simple, añadiendo una 
función buscar que reciba un nombre y retorne el nodo correspondiente si 
se encuentra en la lista, o nullptr si no se encuentra. 
 
*/
#include <iostream>
using namespace std;

struct Nodo{
    string nombre;
    int edad;
    Nodo *siguiente;
};

void insertarInicio(Nodo *&head, string nombre, int edad){
    Nodo * nuevoNodo = new Nodo{nombre,edad,nullptr};
    if(head == nullptr){
        head = nuevoNodo;
    }else{
        Nodo *temp = head;
        while(temp -> siguiente != nullptr){
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}


void mostrar(Nodo *head){
    Nodo * temp = head;
    while(temp != nullptr){
        cout << "Nombre: " << temp ->nombre <<endl;
        cout << "Edad: " << temp ->edad <<endl;
        temp = temp -> siguiente;
    }
}


int main(){

    Nodo * head = nullptr;

    insertarInicio(head, "Juan", 40);
    insertarInicio(head, "Pedro", 50);
    insertarInicio(head, "Andres", 13);

    mostrar(head);


    return 0; 
}