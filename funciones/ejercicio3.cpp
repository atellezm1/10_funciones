//Allexander Téllez Mesa
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double num;
    cout<<"ingrese el numero: ";
    cin>>num;

    cout<<"valor apsoluto: "<<fabs(num)<<endl;
    cout<<"riz cuadrada: "<<sqrt(num)<<endl;
    cout<<"potencia (n^2): "<<pow(num,2)<<endl;
    cout<<"redondeo al entero mas cercano: "<<round(num)<<endl;
    cout<<"redondeo hacia arriba: "<<ceil(num)<<endl;
    cout<<"redondeo hacia abajo: "<<floor(num)<<endl;
    cout<<"seno: "<<sin(num)<<endl;
    cout<<"coseno: "<<cos(num)<<endl;
    cout<<"tangente: "<<tan(num)<<endl;

    return 0;
}