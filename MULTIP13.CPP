//program demonstrate multiple inheritance
#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
	public:
		void get();
		void put();
};
class data
{
	private:
		char name[20];
		char city[15];
	public:
		void get1();
		void put1();
};
class marks:public student,public data
{
	private:
		int m1,m2,m3,m4;
	public:
		void get2();
		void add();

};
void student::get()
{
	cout<<"Enter rollno:";
	cin>>rollno;
}
void student::put()
{
	cout<<"Rollno is:"<<rollno<<endl;
}
void data::get1()
{
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter city:";
	cin>>city;
}
void data::put1()
{
	cout<<"Entered Name is:"<<name<<endl;
	cout<<"Entered City is:"<<city<<endl;
}
void marks::get2()
{
	cout<<"Enter 1 Subject marks:";
	cin>>m1;
	cout<<"Enter 2 subject marks:";
	cin>>m2;
	cout<<"Enter 3 subject marks:";
	cin>>m3;
}
void marks::add()
{
	m4=m1+m2+m3;
	cout<<"Total Marks is:"<<m4<<endl;
}
void main()
{
	clrscr();
	marks m1;
	cout<<"***********INPUT*********"<<endl;
	m1.get();
	m1.get1();
	m1.get2();
	cout<<"***********OUTPUT********"<<endl;

	m1.put();
	m1.put1();
	m1.add();
	getch();
}