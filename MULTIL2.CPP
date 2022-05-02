//program demonstrate multilevel inheritance
#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
	public:
		void getput();
};
class data:public student
{
	private:
		char name[20];
		char city[15];
	public:
		void getput1();
};
class marks:public data
{
	private:
		int m1,m2;
	public:
		void getput2();
		void averagemarks();
};
void student::getput()
{
	cout<<"Enter roll no:";
	cin>>rollno;
	cout<<"Rollno is:"<<rollno<<endl;
}
void data::getput1()
{
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Entered Name is:"<<name<<endl;
	cout<<"Enter city :";
	cin>>city;
	cout<<"Entered city is:"<<city<<endl;
}
void marks::getput2()
{
	cout<<"Enter First Subject marks:";
	cin>>m1;
	cout<<"Enter Second subject marks:";
	cin>>m2;
	cout<<"First Subject marks:"<<m1<<endl;
	cout<<"Second subject marks:"<<m2<<endl;
}
void marks::averagemarks()
{
	if(m1,m2>=12)
	{
	  cout<<"Pass";
	}
	else
	{
	  cout<<"Fail";
	}


}
void main()
{
	clrscr();
	marks m;
	m.getput();
	m.getput1();
	m.getput2();
	m.averagemarks();
	getch();
}