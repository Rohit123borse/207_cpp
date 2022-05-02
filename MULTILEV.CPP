#include<iostream.h>
#include<conio.h>
class student
{
      protected:
	int rollno;
	char name[18];

      public:
	 void get();
	 void put();
};
class mark:public student
{
     protected:
	int m1,m2;
     public:
	void get_mark();
	void put_mark();
};
class result:public mark
{
     private:
       int totel;
     public:
       void display();
};
void student::get()
{
cout<<"enter student rollno=";
cin>>rollno;
cout<<"enert student name=";
cin>>name;
}
void student::put()
{
cout<<"student rollno is="<<rollno<<endl;
cout<<"student name is="<<name<<endl;
cout<<"************************************"<<endl;
}
void mark::get_mark()
{
get();
cout<<"enter mark of 1st sub=";
cin>>m1;
cout<<"enter mark of 2st sub=";
cin>>m2;
}
void mark::put_mark()
{
put();
cout<<"marks of 1st sub="<<m1<<endl;
cout<<"marks of 2st sub="<<m2<<endl;
cout<<"************************************"<<endl;
}
void result::display()
{
get_mark();
put_mark();
totel=m1+m2;
cout<<"totel is="<<totel<<endl;
}
int main()
{
clrscr();
result r;
r.display();
getch();
}

