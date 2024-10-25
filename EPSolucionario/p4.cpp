/*
Escriba  4  formas  distintas  de  ingresar  el  elemento  i-ésimo 
elemento  del  vector  apuntado por  p  sin utilizar variables extras
*/

#include <iostream>
using namespace std;

void ingresaVector(int *p,int n){
    for(auto i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i<<": ";   
        cin>>*(p+i);
        //cin >> p[i];
        //cin >> *(i + p);
        //cin >> i[p]; = *(i + p)
    } 
}

int main(){

    return 0; 
}