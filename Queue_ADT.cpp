#include<iostream>
using namespace std;

#define SIZE 10

template<class T> 
class queue
{
	T *arr;
	int front;
	int rear;	
	int capacity;
	int count;
	public:
		queue(int size=SIZE);
		void dequeue();
		void enqueue(T x);
		T peek();
		int size();
		bool isEmpty();
		bool isFull();
		void display();
};

template<class T> 
queue<T>::queue(int size)
{
	
	
			front=0;
			rear=-1;
			arr=new T[size];
			capacity=size;
			count=0;
		
}

template<class T>
void queue<T>::dequeue()
{
	if(isEmpty()){
		cout<<"Underflow\n";
		exit(0);
	}
	cout<<"Deleting: "<<arr[front]<<endl;
	front=(front+1)%capacity;
	count--;
}

template<class T>
void queue<T>::enqueue(T item)
{
	if(isFull()){
		cout<<"Overflow\n";
		exit(0);
	}
	cout<<"Inseting: "<<item<<endl;
	rear=(rear+1)%capacity;
	arr[rear]=item;
	count++;
}

template <class T>
T queue<T>::peek()
{
    if (isEmpty()) 
    {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(0);
    }
    return arr[front];
}

template<class T>
int queue<T>::size()
{
	return count;
}

template<class T>
bool queue<T>::isEmpty()
{
	return (size()==0);
}

template<class T>
bool queue<T>::isFull()
{
	return (capacity==size());
}

template<class T>
void queue<T>::display()
{
	for(int i=rear;i>=front;i--)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	queue<int> q;
	int op;
	do{
		cout<<"Enter a number:\n";
		cout<<"Choose:\n1.Enqueue\n2.Dequeue\n3.Size\n4.Peek\n5.To check if queue is empty\n6.Display\n";
		cin>>op;
		switch(op)
		{
			case 1:
				int val;
				cin>>val;
				q.enqueue(val);break;
			case 2:
				q.dequeue();break;
			case 3:
				cout<<"size= "<<q.size()<<endl;break;
			case 4:
				cout<<"Front= "<<q.peek()<<endl;break;
			case 5:
				if (q.isEmpty())
        			cout << "Queue Is Empty\n";
    			else
    			    cout << "Queue Is Not Empty\n";
    		case 6:
    			q.display();break;
    		default:cout<<"wRONG CHOICE\n";
    	}
	} while(op!=0);
 
 
 
 
 
    return 0;
}


