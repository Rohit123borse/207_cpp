#include<iostream.h>
#include<conio.h>
class abc
{
	private:
	int n1,n2,n3;
	public:
	void get();
	void add();
	void show();
	/*void abc()
	{
	  n1=10;
	  n2=20;
	}*/
};
void abc::get()
{
	cout<<"Enter the number";
	cin>>n1>>n2;
}
void abc::add()
{
	n3=n1+n2;
	cout<<n3<<endl;
}
void abc::show()
{
	cout<<"Addition is:"<<n3;
}
void main()
{
	clrscr();
	abc a;
	a.get();
	a.add();
	a.show();
	getch();
}
