//program demonstrate class and object
	   //or
//program demonstrate Encapsulation
#include<iostream.h>
#include<conio.h>
class student
{
	private:
	 int rollno;
	 char sname[20];
	 char sclass[15];
	public:
	 void input();
	void display();

};
void student:: input()
{
	cout<<"enter roll no:";
	cin>>rollno;
	cout<<"enter student name:";
	cin>>sname;
	cout<<"Enter class:";
	cin>>sclass;
}
void student:: display()
{
	cout<<rollno<<"\t\t"<<sname<<"\t\t"<<sclass<<endl;
}
void main()
{
	clrscr();
	student j1,j2;
	cout<<"************input**************"<<endl;
	j1.input();
	j2.input();

	cout<<"************output*************"<<endl;
	cout<<"_____________________________________"<<endl;
	cout<<"rollno\t\tsname\t\tsclass"<<endl;
	cout<<"_______________________________________"<<endl;

	j1.display();
	j2.display();



	getch();
}


