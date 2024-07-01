//Alexander Téllez Mesa
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    float raiz,rpta1,rpta2;
    cout<<"El coeficiente a de la ecuacion es: ";cin>>a;
    cout<<"El coeficiente b de la ecuacion es: ";cin>>b;
    cout<<"El coeficiente c de la ecuacion es: ";cin>>c;
    raiz=sqrt(pow(b,2)-(4*a*c));
    rpta1=(-b+raiz)/(2*a);
    rpta2=(-b-raiz)/(2*a);
    cout<<"La primera raiz es: "<<rpta1<<endl;
    cout<<"La segunda raiz es: "<<rpta2;
    return 0;
}