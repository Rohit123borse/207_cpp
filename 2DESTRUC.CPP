//program demonstate destructor
#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int a,b;
	public:
		demo();
		demo(int x,int y);
		void print();
		demo(demo &m);
		~demo();

};
demo::demo()
{
	cout<<"Default Constructor:-"<<endl;
}
demo::demo(int x,int y)
{
	a=x;
	b=y;
}
void demo::print()
{
	cout<<"Paramertize constructor:-"<<endl;
	cout<<"value of x:"<<a<<endl;
	cout<<"value of y:"<<b<<endl;
}
demo::demo(demo &m)
{
	cout<<"Copy constructor:-"<<endl;
	a=m.a;
	b=m.b;
}
demo::~demo()

{
	cout<<"Destructor called"<<endl;
}
void main()
{
	clrscr();
	demo d;
	demo d1(10,20);
	d1.print();
	demo m(d1);
	m.print();

	getch();
}