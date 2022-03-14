#include<iostream.h>
#include<conio.h>
class student
{
     public:
     int rollno;
     char name[20]; //dataname
     void display()

     {
	cout<<"inside class";
     }
};
    void main()
    {
    student s;
    clrscr();

    cout<<"enter roll number"<<endl;
    cin>>s.rollno;
    cout<<"enter student name"<<endl;
    cin>>s.name;
    cout<<s.rollno;
    cout<<s.name;
    getch();
    }

