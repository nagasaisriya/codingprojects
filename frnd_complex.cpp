#include<iostream>
using namespace std;
class complex{
	private:
		float real,img;
	public:
		void input(){
			cout<<"Enter real part and imaginary parts of complex number:"<<endl;
			cin>>real>>img;
		}
		void display_num(){
			cout<<"Complex number you entered is: "<<real<<"+("<<img<<"i)"<<endl;
		};
		void display_sum();
	friend complex sum(complex,complex);	
};
void complex::display_sum()
{
	cout<<"Sum of complex numbers= "<<real<<"+("<<img<<"i)"<<endl;
}
complex sum(complex a,complex b)
{
	complex sum;
	sum.real=a.real+b.real;
	sum.img=a.img+b.img;
	return sum;
}
int main()
{
	complex a;
	complex b;
	complex c; 
	a.input();
	b.input();
	a.display_num(); 
	b.display_num();
	c=sum(a,b);
	c.display_sum();
	return 0;
}
