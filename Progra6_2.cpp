#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main (){

    int num,m,c,d,u;
    cout<<"PROGRAMA QUE CONVIERTE NUMEROS A LETRAS"<<endl;

      

      cout<<"ingrese un numero: ";
      cin>>num;

      m=num/1000;
      c=((num%1000)/100);
      d=(((num % 1000)%100)/10);
      u = num % 10;
      string s;  //////////unidades
      string ss;  ////////decenas
      string sss; ////////centas
      string ssss; //////////millar

      switch (u)
      {
		case	1: s="uno";
                  break;
		
            case	2: s="dos";
                  break;
		
            case	3: s="tres";
                  break;
		
            case	4: s="cuatro";
                  break;
		
            case	5: s="cinco";
                  break;
		
            case	6: s="seis";
                  break;
		
            case	7: s="siete";
                  break;
		
            case	8: s="ocho";
                  break;
		
            case	9: s="nueve";
                  break;
      }

      switch (d)
      {
		case	1: ss="diez";
            switch (u)
                {
                case 0:
                    ss="diez";
                    s="";
                    break;
                case 1:
                    ss="once";
                    s="";
                    break;
                case 2:
                    ss="doce";
                    s="";
                    break;
                case 3:
                    ss="trece";
                    s="";
                    break;
                case 4:
                    ss="catorce";
                    s="";
                    break;
                case 5:
                    ss="quince";
                    s="";
                    break;
                default:
                    ss="dieci";
                    break;
                }

            break;
		
            case	2:
                  ss =  u>0 ?  "veinti": "veinte";
                  break;
		
            case	3: ss="treinta";
                  ss =  u>0 ?  "treinta y ": "treinta";
                  break;
		
            case	4:
                  ss =  u>0 ?  "cuarenta y ": "cuarenta";
                  break;
		
            case	5:
                  ss =  u>0 ?  "cincuenta y ": "cincuenta";
                  break;
		
            case	6:
                  ss =  u>0 ?  "sesenta y ": "sesenta";
                  break;
		
            case	7:
                  ss =  u>0 ?  "setenta y ": "setenta";
                  break;
		
            case	8:
                  ss =  u>0 ?  "ochenta y ": "ochenta";
                  break;
		
            case	9:
                  ss =  u>0 ?  "noventa y ": "noventa";
                  break;
      }

//////////////////////////////////////////
      switch (c)
      {
            case 1:
                  {
                  sss = d==0 && u ==0 ? "cien" : "ciento ";
                  break;
                  }
            break;
            
            case 2:
                  sss="doscientos " ; break;
        
            case 3:
                  sss="trescientos " ; break;
        
            case 4:
                  sss="cuatroscientos "; break;
        
            case 5:
                  sss="quinientos " ; break;
        
            case 6:
                  sss="seiscientos "; break;
        
            case 7:
                  sss="setecientos "; break;
        
            case 8:
                  sss="ochocientos "; break;
        
            case 9:
                  sss="novescientos "; break;
      }

      switch (m)
      {
		case	1: ssss="mil ";
                  break;
		
            case	2: ssss="dos mil ";
                  break;
		
            case	3: ssss="tres mil ";
                  break;
		
            case	4: ssss="cuatro mil ";
                  break;
		
            case	5: ssss="cinco mil ";
                  break;
		
            case	6: ssss="seis mil ";
                  break;
		
            case	7: ssss="siete mil ";
                  break;
		
            case	8: ssss="ocho mil ";
                  break;
		
            case	9: ssss="nueve mil ";
                  break;
      }
////////////////////////////////
cout<<ssss;
cout<<sss;
cout<<ss;
cout<<s;
cout<<endl;
system("pause");

}