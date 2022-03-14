#include<iostream.h>
#include<conio.h>

class swap
{
	int  a,b,temp;
	public:
	void get();
	void show();
};

void swap::get()
{
	cout<<"enter the two numbers";
	cin>>b;
}
void swap::show()
{
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping"<<a<<"b =  ";
}
void main()
{
	clrscr();
	swap s;
	s.get();
	s.show();
	getch();
}

