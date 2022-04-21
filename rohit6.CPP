#include<iostreame.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 cout<<"Enter the a:";
 cin>>a;
 cout<<"enter the b:";
 cin>>b;
 int c;
 cout<<"Enter the c:";
 cin>>c;
 if(a>b && a>c)
 {
  cout<<"A is big";
 }
 else if(b>a && b>c)
 {
  cout<<"B is big";
 }
 else if(c>a && c>b)
 {
  cout<<"C is big";
 }
 else
 {
  cout<<"Two value are equal";
 }

 getch();
}
