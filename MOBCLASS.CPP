//program to demonstrate using class and object
#include<iostream.h>
#include<conio.h>
class mobile
{
	private:
	char mcname[20];
	float price;

	public:
	void get();
	void show();
};
void mobile:: get()
{
	cout<<"Enter Mobile Campany Name:";
	cin>>mcname;
	cout<<"Enter Price:";
	cin>>price;
}
void mobile:: show()
{
	cout<<mcname<<"\t\t"<<price<<"\t\t"<<endl;

}
void main()
{
	clrscr();
	mobile m1;
	m1.get();
	cout<<"____________________________________________"<<endl;
	cout<<"mobile name\tprice"<<endl;
	cout<<"____________________________________________"<<endl;
	m1.show();
	getch();
}