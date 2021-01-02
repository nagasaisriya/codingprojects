#include<iostream>
using namespace std;
// Create a class complex to store complex numbers. Write functions to add and multiply two complex numbers them using operator overloading.
class complex{
	private:
		float real,img;//sum,mul;
	public:
		void input(){
			cout<<"ENTER REAL PART OF COMPLEX NUMBER:";
			cin>>real;
			cout<<"ENTER IMG PART OF COMPLEX NUMBER:";
			cin>>img;
		}
		complex(int r = 0, int i =0)  {real = r;   img = i;} 
		void adddisplay()
		{
			cout<<"ADDITION OF COMPLEX NUMBERS="<<real<<"+i("<<img<<")"<<endl;
		}
		void muldisplay(){
			cout<<"MULTIPLICATION OF COMPLEX NUMBERS="<<real<<"+i("<<img<<")";
		}
		complex operator+(const complex& b)
		{
			complex sum;
			sum.real=real+b.real;
			sum.img=img+b.img;
			return sum;
		}
		complex operator*(const complex& m)
		{
			complex mul;
			mul.real=real*m.real;
		    if(img<0)
				mul.img=img*m.img;
			else if(img>0)
			    mul.img=-(img*m.img);
			return mul;
		}	

};
int main()
{
	complex c1;
	complex c2;
	c1.input();
	c2.input();
	complex c3=c1+c2;
	complex c4=c1*c2;
	c3.adddisplay();
	c4.muldisplay();
	
}
