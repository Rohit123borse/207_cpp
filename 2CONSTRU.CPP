//program demonstrate two no addition using paramete
rize constructer
#include<iostream.h>
#include<conio.h>
class Demo
{
	private:
		int a,b,c;
	public:
		Demo(int x,int y);//Paramerize Constructer Function Decleration
		void print();
		void add();
};
Demo::Demo(int x,int y)
{
	 a=x;
	 b=y;
}
void Demo::print()
{

	 cout<<"Value of x :->"<<a<<endl;
	 cout<<"Value of y:->"<<b<<endl;


}
void Demo::add()
{
	 c=a+b;
	 cout<<"Addion of :->"<<c<<endl;
}
void main()
{
	clrscr();
	Demo d(20,10);
	d.print();
	d.add();

	getch();
}

