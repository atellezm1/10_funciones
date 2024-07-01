//Alexander Téllez Mesa
#include<iostream>
#include<cmath>
using namespace std;
void calcularRaices(float x,float y,float z);
int main(){
    float a,b,c;
    float raiz,rpta1,rpta2;
    cout<<"El coeficiente a de la ecuacion es: ";cin>>a;
    cout<<"El coeficiente b de la ecuacion es: ";cin>>b;
    cout<<"El coeficiente c de la ecuacion es: ";cin>>c;
    calcularRaices(a,b,c);
}

void calcularRaices(float x,float y,float z){
    float raiz,rpta1,rpta2;
	raiz=sqrt(pow(y,2)-(4*x*z));
    rpta1=(-y+raiz)/(2*x);
    rpta2=(-y-raiz)/(2*x);
    cout<<"La primera raiz es: "<<rpta1<<endl;
    cout<<"La segunda raiz es: "<<rpta2;
}