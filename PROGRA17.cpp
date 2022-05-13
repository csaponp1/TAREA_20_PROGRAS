#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int resultado;

float cateto(int a, int b){
	float x=sqrt((pow(a,2)-pow(b,2)));
	return x;
	
}

int mcd(int num1, int num2){
	int a, b, res;
	a=std::max(num1,num2);
	b=std::min(num1,num2);
	do
	{
		res=b;
		b=a%b;
		a=res;
	} while (b!=0);
	return res;
	
}

void calculadoracateto (){
	
	int a,b,resultado;
	
	cout<<"ingrese HIPOTENUSA"<<endl;
	cin>>a;
	cout<<"ingrese CATETO CONOCIDO"<<endl;
	cin>>b;
	resultado=cateto(a,b);
	cout<<resultado;
	getch();
	
	
}
void calculadoramcd (){
	
	int num1, num2,resultado;
	cout<<"ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>num2;
	resultado=mcd(num1,num2);
	cout<<resultado;
	getch();

	
}



int main(){
	
	
	bool ciclo=true;
	while(!ciclo==0)
	{
	
	int a,b,resultado,opcion;
	cout<<"\ningrese ocpion"<<endl;
	cout<<"1. calcular cateto"<<endl;
	cout<<"2. calcular mcd"<<endl;
	cout<<"3. SALIR"<<endl;
	cin>>opcion;
	if(opcion==1)
		calculadoracateto();
	
	if(opcion==2)
		calculadoramcd();

	if(opcion==3)
		ciclo=false;
	}

	
	
	cout<<"FIN DEL PROGRAMA..."<<endl;
	system("pause");
	
	
}
