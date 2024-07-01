//Alexander Téllez Mesa
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float cat1,cat2,ihp;
    cout<<"el cateto a mide: ";cin>>cat1;
    cout<<"el cateto b mide: ";cin>>cat2;

    ihp=sqrt((pow(cat1,2)+pow(cat2,2)));
    cout<<"La hipotenusa mide: "<<ihp;
    return 0;
}