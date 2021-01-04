#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10
template <class X>
class stack
{
    X *arr;
    int top;
    int capacity;
 
public:
    stack(int size = SIZE);    
    void push(X);
    X pop();
    X peek();
 	void display();
    int size();
    bool isEmpty();
    bool isFull();    
    ~stack(){
        delete[] arr;
    }
};
 

template <class X>
stack<X>::stack(int size)
{
    arr = new X[size];
    capacity = size;
    top = -1;
}
 

template <class X>
void stack<X>::push(X x)
{
    if (isFull())
    {
        cout << "OverFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << x << endl;
    arr[++top] = x;
}
 

template <class X>
X stack<X>::pop()
{
    
    if (isEmpty())
    {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Removing " << peek() << endl;
 
    
    return arr[top--];
}
 

template <class X>
X stack<X>::peek()
{
	
    if (!isEmpty())
        return arr[top];
    else
        exit(EXIT_FAILURE);
}
 

template <class X>
int stack<X>::size()
{
    return top + 1;
}
 

template <class X>
bool stack<X>::isEmpty()
{
    return top == -1;   
}
 
template <class X>
bool stack<X>::isFull()
{
    return top == capacity - 1;    
}

template<class T>
void stack<T>::display()
{
	cout<<"Stack elements: ";
	for(int i=top;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
 
int main()
{
    stack<int> q;
 	int op;
	do{
		cout<<"Enter a number:\n";
		cout<<"Choose:\n1.Push\n2.pop\n3.Size\n4.Peek\n5.To check stack is empty\n6.Display\n";
		cin>>op;
		switch(op)
		{
			case 1:
				int val;
				cin>>val;
				q.push(val);break;
			case 2:
				q.pop();break;
			case 3:
				cout<<"Size= "<<q.size()<<endl;break;
			case 4:
				//cout<<"Front= ";
				//q.peek();
				cout<<"Front= "<<q.peek()<<endl;break;
			case 5:
				if (q.isEmpty())
        			cout << "Stack Is Empty\n";
    			else
    			    cout << "Stack Is Not Empty\n";
    		case 6:
    			q.display();break;
    		default:cout<<"wRONG CHOICE\n";
    	}
	} while(op!=7);
 
    return 0;
}
