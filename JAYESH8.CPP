//Factorial Number(05/03/2022)-Increse the size of data type
#include<iostreame.h>
#include<conio.h>
void main()
{
	int no,i;
	unsigned long fact=1;
	clrscr();
	cout<<"Enter the number:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
	 fact=fact*i;
	}
	cout<<"given number Foctorial is:"<<fact;
	getch();
}