//Allexander Téllez Mesa
#include<iostream>
using namespace std;

void porValor(int a){
    a=10;
    cout<<"Dentro de porvalor, a = "<<a<<endl;
}

void porReferencia(int &a){
    a=10;
    cout<<"Dentro de porReferencia, a = "<<a<<endl;
}

int main(){
    int num=5;
    cout<<"Antes de pasar por valor, num = "<<num<<endl;
    porValor(num);
    cout<<"Luego de pasar por valor, num = "<<num<<endl;
    cout<<"Antes de pasr por referencia, num = "<<num<<endl;
    porReferencia(num);
    cout<<"Luego de pasar por Referencia, num = "<<num<<endl;

    return 0;
}