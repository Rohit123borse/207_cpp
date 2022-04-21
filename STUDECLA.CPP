#include<iostream.h>
#include<conio.h>
class student
{
    private:
	    int rollno;
	    char name;
    public:
	    void get();
	    void put();
};
void student::get()
{
     cout<<"Enter rollno";
     cin>>rollno;
     cout<<"Enter name";
     cin>>name;

}
void student::put()
{
     cout<<"rollno is:"<<rollno<<endl;
     cout<<"name is:"<<name<<endl;
}
void main()
{
     clrscr();
     int i;
     student s[5];
     cout<<"input";
     for(i=0;i<5;i++)
     {
	  s[i].get();
     }
     cout<<"output";
     for(i=0;i<5;i++)
     {
	  s[i].put();
     }
     getch();
}
