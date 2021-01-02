#include<iostream>
using namespace std;
template<class T> class Node
{
	public:
		T data;
		Node<T> *next;
		Node()
		{
		}
		Node(const T& element)
		{
			data=element;
			next=NULL;
		}
		Node(const T& element,Node<T> *link)
		{
			data=element;
			next=link;
		}
};
template<class T> class LinkedList
{
	protected:
		Node<T> *head;
		int listsize;
	public:
		LinkedList()
		{
			head=NULL;
		}
	//	LinkedList(const LinkedList<T>&);
		~LinkedList()
		{
			Node<T> *curr=head;
			while(curr!=NULL)
			{
				Node<T> *nextnode=curr->next;
				delete curr;
				curr = nextnode;
			}
			head=NULL;
		}
		bool isEmpty() const
		{
			return listsize;
		}
		int size() const
		{
			return listsize;
		}
		T& get(int index) const;
		int indexOf(const T& element) const;
		void Append(T data);
		void Insert(int index,T element);
		void erase(int index);
		void eraseele(T element);
		void Print() const;
};
/*template<class T> void LinkedList<T>::~LinkedList()
{
	Node<T> *curr=head;
			while(curr!=NULL)
			{
				Node<T> *next=curr->next;
				delete curr;
				curr = next;
			}
			head=NULL;
}*/
template<class T> void LinkedList<T>::Append(T data)
{
	Node<T> *newnode=new Node<T>;
	newnode->data=data;
	if(isEmpty())
	{
		head=newnode;
		return;
	}
	Node<T> *curr=head;
	while(curr->next!=NULL)
		curr=curr->next;
	curr->next=newnode;
	listsize++;
}
template<class T> void LinkedList<T>::erase(int index)
{
	Node<T> *curr=head;
	int pos=0;
	if(index>listsize)
	{
		  cout<<"invalid index";
	}
	Node<T> *prev;
	while(pos<index)
	{
		prev=curr;
		curr=curr->next;
		pos++;
	}
	prev->next=curr->next;
	delete curr;
	listsize--;
}
template<class T> void LinkedList<T>::eraseele(T element){
	Node<T> *curr=head;
	Node<T> *prev;
	while(curr->data!=element && curr->next!=NULL)
	{
		prev=curr;
		curr=curr->next;
	}
	if(curr->data==element)
	{
		prev->next=curr->next;
		delete curr;
		listsize--;
	}
	else{
		cout<<"element notfound";
	}
}
template<class T> void LinkedList<T>::Print() const{
	Node<T> *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<"-->";
		curr=curr->next;
	}
//	cout<<"Linked list elemnts are:";
//	for(int i=0;i<)

}
template<class T> T& LinkedList<T>::get(int index) const
{
	Node<T> *curr=head;
	int pos=0;
	if(index>listsize)
	{
		cout<<"invalid index";
	}
	while(pos<index)
	{
		curr=curr->next;
		pos++;
	}
	return curr->data;
}
template<class T> int LinkedList<T>::indexOf(const T& element) const
{
	Node<T> *curr=head;
	int pos=0;
	while(curr->data!=element && curr->next!=NULL)
	{
		curr=curr->next;
		pos++;
	}
	return pos;
}
int main()
{
	LinkedList<int> x;
	x.Append(10);
	x.Print();
//	cout<<"after appending:\n";
	x.Append(20);
	cout<<"after appending:\n";
	x.Print();
	x.Insert(1,30);
	cout<<"\n"<<x.get(1);
	cout<<"\nindexof element is:\n"<<x.indexOf(20);
	x.Print();
	x.Insert(1,40);
	x.Print();
	cout<<"\ndeleting element by index:\n";
	x.erase(1);
	x.Print();
	cout<<"\ndeleting element:\n";
	x.eraseele(20);
	x.Print();
}
