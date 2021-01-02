#include<iostream>
using namespace std;
class currency
{
	int r,p;
	public:
	currency(int x,int y){r=x;p=y;}
	currency add(currency ob1);
	void disp();
};
currency currency::add(currency ob1)
{
	currency ob3(0,0);
	ob3.r=ob1.r+r;
	ob3.p=ob1.p+p;
	if(ob3.p>=100)
	{
	ob3.r=ob3.r+1;
	ob3.p=ob3.p-100;
	}
	return ob3;
}
void currency::disp()
{
	cout<<"ADDITION:"<<r<<'.'<<p;
}
int main()
{
	int a,b;
	cout<<"Ruppes:";
	cin>>a;
	cout<<"Paisa :";
	cin>>b;
	currency ob1(a,b);
	cout<<"Ruppes:";
	cin>>a;
	cout<<"Paisa :";
	cin>>b;
	currency ob2(a,b);
	currency ob3(0,0);
	ob3=ob1.add(ob2);
	ob3.disp();
	return 0;
	
	}
