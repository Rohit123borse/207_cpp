#include<iostream.h>
#include<conio.h>
void main()
{
	int no,t1,t2,nextno;
	t1=0;
	t2=1;
	clrscr();
	cout<<"Enter the limit of series";
	cin>>no;
	cout<<t1;
	cout<<t2;
	nextno=t1=t2;
	while(nextno<no)
	{
	 cout<<nextno;
	 t1=t2;
	 t2=nextno;
	 nextno=t1+t2;

	}
	 getch();
}