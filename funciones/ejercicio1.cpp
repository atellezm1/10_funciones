//Allexander Téllez Mesa
#include<iostream>
using namespace std;
void depositar();
void retirar();
void mostrarSaldo();
void menu(){
	int opc;
    do {
        cout<<"\n--- Cajero automatico ---"<<endl;
        cout<<"1. depositar 100 "<<endl;
        cout<<"2. Retirar 100 "<<endl;
        cout<<"3. Mostrar saldo "<<endl;
        cout<<"4. Salir "<<endl;
        cout<<"Seleccione una opcion: ";cin>>opc;

        switch(opc){
            case 1:{
                    depositar();
                break;
            }
            case 2:{
                    retirar();
                break;
            }
            case 3:{
                   mostrarSaldo(); 
                break;
            }
            case 4:{
                cout<<"Saliendo..."<<endl;
                break;
            }
            default:{
                cout<<"Opcion no valida.Intente de nuevo."<<endl;
            }
        }    
    }while(opc !=4);   
}

int saldo = 0;

void depositar(){
    saldo+=100;
    cout<<"Se a depositado 100 unidades. Nuevo saldo: "<<saldo<<endl;
}

void retirar(){
    if(saldo<=100){
        saldo-=100;
        cout<<"Se han retirado 100 unidades. Nuevo saldo: "<<saldo<<endl;
    }
    else{
        cout<<"Saldo insuficiente."<<endl;
    }
}

void mostrarSaldo(){
    cout<<"Saldo actual: "<<saldo<<endl;
}

int main(){
    menu();
    return 0;
    }