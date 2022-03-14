
#include<iostream.h>
#include<conio.h>
void main()
{

	unsigned long fact=1;
	int i,no;
	clrscr();

	cout<<"enter number:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of given number is:"<<fact;
	getch();
}
