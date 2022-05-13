#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

void decimal(int parteDecimal);

int main (){

    double num;
    int mil,cen,dec,uni;
    int parteEntera, parteDecimal;
    cout<<"PROGRAMA QUE CONVIERTE NUMEROS A LETRAS"<<endl;


    cout<<"ingrese un numero: ";
    cin>>num;
    //separo la parte entera de la decimal
    parteEntera=num;
    parteDecimal=(num-parteEntera)*100;
    //separo los numeros entre su MOD y divido para encontrar su valor en coma correspondiente

    string s;  //////////unidades
    string ss;  ////////decenas
    string sss; ////////centas
    string ssss; //////////millar


    uni = parteEntera%10 ; parteEntera/=10;
    dec = parteEntera%10 ; parteEntera/=10;
    cen = parteEntera%10 ; parteEntera/=10;
    mil = parteEntera%10 ; parteEntera/=10;

    
    

      switch (uni)
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

      switch (dec)
      {
		case	1: ss="diez";
            switch (uni)
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
                  ss =  uni>0 ?  "veinti": "veinte";
                  break;
		
            case	3: ss="treinta";
                  ss =  uni>0 ?  "treinta y ": "treinta";
                  break;
		
            case	4:
                  ss =  uni>0 ?  "cuarenta y ": "cuarenta";
                  break;
		
            case	5:
                  ss =  uni>0 ?  "cincuenta y ": "cincuenta";
                  break;
		
            case	6:
                  ss =  uni>0 ?  "sesenta y ": "sesenta";
                  break;
		
            case	7:
                  ss =  uni>0 ?  "setenta y ": "setenta";
                  break;
		
            case	8:
                  ss =  uni>0 ?  "ochenta y ": "ochenta";
                  break;
		
            case	9:
                  ss =  uni>0 ?  "noventa y ": "noventa";
                  break;
      }
    /////////////////////////////////fin si
//////////////////////////////////////////
      switch (cen)
      {
            case 1:
                  {
                  sss = dec==0 && uni ==0 ? "cien" : "ciento ";
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

      switch (mil)
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

decimal(parteDecimal);

cout<<endl;
system("pause");

}



void decimal(int parteDecimal){

    int dec,uni;
    if(parteDecimal<100){


    uni = parteDecimal%10 ; parteDecimal/=10;
    dec = parteDecimal%10 ; parteDecimal/=10;

    string p;  //////////unidades
    string pp;  ////////decenas
    cout<<" CON ";

      switch (uni)
      {
		case	1: p="uno";
                  break;
		
            case	2: p="dos";
                  break;
		
            case	3: p="tres";
                  break;
		
            case	4: p="cuatro";
                  break;
		
            case	5: p="cinco";
                  break;
		
            case	6: p="seis";
                  break;
		
            case	7: p="siete";
                  break;
		
            case	8: p="ocho";
                  break;
		
            case	9: p="nueve";
                  break;
      }

      switch (dec)
      {
		case	1: pp="diez";
            switch (uni)
                {
                case 0:
                    pp="diez";
                    p="";
                    break;
                case 1:
                    pp="once";
                    p="";
                    break;
                case 2:
                    pp="doce";
                    p="";
                    break;
                case 3:
                    pp="trece";
                    p="";
                    break;
                case 4:
                    pp="catorce";
                    p="";
                    break;
                case 5:
                    pp="quince";
                    p="";
                    break;
                default:
                    pp="dieci";
                    break;
                }

            break;
		
            case	2:
                  pp =  uni>0 ?  "veinti": "veinte";
                  break;
		
            case	3: 
                  pp =  uni>0 ?  "treinta y ": "treinta";
                  break;
		
            case	4:
                  pp =  uni>0 ?  "cuarenta y ": "cuarenta";
                  break;
		
            case	5:
                  pp =  uni>0 ?  "cincuenta y ": "cincuenta";
                  break;
		
            case	6:
                  pp =  uni>0 ?  "sesenta y ": "sesenta";
                  break;
		
            case	7:
                  pp =  uni>0 ?  "setenta y ": "setenta";
                  break;
		
            case	8:
                  pp =  uni>0 ?  "ochenta y ": "ochenta";
                  break;
		
            case	9:
                  pp =  uni>0 ?  "noventa y ": "noventa";
                  break;
      }

    cout<<pp;
    cout<<p;
    }/////////////////////////////////fin si
    
}