//program demonstrate using copy  constructer
#include<iostream.h>
#include<conio.h>
class Demo
{
	private:
		int a,b;
	public:
		Demo();//Default constructor
		Demo(int x,int y);//parameterize Constructor
		Demo( Demo &m);//Copy Constructor
		void print();

};
Demo::Demo()
{
	cout<<"Default constructor"<<endl;
}
Demo::Demo(int x,int y)
{
	 a=x;
	 b=y;
}
void Demo::print()
{

	 cout<<"Value of a :->"<<a<<endl;
	 cout<<"Value of b :->"<<b<<endl;


}
Demo::Demo(Demo &m)
{
	a=m.a;
	b=m.b;
}
void main()
{
	clrscr();
	Demo d(20,10);
	d.print();
	Demo d1(d);
	d.print();

	getch();
}

