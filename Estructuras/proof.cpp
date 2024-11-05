#include <iostream>
using namespace std;

int* retornaArreglo(){
    int *p = new int[5]{1,2,3,4,5};

    return p;
}

int main(){

    int *p = retornaArreglo();

    cout << p[2];

    delete [] p;

    return 0; 
}