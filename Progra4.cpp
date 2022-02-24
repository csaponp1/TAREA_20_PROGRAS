#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;


int main(){


string palabra;

cout<<"PROGRAMA QUE DETERMINA SI UNA PALABRA O NUMERO ES PALINDROMO O NO"<<endl;

cout<<"\nINGRESE PALABRA"<<endl;
cin>>palabra;
size_t longitud= palabra.length()-1;
size_t i=0;
bool esPalindromo = true;
for(i=0; i<palabra.length()/2 && esPalindromo;i++){

    if(palabra[i]!=palabra[longitud-i]){
        esPalindromo=false;
        }
    
    }
    cout<<((true==esPalindromo) ? "es palindromo" : "no es palindromo")<<endl;

    system("pause");

}
