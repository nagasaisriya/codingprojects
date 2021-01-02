#include<iostream>
using namespace std;
class shop{
		private:
		string name;
		string it_name[20];
		float price[20];
		int it_code[20];
		int qty[10];
		int billno;
		int count=0;
		public:
		void adding_item(void);
		void del_item(void);
		void total(void);
		void billing(void);
		void display(void);
};
void shop::adding_item(void)
{
    cout<<"Enter item code:";
    cin>>it_code[count];
    cout<<"Enter item name:";
	cin>>it_name[count];
    cout<<"Enter item price:";
    cin>>price[count];
    cout<<"Enter quantity:";
    cin>>qty[count];
    count++;
}
void shop::del_item(void)
{
    int i,x;
    cout<<"enter item code:";
    cin>>x;
    for (i=0; i<count; i++)
	 {
       if (it_code[i] == x) 
	   {
         for(int j=i;j<count-1;j++)
         {
         	it_code[j]=it_code[j+1];
         	price[j] = price[j+1];
         	it_name[j]=it_name[j+1];
         	qty[j]=qty[j+1];
         	
		 }
		 count = count - 1; 
       } 
	   else if(i==count)
       {
       	cout<<"item not found";
	   }
}
}         
void shop::total(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum=sum+price[i]*qty[i];
    }
    cout<<"Total bill amount="<<sum<<endl;
}
void shop::display(void)
{
	cout<<"Enter customer name:";
    cin>>name;
    cout<<"Enter bill no:";
    cin>>billno;
    cout<<"\nBILL NO:"<<billno<<endl;
    cout<<"\nNAME:"<<name<<endl;
    cout<<"\nCODE\tITEM\tPRICE\tQUANTITY\n";
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<it_code[i];
        cout<<"\t"<<it_name[i];
        cout<<"\t"<<price[i];
        cout<<"\t"<<qty[i];
    }
    cout<<endl;
}
int main()
{
   shop s; 
   int choice;
   do{
       cout<<"\nEnter your choice:"<<endl;
       cout<<"1.ADDING ITEM\n2.DELETING ITEM\n3.PRINTINGTOTAL\n4.DISPLAY"<<endl;
       cin>>choice;
       switch(choice){
           case 1:s.adding_item();break;
           case 2:s.del_item();break;
           case 3:s.total();break;
           case 4:s.display();break;
           default:cout<<"Wrong input";
       }
    }while(choice<5);
    return 0;
}
