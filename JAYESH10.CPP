//program demonstrate to number is prime or not.
#include<iostreame.h>
#include<conio.h>
void main()
{
	int i,count=0,no;
	clrscr();
	cout<<"enter number:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
	 if(no%i==0)
	 {

	  count++;

	 }
	}
	if(count==2)
	{
	 cout<<"Number is prime";
	}
	else
	{
	 cout<<"Number is not prime";
	}
	getch();
}