#include<iostream.h>
#include<conio.h>
class product
{
     private:
	     int pno;
	     char pname[10];
	     char cname[10];
	     int quntity;
	     float price;
     public:
	     void input();
	     void show();
};
void product::input()
{
     cout<<"Enter product no:";
     cin>>pno;
     cout<<"Enter product name:";
     cin>>pname;
     cout<<"Enter company name:";
     cin>>cname;
     cout<<"Enter quntity:";
     cin>>quntity;
     cout<<"Enter product price:";
     cin>>price;
}
void product::show()
{
	cout<<pno<<"\t\t"<<pname<<"\t\t"<<cname<<"\t\t"<<quntity<<"\t\t"<<price<<endl;
    /* cout<<"product no:"<<pno<<endl;
     cout<<"product name:"<<pname<<endl;
     cout<<"product company name:"<<cname<<endl;
     cout<<"product quntity:"<<quntity<<endl;
     cout<<"product price:"<<price<<endl;*/
}
void main()
{
     clrscr();
     int i;
     product p[2];
     cout<<"input"<<endl;
     for(i=0;i<2;i++)
     {
      p[i].input();
     }
     cout<<"_______________________________________________________________________"<<endl;
     cout<<"pno\t\tpname\t\tcname\t\tquantity\t\price"<<endl;
     cout<<"_______________________________________________________________________"<<endl;
     for(i=0;i<2;i++)
     {
	p[i].show();
     }
     getch();
}




