// 2.cpp
#include <iostream>
#include <cstring>
using namespace std;


void intercambio(double* a, double* b, char* nombre1, char* nombre2) {
    double temp = *a;
    *a = *b;
    *b = temp;

    char ntemp[31];
    strcpy(ntemp, nombre1);
    strcpy(nombre1, nombre2);
    strcpy(nombre2, ntemp);
}


void ordenar(double* t, char nombres[][31], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indMin = i;
        for (int j = i + 1; j < n; j++) {
            if (*(t+j) < *(t +indMin)) {
                indMin = j;
            }
        }
        intercambio(&t[i], &t[indMin], nombres[i] , nombres[indMin]); 
    }
}


int buscarNombre(char nombres[][31], int n, char* clave) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nombres[i], clave) == 0) {
            return i;
        }
    }
    return -1;
}

void buscarPorRango(double* t, char nombres[][31], int n, double ta, double tb){
    bool enc = false;
    for (int i = 0; i < n; i++) {
        if (t[i] >= ta && t[i] <= tb) {
            cout << nombres[i] << " : " << t[i] << " segundos" << endl;
            enc = true;
        }
    }
    if (!enc) {
        cout << "No se encontraron corredores en el rango "<< ta <<" - " << tb << endl;
    }
}

int main() {
    const int CORRED_MAX = 30;
    char nombres[CORRED_MAX][31];
    double t[CORRED_MAX];
    int n;
    
    //TAREA TRABAJAR CON PUNTEROS
    //Opción 1:  con un puntero
    //char *nombr = &nombres[0][0];
    
	
	//Opción 2: Con un puntero a un arreglo
	//char (*nombr)[31] = nombres;
	
	//Opción 3: Con un arreglo de punteros
    
    cout << "Ingrese el numero de corredores (maximo 30): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del corredor " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Ingrese el tiempo de " << nombres[i] << " (en segundos): ";
        cin >> t[i];
    }


    ordenar(t, nombres, n);
    cout << "\nRanking de los corredores:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << nombres[i] << " : " << t[i] << " segundos" << endl;
    }


    char clave[31];
    cout << "\nIngrese el nombre del corredor que desea buscar: ";
    cin >> clave;
    int pos = buscarNombre(nombres, n, clave);
    if (pos != -1) {
        cout << clave << " esta en la posicion " << pos + 1 << " del ranking." << endl;
    } else {
        cout << "Corredor no encontrado." << endl;
    }

    double ta, tb;
    cout << "\nIngrese el rango de tiempos (inicio y fin en segundos): ";
    cin >> ta >> tb;
    cout << "\nCorredores en el rango " << ta << " - " << tb << " segundos:\n";
    buscarPorRango(t, nombres, n, ta, tb);

    return 0;
}
