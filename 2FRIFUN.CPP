//program demonstrate friend function
#include<iostream.h>
#include<conio.h>
class demo1
class demo
{
	private:
		int a;
	public:
		void get_a();
		void show_a();
		friend void add(demo d,demo1 d1);
};
class demo1
{
	private:
		int b;
	public:
		void get_b();
		void show_b();
		friend void add(demo d,demo1 d1);
};
void demo::get_a()
{
	cout<<"Enter value A:-"<<"\t\t"<<endl;
	cin>>a;
}
void demo1::get_b()
{
	cout<<"Enter value B:-"<<"\t\t"<<endl;
	cin>>b;
}
void demo::show_a()
{
	cout<<a;
}
void demo1::show_b()
{
	cout<<b;
}
void add()
{
	cout<<d.a+d1.b;
}
void main()
{
	clrscr();
	demo d;
	d.get_a();
	d.show_a();
	demo d1;
	d1.get_b();
	d1.show_b();
	add(d,d1);
	getch();
}




}
