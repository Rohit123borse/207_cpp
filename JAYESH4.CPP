#include<iostreame.h>
#include<conio.h>
void main()
{
	int no,i,c=0;
	clrscr();
	cout<<"Enter the number:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
	 if(no%i==0)
	 {
	    c++;
	 }
	}
	if(c==2)
	{
	 cout<<"\n number is prime";
	}
	else
	{
	 cout<<"\n number is not prime";
	}
	getch();
}












	getch();