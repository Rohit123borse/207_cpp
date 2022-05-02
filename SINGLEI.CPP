#include<iostream.h>
#include<conio.h>
class B
{
private:
	int a;
public:
	int b;
	void get_ab()
	{
	a=5;
	b=10;
	}
	int get_a()
	{
	return a;
	}
	void show_a()
	{
	cout<<"\na:"<<a;
	}
};
class D:public B
{
private:
	int c;
public:
	void mul()
	{
	c=b*get_a();
	}
	void disp()
	{
	cout<<"\na:"<<get_a();
	cout<<"\nb:"<<b<<"\nc:"<<c;
	cout<<"\n";
	}
};
void main()
{
D d;
clrscr();
d.get_ab();
d.mul();
d.show_a();
d.disp();
d.b=20;
d.mul();
d.disp();
getch();
}

