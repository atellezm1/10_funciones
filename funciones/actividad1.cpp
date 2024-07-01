//Alexander Téllez Mesa
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float ra,a;
    cout<<"El radio del circulo mide: ";cin>>ra;
    a= (M_PI*pow(ra,2))/2;
    cout<<"El area del circulo es: "<<a;
    return 0;
}