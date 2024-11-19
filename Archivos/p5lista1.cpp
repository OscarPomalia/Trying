#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream entrada1("origen3.txt");
    ifstream entrada2("destino3.txt");
    ofstream salida("concatenado5.txt");

    string linea;

    while(getline(entrada1,linea)){
        salida << linea <<endl;
    }

    while(getline(entrada2,linea)){
        salida << linea <<endl;
    }

    entrada1.close();
    entrada2.close();
    salida.close();



    return 0; 
}