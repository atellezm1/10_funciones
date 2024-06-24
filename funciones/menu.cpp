//Alezande Jesús Téllez
#include<iostream>
using namespace std;
void depositar(float );
void retirar(float);
void mostrarsaldo();
float saldo;

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
            cout<<"ingrese el valor a retirar:";cin>>valor;
            retirar(valor);
        break;
        case 3:
            mostrarsaldo();
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
    cout<<"el saldo actual es:\n"<<saldo<<"\n";
}