//Allexander Téllez Mesa
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int hasta,cant,i;
    i=0;
    cout<<"Ingrese el numero maximo del parametro que se utilizara: ";cin>>hasta;

    cout<<"introdusca la cantidad de numeros a imprimir: ";cin>>cant;
    while(i!=cant){
       int numero = rand()% hasta +0;
       cout<<numero<<endl;
       i=i+1;
    }
    
    return 0;
}