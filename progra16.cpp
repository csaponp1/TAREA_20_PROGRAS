#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main (){

    cout<<"Programa que calcula la hipotenusa de un numero"<<endl;

    double a,b,x;

    cout<<"ingrese cateto a"<<endl;
    cin>>a;
    cout<<"ingrese cateto b"<<endl;
    cin>>b;

    x=sqrt((pow(a,2)+pow(b,2)));
    cout<<"la hipotenusa es: "<<x<<endl;

    system("pause");

}