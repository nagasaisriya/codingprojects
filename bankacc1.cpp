#include <iostream>
// create a class 
using namespace std;
class bank{
		private:
		string name,acc_type;
		int acc_num;
		float amt;
		public:
		void input(){
		    cout<<"enter name:";
		    cin>>name;
		    cout<<"enter account number:";
		    cin>>acc_num;
		    cout<<"Enter account type:";
		    cin>>acc_type;
		    cout<<"Enter amount:";
		    cin>>amt;
		}
		void bal()
		{
		    int withdraw;
		    cout<<"Amount to be withdrawn:";
		    cin>>withdraw;
		    if(amt>2000){
		        amt=amt-withdraw;
		    }
		    
		}
		void display()
		{
		    cout<<"NAME :"<<name<<endl;
		    cout<<"BALANCE:"<<amt;
		    
		}
};
int main()
{
    bank b;
    b.input();
    b.bal();
    b.display();
    return 0;
}
