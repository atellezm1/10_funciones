//Alezande Jesús Téllez
#include<iostream>
using namespace std;
void depositar(float monto);
float saldo=0;
int main(){
    int op;
    float valor;
    cout<<"cajero automatico"<<endl;
    cout<<"1.depositar "<<endl;
    cout<<"2.retirar "<<endl;
    cout<<"3.mostrar saldo "<<endl;
    cout<<"0.salir "<<endl;
    cout<<"elija una opcion:\n ";cin>>op;
    switch(op){
        case 1:
            cout<<"ingrese el valor a depositar:";cin>>valor;
            depositar(valor);
            system("pause");
        break;
        case 2:
          cout<<"ingrese el valor a retirar:\n";cin>>valor;
            retirar(valor);
        break;       
        case 0:
            cout<<"saliendo...."<<endl;
            system("pause");
        break;

    }

    return 0;
}
void depositar(float monto){
    int saldo;
    saldo=saldo+monto;
}
void retirar(float monto){
    int saldo;
    saldo=saldo-monto;
}
void mostrarsaldo(){
    float saldo;
    cout<<"el saldo actual es:\n"<<saldo<<"\n";
}