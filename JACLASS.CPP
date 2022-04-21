//wrt program to demonstate class and object
#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno;
	char name[20];
	void display()
	{
	cout<<"inside class"<<endl;
	}
};
void main()
{
	student s1;
	clrscr();
	s1.display();
	cout<<"Enter Rollno"<<endl;
	cin>>s1.rollno;
	cout<<"Enter Name"<<endl;
	cin>>s1.name;
	cout<<"Roll no is:"<<s1.rollno<<endl;
	cout<<"Name is :"<<s1.name<<endl;
	getch();
}
