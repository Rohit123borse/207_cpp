#include<iostream.h>
#include<conio.h>  

class rev
{
	long int n,num,rem,rev;
public:
	void get();
	void process();
};

void rev::get()
{
	cout<<"\n\n\n\n\n\t\t Enter the number :\t";
	cin>>n;
}
void rev:: process()
{
	num=n;
	rev=0;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=(rev*10)+rem;
	}

	if(num==rev)
		cout<<"\n\n\n\n\t The "<<num <<" is Palindrom number";
	else
		cout<<"\n\n\n\n\t The "<<num <<" is not Palindrom number";
}


void main()
{
	clrscr();
	cout<<"\n\n\n\t Program to check whether number is palindrom or not :\n";
	rev r;
	r.get();
	r.process();
	getch();
}
