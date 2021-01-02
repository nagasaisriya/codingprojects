#include<iostream>

using namespace std;

//runtime polymorphism example

class shape{

public:

float l,b,area;

virtual void input(){

cout<<"Enter dimensions:"<<endl;

cin>>l>>b;

}

virtual void display()=0;

};

class triangle:public shape

{

public: void display()

{

cout<<"Area of triangle="<<0.5*b*l<<endl;

}

};

class rectangle:public shape

{

public: void display()

{

cout<<"Area of rectangle="<<l*b<<endl;

}

};

int main()

{

triangle t;

shape *tptr=&t;

tptr->input();

tptr->display();

rectangle r;

shape *rptr=&r;

rptr->input();

rptr->display();

return 0;

}
