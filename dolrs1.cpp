#include<iostream>
using namespace std;
class MD{
	private:
		int rs;float ps,s=0;
	public:
		void readData();
		void display();
		float sum()
		{
			if(ps>=100){
				rs=rs+ps/100;
				ps=(int)ps%100;
				s+=float(rs)+0.01*ps;
			}
			else{
				s+=float(rs)+0.01*ps;
			}
			return s;
		}
	};
	void MD::readData()
	{
		cout<<"Enter currency in rupees:";
		cin>>rs;
		cout<<"Enter currency in paise:";
		cin>>ps;
	}
	void MD::display()
	{
		cout<<"AMOUNT:"<<rs<<" rupees "<<ps<<" paise"<<endl;
	}
class MR{
	private:
		int dol;float cent,s;
	public:
		void readData();
		void display();
		int sum()
		{
			if(cent>=100){
				dol=dol+cent/100;
				cent=(int)cent%100;
				s+=float(dol)+0.01*cent;
			}
			else{
				s+=float(dol)+0.01*cent;
			}
			return s;
		}
	};
	void MR::readData()
	{
		cout<<"Enter currency in dollars:";
		cin>>dol;
		cout<<"Enter currency in cents:";
		cin>>cent;
	}
	void MR::display()
	{
		cout<<"AMOUNT:"<<dol<<" dollar "<<cent<<" cents"<<endl;
	}
int main()
{
	MD r1,r2;
	MR d1,d2;
	float s;
	r1.readData();
	r1.display();
	float sum1=r1.sum();
	r2.readData();
	r2.display();
	float sum2=r2.sum();
    float sum3=sum1+sum2;
	cout<<"Sum in rupees="<<sum3<<endl;
	d1.readData();
	d1.display();
	float sum4=d1.sum();
	d2.readData();
	d2.display();
	float sum5=d2.sum();
	float sum6=sum4+sum5;
	float dsum=sum6+0.014*sum3;
	float rsum=(dsum)*75;
	cout<<"Sum in dollars="<<sum6<<endl;
	cout<<"Total sum in rupees="<<rsum<<endl;
	cout<<"Total sum in dollars="<<dsum<<endl;
	return 0;
}
