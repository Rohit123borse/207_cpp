#include<iostreame.h>
#include<conio.h>
void main()
{
	int i,j,no;
	clrscr();
	cout<<"Enter number";
	cin>>no;
	for(i=1;i<=no;i++)
	{
	 for(j=1;j<=10;j++)
	 {
	  cout<<i*j<<" "<<"\t";
	 }
	 cout<<"\n";
	 }
	 getch();
}