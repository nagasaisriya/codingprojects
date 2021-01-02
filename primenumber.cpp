#include<iostream>
using namespace std;
/*bool ifPrime(int n)
{
	int i;
	if(n<=1)
		return false;
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				return false;
		}
		return true;
	}
}*/
void Prime(int i)
{
	int c=0;
	for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			cout<<i<<endl;
		}
}
int main()
{
	int n,m,c=0;
	cin>>n>>m;
	for(int i=n;i<m;i++)
	{
		Prime(i);
	}
	
	return 0;
}

