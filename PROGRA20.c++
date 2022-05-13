#include<iostream>
#include<windows.h>  
#include<stdio.h>

using namespace std;
 void gotoxy(int x,int y){ 
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
    }
main ()
    {
    char UMG[4]={'U','M','G','\0'};
    int m=30;
    int n=30;

    cout<<UMG<<endl;
    for(int i=1;i<=m;i++){
        gotoxy(0,i*1);
        cout<<UMG;
        Sleep ((m*5)-(i*4));
       
        gotoxy(0,i-1);   
            //system("cls");
            cout<<UMG;
            Sleep(100);
            system("cls"); 
			
		 if (i==m)
		 {
             for(int i=1;i<=m;i++){
            gotoxy(i*3,i);
            cout<<UMG;
            Sleep ((m*5)-(i*4));
            gotoxy(0,i-1);   
            cout<<UMG;
            Sleep(100);
            system("cls"); 
			
		 }
		 
		 if (i==m)
		 {
             for(int i=1;i<=m;i++){
            gotoxy(i-1,0);
            cout<<UMG;
            Sleep ((m*5)-(i*4)); 
            gotoxy(0,i+2);   
            cout<<UMG;
            Sleep(100);
            system("cls"); 
			
		}
		 
		}   
      
    }
}
}