//wrt program to demonstate car class and object
#include<iostreame.h>
#include<conio.h>
class car
{
	public:
	char cname[20];
	int cmname;
};
void main()
{
	car c1;
	clrscr();
	cout<<"Enter Car Name:";
	cin>>c1.cname;
	cout<<"Enter Car Model Name:";
	cin>>c1.cmname;
	cout<<"Car name is:"<<c1.cname<<endl;
	cout<<"Car model name is:"<<c1.cmname;
	getch();



}