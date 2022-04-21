//program Demonstrate Destructor
#include<iostream.h>
#include<conio.h>
class demo
{
	public:
		~demo();
};
demo::~demo()
{
	cout<<"Destructor CAlled";

}
void main()
{
	clrscr();
	demo d1;
	getch();

}