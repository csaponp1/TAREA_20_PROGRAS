#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    float horas_trabajadas, valorporhora;
    float porcentaje, subtotal, total;

    cout<<"ingrese horas trabajadas"<<endl;
    cin>>horas_trabajadas;
    cout<<"ingrese valor por hora"<<endl;
    cin>>valorporhora;
    cout<<"ingrese porcentaje del impuesto"<<endl;
    cin>>porcentaje;

    subtotal=horas_trabajadas*valorporhora;
    total=subtotal-(subtotal*(porcentaje/100));

    cout<<"su salario neto es: Q";

    cout<<total;
    getch();
}