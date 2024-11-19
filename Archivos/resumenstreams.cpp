#include <iostream>
#include <fstream>
#include <bitset>
#include <iomanip> //setw(), setprecision
using namespace std;

void manipuladoresFlujo(){
    cout << dec << 15 << " en decimal es: " <<endl;
    cout << hex << 15 << " en hexadecimal " <<endl;
    cout << oct << 15 << " en octal" << endl;
    cout << bitset<8>(15) <<  " representado en formato binario " <<endl;

    cout << fixed << setprecision(3) << 34.678765 <<endl;
    cout  << scientific << 38.67890088 <<endl;

    cout << right << setw(10) << "abcd" <<endl;
    cout << left << setw(10) << "abcd" <<endl;
}


void escribirArchivo(string nombreArchivo){
    ofstream f(nombreArchivo,  ios:: out | ios:: app);

    if(!f){
        cerr << "Error de apertura ";
    }else{
        f<< "Este es el primer mensaje"<<endl;
        f << "Este es un segundo mensaje " <<endl;

    }
    f.close();
}

void leerArchivo(string nombreArchivo){
    ifstream f(nombreArchivo);

    if(!f){
        cerr << "Error de apertura";
    }else{
        string linea;
        cout << "Contenido del archivo " << nombreArchivo << ": " <<endl;
        while(getline(f,linea)){
            cout << linea << endl;
        }
        
    }
    f.close();
}

int main(){
    string nombreArchivo = "ejemplo.txt";


    manipuladoresFlujo();

    escribirArchivo(nombreArchivo);

    leerArchivo(nombreArchivo);

    return 0; 
}