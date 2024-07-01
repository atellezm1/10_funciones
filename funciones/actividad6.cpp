//Allexander Téllez Mesa
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a,b,opc;
    a=0;
    b=0;
    cout<<"-----JUEGO DEL PIEDRA PAPEL Y TIJERA-----"<<endl;
    cout<<"-----COMPITE CONTRA EL ROBOT-----"<<endl;
    cout<<"1. piedra "<<endl;
    cout<<"2. papel "<<endl;
    cout<<"3. tijera "<<endl;
    
    while(a!=3&&b!=3){
        cout<<"Elije una opcion: "<<endl;
        cin>>opc;
        int robot = rand()% 3 +1;
        switch (opc){
           case 1:
                if(robot==2){
                    b=b+1;
                    cout<<"--perdiste--"<<endl;
                    cout<<"el robot utilizo: "<<robot<<endl;
                }
                else{
                    if(robot==3){
                        a=a+1;
                        cout<<"--ganaste--"<<endl;
                        cout<<"el robot utilizo: "<<robot<<endl;
                    }
                    else{
                    	cout<<"--empate--"<<endl;
                    	cout<<robot<<endl;
					}
                }
               break;
            case 2:
                if(robot==3){
                    b=b+1;
                    cout<<"--perdiste--"<<endl;
                    cout<<"el robot utilizo: "<<robot<<endl;
                }
                else{
                    if(robot==1){
                        a=a+1;
                        cout<<"--ganaste--"<<endl;
                        cout<<"el robot utilizo: "<<robot<<endl;
                    }
                    else{
                    	cout<<"--empate--"<<endl;
                    	cout<<"el robot utilizo: "<<robot<<endl;
					}
                }
                break;
            case 3:
                if(robot==1){
                    b=b+1;
                    cout<<"--perdiste--"<<endl;
                    cout<<"el robot utilizo: "<<robot<<endl;
                }
                else{
                    if(robot==2){
                        a=a+1;
                        cout<<"--ganaste--"<<endl;
                        cout<<"el robot utilizo: "<<robot<<endl;
                    }
                    else{
                    	cout<<"--empate--"<<endl;
                    	cout<<"el robot utilizo: "<<robot<<endl;
					}
                }
                break;

            default:
            cout<<"Opcion invalida. Intente de nuevo "<<endl;
                break;
        }
    }
    if(a==3){
    	cout<<endl;
        cout<<"---GANASTE EL JUEGO---"<<endl;
    }
    else{
    	cout<<endl;
        cout<<"---PERDISTE EL JUEGO---"<<endl;
    }
    
    return 0;
}

//es extraño que siempre ganas cuando usas 1,1,3.
//tal vez solo sea en mi caso.