#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main (){

    int i;
    cout<<"INGRESE UN NUMERO: ";
    cin>>i;
    int j=0;
    
    do
    {
        
        cout<<i<<" x "<<j<<" = "<<(i*j);
        cout<<"\n";
        j++;

    } while (j<=10);

    cout<<"*************FIN DEL PROGRAMA/PRESIONA CUALQUIER TECLA PARA CONTINUAR*******************************";
    system("pause");

    

    
    
    
    
}
