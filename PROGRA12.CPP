#include<iostream>
#include<conio.h>
#include<stdio.h>


using namespace std;
void hexadecimal(int n){
    int aux;
    if(n>15) hexadecimal(n/16);

        aux=n%16;
        switch (aux)
        {
        case 10: cout<<"A";
            break;
        case 11: cout<<"B";
            break;
        case 12: cout<<"C";
            break;
        case 13: cout<<"D";
            break;
        case 14: cout<<"E";
            break;
        case 15: cout<<"F";
            break;
        default:
            cout<<n%16;
            break;
    }
}
int main (){

    cout<<"\tBIENVENIDO AL PROGRAMA QUE CONVIERTE DECIMALES A HEXADECIMALES"<<endl;
    cout<<"__________________________________________________________________________________________"<<endl;

int num;
        do
            {
                cout<<"ingrese un numero: ";
                cin>> num;
                if(num<0) cout<<"numero invalido! "<<endl;
        } while (num<0);
        cout<<"DECIMAL -> "<<num<<endl;
        cout<<"HEXADECIMAL -> ";
        hexadecimal(num);
        cout<<"\n";

    system("pause");

}