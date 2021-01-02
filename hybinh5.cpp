#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
		string name;
		int code;
	public:
		void input(){
			cout<<"Enter name and code:"<<endl;
			cin>>name>>code;
		}
		void get_data()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Code: "<<code<<endl;
		}
};
class admin:virtual public person{
    protected:
    	int exp;
    public:
		void set_exp()
		{
			cout<<"Enter experience:"<<endl;
			cin>>exp;
		}
		void get_exp()
		{
			cout<<"Person's Experience: "<<exp<<"years"<<endl;
		}
};
class account:virtual public person{
	protected:
		float  pay;
	public:
		void set_pay()
		{
			cout<<"Enter pay:"<<endl;
			cin>>pay;
		}
		void get_pay()
		{
			cout<<"Pay: Rs."<<pay<<"/-"<<endl;
		}
};
class master:public account,public admin
{
	public:
		void inp_details()
		{
			input();
			set_pay();
			set_exp();
		}
		void update()
		{
			int ch;
			cout<<"Press\n1.To update name and code\n2.To update experience\n3.To update pay\n4.To exit\n";
			cout<<"Enter choice:"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:input();break;
				case 2:set_exp();break;
				case 3:set_pay();break;
				default:cout<<"Exit";
			}
		}
		void display()
		{
			get_data();
			get_pay();
			get_exp();
		}
};
int main()
{
	master m;
	int s;
	while(1)
	{
		cout<<"What you want to perform:"<<endl;
		cout<<"1.Create\n2.Update\n3.Display"<<endl;
		cin>>s;
		switch(s)
		{
			case 1:m.inp_details();break;
			case 2:m.update();break;
			case 3:m.display();break;
			default:cout<<"wrong choice";exit(0);
			
		}
	}
	return 0;
}
