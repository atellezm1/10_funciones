//Allexander Téllez Mesa
#include<iostream>
using namespace std;
void menu(){
	int opc;
    do {
        cout<<"\n--- Cajero automatico ---"<<endl;
        cout<<"1. depositar 100 "<<endl;
        cout<<"2. Retirar 1oo "<<endl;
        cout<<"3. Mostrar ssaldo "<<endl;
        cout<<"4. Sali "<<endl;
        cout<<"Seleccione una opción: ";cin>>opc;

        switch(opc){
            case 1:{

                break;
            }
            case 2:{

                break;
            }
            case 3:{

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
return 0;
}

int main(){
    menu();
    return 0;
    }