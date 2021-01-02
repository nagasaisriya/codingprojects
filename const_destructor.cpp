#include<iostream>

using namespace std;

//implement hybrid inheritance and find order of constructors and destructors call

class A{

public:

A()

{

cout<<"creating A"<<endl;

}

~A(){

cout<<"Destroying A"<<endl;

}

};

class B:public A{

public:

B()

{

cout<<"creating B"<<endl;

}

~B()

{

cout<<"Destroying B"<<endl;

}

};

class C:public A{

public:

C()

{

cout<<"creating C"<<endl;

}

~C()

{

cout<<"Destroying C"<<endl;

}

};

class D:public B,public C{

public:

D()

{

cout<<"creating D"<<endl;

}

~D()

{

cout<<"Destroying D"<<endl;

}

};

int main()

{

D obj;

{

cout<<"inner block entered"<<endl;

D obj2;

}

cout<<"entered outer block"<<endl;
return 0;

}
