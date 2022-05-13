#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;
//PROTOTIPOS

void depositar(int cantidad);
void retirar(int cantidad);

int saldo_actual=100,cantidad;

int main (){
    bool valor=true;
    int op;
        string password ="";
        
    cout<<"POR FAVOR INSERTE SU TARJETA"<<endl;
    getch();
    cout<<"LEYENDO..."; Sleep(5000);
        do
        {
            system("cls");
            cout<<"Ingrese contrasenia: "<<endl;
            cin>>password;
            if(password!="1234") {
            cout<<"Contrasenia invalida, por favor verifique ...!"<<endl;
            getch();
            }
        } while (password!="1234");

    do{
    cout<<"\n\nBIENVENIDO"<<endl;
    cout<<"\n1. Consultar saldo"<<endl;
    cout<<"2. Depositar dinero"<<endl;
    cout<<"3. Retirar Dinero"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Seleccion"<<endl;
    cin>>op;


    //INICIAMOS SWITCH
    switch(op){
        case 1:
        cout<<"\nSu saldo actual es: Q"<<saldo_actual<<endl;
        break;

        case 2:
            cout<<"\nCuanto dinero desea depositar: "<<endl;
            cin>>cantidad;
            depositar(cantidad);
            break;

        case 3:
            cout<<"\nCuanto dinero desea retirar: "<<endl;
            cin>>cantidad;
            retirar(cantidad);
            break;

        case 4:
            cout<<"Espere..."; Sleep(5000);
            cout<<"Retire su tarjeta"<<endl;
            valor=false;
            break;

        default:
            cout<<"\nOpcion Invalida, por favor VERIFIQUE!"<<endl;
    }   

        
    } while (valor!=false);
    system("pause");
}

//FUNCIONES
void depositar(int cantidad){
    saldo_actual+=cantidad;
    cout<<"\nHas depositado exitosamente Q"<<cantidad<<" ,tu saldo actual es de Q"<<saldo_actual<<endl;
}

void retirar(int cantidad){
    if(cantidad<=saldo_actual){
        saldo_actual-=cantidad;
        cout<<"\nHas retirado exitosamente Q"<<cantidad<<" ,tu saldo actual es: Q"<<saldo_actual<<endl;
    }
    else    cout<<"No tienes suficientes fondos. Tu saldo actual es: Q"<<saldo_actual<<endl;
}