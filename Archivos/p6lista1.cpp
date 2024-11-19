/*(Contar palabras en un archivo) Crea un programa que lea
 un archivo de texto y cuente el número de palabras*/
 /*
 #include <iostream>
 #include <fstream> //Para trabajar con flujo de archivos
 #include <sstream> //Para trabajar con flujo de cadenas
 using namespace std;
 
 int main(){
    ifstream entrada("arch6.txt");

    string linea, palabra;

    int cont = 0;

    while(getline(entrada,linea)){

        stringstream ss(linea);
        while(ss>>palabra){
            cont++;
        }
    }

    cout << "El numero de palabras es: " << cont <<endl;

    entrada.close();

 
    return 0; 
 }
 */


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
    ifstream entrada("arch6.txt");

    const int MAX_TAM = 1000;

    char linea[MAX_TAM];

    int cont = 0;

    while(entrada.getline(linea, MAX_TAM)){
        char *palabra =  strtok(linea," \n");
        while(palabra != nullptr){
            cont++;
            palabra = strtok(nullptr," \n"); 
        }
    }

    cout << "El numero de palabras es: " << cont <<endl;

    entrada.close();
    
    return 0; 
}

