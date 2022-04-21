//program demonstate class and object
#include<iostream.h>
#include<conio.h>
class customer
{
	private:
	 char cname[20];
	 char city[25];
	 int mob[11];
	 char pname[20];
	public:
	 void get();
	 void show();
};
void customer::get()
{
	cout<<"Enter Customer name:";
	cin>>cname;
	cout<<"Enter city:";
	cin>>city;
	cout<<"enter mobile number:";
	cin>>mob;
	cout<<"Enter product name:";
	cin>>pname;
}
void customer::show()
{
	cout<<cname<<"\t\t"<<city<<"\t\t"<<mob<<"\t\t"<<pname<<endl;
}
void main()
{
	clrscr();
	customer c1;
	c1.get();
	cout<<"_______________________________________"<<endl;
	cout<<"cname\t\tcity\t\tmob\t\tpname"<<endl;
	c1.show();
	getch();
}
