#include<iostream>
#include<stdio.h>
#include<windows.h>


using namespace std;

 void gotoxy(int x,int y){ 
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
    }

int main(){

 char UMG[1]={'*'};
    int m=30;
    int n=30;

    cout<<UMG<<endl;
    for(int i=1;i<=m;i++){
        gotoxy(30-i,i);
        cout<<UMG;
        Sleep ((100));
       
        gotoxy(30+i,i);   
        cout<<UMG;
        Sleep(100);

        gotoxy(0+(i*2),30);
        cout<<UMG;
        Sleep ((10));
        
    if(i==m){
        system("pause");
    }
    }
   

}

