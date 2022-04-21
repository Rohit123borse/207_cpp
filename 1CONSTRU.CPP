//program demonstrate using constructer function
#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int count;
	public:
		demo();//Constructer function
		void print();
}
demo::demo()
{
	cout<<"Count Is:"<<"\t\t";
	count=19;
}
void demo::print()
{
	cout<<count<<endl;
}
void main()
{
	 clrscr();
	 demo d;
	 d.print();
	 getch();
}


