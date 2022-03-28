#include<iostream.h>
#include<conio.h>
class emp
{
	private:
		char name [20],dept[40],add[40],gen[7];
		int sal,age;
	public:
		void get();
		void put();
};
void emp::get()
	{
		cout<<"name of employee\n";
		cin>>name;
		cout<<"name of department\n";
		cin>>dept;

		cout<<"enter the address of employeee\n";
