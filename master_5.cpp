#include<iostream>
#include<conio.h>
#include<process.h>
class person
{
   protected:
    char name[20];
    int code;
   public:
    void getcode()
    {
      cout<<"\n Enter the code ";
      cin>>code;
    }
    void getname()
    {
      cout<<"\n Enter the name ";
      cin>>name;
    }
};
class account:virtual public person
{
   protected:int pay;
   public:
    void getpay()
    {
      cout<<"\n Enter the payment ";
      cin>>pay;
    }
};
class admin:virtual public person
{
   protected:int exp;
   public:
    void getexp()
    {
      cout<<"\n Enter the experiance ";
      cin>>exp;
    }
};
class master:public account,public admin
{
   public:
    void getdata()
    {
      getcode();
      getname();
      getpay();
      getexp();
    }
    void update()
    {
      int c;
      cout<<"\n You want 2 update\n1.code\n2.name\n3.payment\n4.experiance";
      cout<<"\nEnter ur choice ";
      cin>>c;
      switch(c)
      {
        case 1: getcode();
           break;
        case 2: getname();
           break;
        case 3: getpay();
           break;
        case 4: getexp();
           break;
        default:cout<<"\n Invalid choice";
      }
    }
    void putdata()
    {
      clrscr();
      cout<<"\nDetails";
      cout<<"\n Code "<<code<<"\n Name "<<name;
      cout<<"\n Payment "<<pay<<"\n Experiance "<<exp;
      cout<<"\nPress any key 2 continue ";
      getch();
    }
};
void main()
{
   //clrscr();
   int ch;
   master m;
   while(1)
   {
     cout<<"\nMENU\n1.Create\n2.Update\n3.Display\n4.Exit";
     cout<<"\nEnter ur choice ";
     cin>>ch;
     switch(ch)
     {
       case 1: m.getdata();
          break;
       case 2: m.update();
          break;
       case 3: m.putdata();
          break;
       case 4: exit(0);
       default:cout<<"\n Invalid choice";
     }
     //clrscr();
   }
 //  getch();
}
