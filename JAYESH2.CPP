#include<iostreame.h>
#include<conio.h>
void main()
{
	int r,no,rev=0,p;
	clrscr();
	cout<<"Enter the number";
	cin>>no;
	p=no;
	while(no>0)
	{
	 r=no%10;
	 rev=(rev*10)+r;
	 no=no/10;
	}

	if(rev==p)
	{
	 cout<<"number is palingrom";
	}
	else
	{
	 cout<<"number is not palindrom";
	}
	getch();
}