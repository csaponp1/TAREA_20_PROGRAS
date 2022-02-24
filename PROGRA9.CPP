#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main (){

    cout<<"BIENVENIDO AL PROGRAMA CON LAS TABLAS DE MULTIPLICAR"<<endl;
    cout<<"___________________________________________________________________________________"<<endl;

    for(int i=1;i<=10;i++){
        cout<<"\nTABLA DEL "<<i<<"\n";

        for(int j=1;j<=10;j++){
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }

    }

    cout<<"*************FIN DEL PROGRAMA/PRESIONA CUALQUIER TECLA PARA CONTINUAR*******************************";
    system("pause");

    

    
    
    
    
}
