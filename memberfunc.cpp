#include<iostream>
using namespace std;
class complex{
	private:
		float real,img;
	public:
		void input(){
			cout<<"Enter real part and imaginary parts of complex number:"<<endl;
			cin>>real>>img;
			cout<<"The given complex number is: "<<real<<"+("<<img<<"i)"<<endl;
		}
		void display(){
		//	cout<<"The complex number is: "<<real<<"+("<<img<<"i)"<<endl;
			cout<<"Sum of complex numbers: "<<real<<"+("<<img<<"i)"<<endl;
		}
		void sum(complex n1,complex n2)
		{
			real=n1.real+n2.real;
			img=n1.img+n2.img;
		}
};
int main()
{
	complex n1;
	complex n2;
	complex s;
	n1.input();
	n2.input();
	s.sum(n1,n2);
	s.display();
	return 0;
}
