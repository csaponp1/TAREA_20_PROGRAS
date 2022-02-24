#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int a;

    cout<<"BIENVENIDO AL PROGRAMA QUE DETERMINA SI UN NUMERO ES PAR O IMPAR"<<endl;

    cout<<"Ingrese un valor para a: ";
    cin>>a;

    if(a%2==1)
        cout<<"\nel numero es impar"<<endl;

    if(a%2==0)
        cout<<"\nel numero es par"<<endl;

    cout<<"*************FIN DEL PROGRAMA / PRESIONA CUALQUIER TECLA PARA CONTINUAR*******************"<<endl;
    getch();

}