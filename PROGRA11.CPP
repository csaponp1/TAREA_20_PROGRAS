#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>

using namespace std;

void binario(int n){

    if(n>1) binario(n/2);
    cout<<" "<<n%2<<" ";
}



int main (){

    int entero=0,op;
    int vector[8];
    cout<<"PROGRAMA PARA CONVERTIR NUMEROS DEL S. DECIMAL A BINARIO Y VICEVERSA"<<endl;
    
    cout<<"seleccione una opcion"<<endl;
    cout<<"1. binario a decimal"<<endl;
    cout<<"2. decimal a binario"<<endl;
    cin>>op;

    switch (op)
    {
    case 1:
        int n;
        cout<<"ingrese cantidad tamanio del numero: ";
        cin>>n;
        for(int i = n-1 ; i>=0; i--){
            cout<<"ingrese la "<< i <<" posicion del vector (solo 0/1)"<<endl;
            cin>> vector[i];
            }
            for(int j=0; j<=n; j++){
                if(vector[j]==1){
                    entero=(entero+(1*pow(2,j)));
                }
            }
            cout<<"en decimal es: "<<entero<<endl;
    break;
    
    case 2:
        int decimal;
        do
            {
                cout<<"ingrese un numero: ";
                cin>> decimal;
                if(decimal<0) cout<<"numero invalido! "<<endl;
        } while (decimal<0);
        cout<<"DECIMAL -> "<<decimal<<endl;
        cout<<"BINARIO -> ";
        binario(decimal);
    break;
    }

cout<<"\n";
system("pause");





}