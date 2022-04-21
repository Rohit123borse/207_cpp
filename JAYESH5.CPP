#include<iostreame.h>
#include<conio.h>
void main()
{
	int i,no,fact=1;
	clrscr();
	cout<<"Enter no:";
	cin>>no;
	if(no==0)
	{
	 cout<<fact;
	}
	else
	{
	for(i=no;i>0;i--)
	{
	 fact*=i;

	cout<<no<<"*"<<i<<"="<<fact<<endl;
	}
	}
	getch();
}