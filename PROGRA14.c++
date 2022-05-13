#include<iostream>
#include<windows.h>  
#include<stdio.h>
#include<conio.h>

using namespace std;
 void gotoxy(int x,int y){ 
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
    }
main (){
    string UMG={""};
    cout<<"\t\tingrese una palabra, letra, simbolo: ";
    cin>>UMG;
    
    
    for(int i=0; i<=30; i++){
        system("COLOR 10");
        cout<<UMG;
        gotoxy(2*i,i);
        Sleep(100);
    }
    for(int j=30; j>=0;j--){
        system("COLOR 13");
        cout<<UMG;
        gotoxy(2*(j),30-j);
        Sleep(100);

    }
    
getch();
}