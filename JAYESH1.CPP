#include<iostreame.h>
#include<conio.h>
void main()
{
	int sum=0,r,no,p;
	clrscr();
	cout<<"Enter the number";
	cin>>no;
	p=no;
	while(no>0)
	{
	  r=no%10;
	  sum=sum+(r*r*r);
	  no=no/10;
	}
	if(sum==p)
	{
	 cout<<"number is armstromg";
	}
	else
	{
	 cout<<"Number is not armstrong";
	}
	getch();
}