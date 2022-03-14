#include<iostream.h>
#include<conio.h>
void main()
{
   int rev=0,no,r;
   clrscr();
   cout<<"enter the number";
   cin>>no;
   while(no>0)
   {
   r=no%10;
   rev=(rev*10)+r;
   no=no/10;
   }
   cout<<"revers is number"<<rev;
   getch();
}
