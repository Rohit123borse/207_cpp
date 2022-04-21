//program demonstrate using single inheritance
#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	void show()
	{
	   cout<<"This is the Parent Class"<<endl;
	   int a,b,c;
	   a=10;
	   b=20;
	   cout<<"a"<<"="<<a<<"\t"<<"b"<<"="<<b<<endl;
	}
};
class xyz : public abc
{
	public:
	void display()
	{
	  cout<<"This is Child Class"<<endl;
	  int a,b,c;
	  c=a+b;
	  cout<<"Addition is:"<<"c"<<"="<<c<<endl;
	}

};
void main()
{
	clrscr();
	xyz r1;
	r1.show();
	r1.display();

	getch();
}

