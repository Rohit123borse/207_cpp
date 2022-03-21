//program demonstrate class and object
		 //or
//program demonstrate encapsulaction
#include<iostream.h>
#include<conio.h>
class student
{
	 private:
	 int rollno;
	 char name[44];
	 int mark;
	 public:
	   void get();
	   void put();
};
void student:: get()
{
   cout<<"enter name"<<endl;
   cin>>name;

   cout<<"enter rollno"<<endl;
   cin>>rollno;

   cout<<"enter mark"<<endl;
   cin>>mark;
}
void student::put()
{
   cout<<rollno<<"\t\t";
   cout<<name<<"\t\t";
   cout<<mark<<endl;
}
void main()
{
 clrscr();
 student rohit,jayesh;
 rohit.get();
 jayesh.get();
 cout<<"\n*********************************************"<<endl;
 cout<<"rollno\t\tname\t\tmark"<<endl;
 rohit.put();
 jayesh.put();
getch();
}
