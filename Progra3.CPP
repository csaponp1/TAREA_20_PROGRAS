#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

float km_millas(int a){
	float x;
	x=a*0.6214;
	return x;
	}

float millas_km(int a){
	float x;
	x=a*1.60927;
	return x;
	}

float metro_pulgadas(int a){
	float x;
	x=((a*100)/2.54);
	return x;
	}

float pulgadas_metro(int a){
	float x;
	x=a*0.0254;
	return x;
	}

float lib_kg(int a){
	float x;
	x=(a/2.20462);
	return x;
	}

float kg_lib(int a){
	float x;
	x=(a*2.20462);
	return x;
}


void operaciones(){

	int opcion,a;	
	bool repetir = true;

	do
	{
	
	system("cls");
	cout<<"\ningrese opcion"<<endl;
	cout<<"1. km a millas"<<endl;
	cout<<"2. millas a km"<<endl;
	cout<<"3. metros a pulgadas"<<endl;
	cout<<"4. pulgadas a metros"<<endl;
	cout<<"5. libras a kilos"<<endl;
	cout<<"6. kilos a libras"<<endl;
	cout<<"7. SALIR"<<endl;
	cin>>opcion;

		switch(opcion)
		{
			
			case 1:
			cout<<"\ningrese km: ";
			cin>>a;
			cout<<"\nen millas: "<<km_millas(a);
			break;

			case 2:
			cout<<"\ningrese millas: ";
			cin>>a;
			cout<<"\nen km: "<<millas_km(a);
			break;

			case 3:
			cout<<"\ningrese metros: ";
			cin>>a;
			cout<<"\nen pulgadas: "<<metro_pulgadas(a);
			break;

			case 4:
			cout<<"\ningrese pulgadas: ";
			cin>>a;
			cout<<"\nen metros: "<<pulgadas_metro(a);
			break;

			case 5:
			cout<<"\ningrese libras: ";
			cin>>a;
			cout<<"\nen kg: "<<lib_kg(a);
			break;

			case 6:
			cout<<"\ningrese kilos: ";
			cin>>a;
			cout<<"\nen lb: "<<kg_lib(a);
			break;

			case 7:
			repetir=0;
			break;

			default:
			cout<<"OPCION INVALIDA... VERIFIQUE!!!!!";
			break;
	
		}
	getch();
	}
	while (repetir);
	
}




int main(){

	int repetir;
	cout<<"PROGRAMA QUE CONVIERTE UNIDADES DE LONGITUD, MASA"<<endl;

		operaciones();
	cout<<"*******************GRACIAS VUELVA PRONTO / PRESIONES CUALQUIER TECLA PARA SALIR***************************";
	getch();

}
