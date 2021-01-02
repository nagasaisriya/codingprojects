#include<iostream>
using namespace std;
template <class T>
T bsort(T arr[],T n)
{
	T t=0;
	//implementing bubble sort 
	for(int i=0;i<n-1;i++ )
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1]){
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
int main()
{
	int arr[10];
	int n,i;
	float arr2[10];
	int ch;
	bool exit=false;
	do
	{
		cout<<"\nEnter your choice:\nselect 1 for sorting integer elements\nselect 2 for sorting float elements\nselect 3 to exit-"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter Array size: "<<endl;
				cin>>n;
				cout<<"Enter Array elements of int type:"<<endl;
				for(i=0;i<n;i++)
				{
					cin>>arr[i];
				}
				bsort<int>(arr,n);
				cout<<"Sorted array of integer type elements:"<<endl;
				for(i=0;i<n;i++)
				{
					cout<<arr[i]<<" ";
				}
				break;
			case 2:
				cout<<"Enter Array size: "<<endl;
				cin>>n;
				cout<<"Enter Array elements of float type: "<<endl;
				for(i=0;i<n;i++)
				{
					cin>>arr2[i];
				}
				bsort<float>(arr2,n);
				cout<<"Sorted array of float type elements: "<<endl;
				for(i=0;i<n;i++)
				{
					cout<<arr2[i]<<" ";
				}
				break;	
			default:
				exit=true;
		}
   }while(!exit);
}
