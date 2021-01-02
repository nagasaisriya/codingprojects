#include<iostream>
using namespace std;
int fib(int a)
{
	//int a;
//cin>>a;
	return (a==0)?0:(fib(a)+fib(a-1));
	return 0;
}
int main()
{
	int a;
	cin>>a;
	while(a>0)
	{
	cout<<fib(a)<<endl;
}
}
