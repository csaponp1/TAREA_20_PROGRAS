/*
UNIVERSIDAD UMG
*/
#include<iostream>
#include<conio.h>

using namespace std;

int suma(int a, int b){

    int c;
    c=a+b;
    return c;
}

int resta(int a, int b){

    int c;
    c=a-b;
    return c;
}

float division(float a,float b){

    float c;
    c=a/b;
    return c;
}

int multiplicacion(int a, int b){

    int c;
    c=a*b;
    return c;
}

int main(){

    int op;

    float a,b,x;

    cout<<"bienvenido al Programa que opera con 2 numeros"<<endl;
    cout<<"Ingrese el valor de a"<<endl;
    cin>>a;
    cout<<"ingrese el valor de b"<<endl;
    cin>>b;

    cout<<"1. SUMAR"<<endl;
    cout<<"2. RESTAR"<<endl;
    cout<<"3. MULTIPLICAR"<<endl;
    cout<<"4. DIVIDIR"<<endl;
    cout<<"ingrese Opcion: ";
    cin>>op;

    switch(op){

        case 1: x=suma(a,b);
        cout<<"\nel resultado es: "<<x<<endl;
        break;

        case 2: x=resta(a,b);
        cout<<"\nel resultado es: "<<x<<endl;
        break;

        case 3: x=multiplicacion(a,b);
        cout<<"\nel resultado es: "<<x<<endl;
        break;

        case 4: x=division(a,b);
        cout<<"\nel resultado es: "<<x<<endl;
        break;

        default:
        cout<<"opcion invalida...!"<<endl;

    }

cout<<"*********FIN DEL PROGRAMA / PRESIONA CUALQUIER TECLA PARA CONTINUAR***********"<<endl;
getch();


}