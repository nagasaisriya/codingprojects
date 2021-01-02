#include<iostream>
using namespace std;
 
template<class T>
class Node{
          public:
        T data;
        Node<T> *next;
        Node(){}
        Node(T element){
            data=element;
            next=NULL;
                      }
        Node(T element,Node<T> *link){
            data=element;
            next=link;
        }    
};
template<class T>
class LinkedList{
         protected:
        Node<T> *head;
        int listSize;
            public:
            LinkedList();
            LinkedList(LinkedList &);
            ~LinkedList();
            bool IsEmpty() const;
            int size() const;
            int indexOf(T);
            T get(int index) const;
            void InsertFront(T element);
            void insert(int,T);
            void Append(T data);
            void erase(int);
            void eraseElement(T);
            void Print() const;
};
template<class T>
LinkedList<T>::LinkedList(){
    head=NULL;
    listSize=0;
}
 
template<class T>
LinkedList<T>::LinkedList(LinkedList &List)
{
    head=NULL;
    listSize=0;
    Node<T> *curr=List.head;
    while(curr!=NULL)
   {
        Append(curr->data);
        listSize++;
        curr=curr->next;
    }
    
}

template<class T>
LinkedList<T>::~LinkedList(){
    Node<T> *curr=head,*next;
    while(curr!=NULL)
   {
        next=curr->next;
        delete curr;
        curr=next;
    }
    head=NULL;
}

template<class T>
bool LinkedList<T>::IsEmpty() const{
    return head==NULL;
}

template<class T>
int LinkedList<T>::size() const{
    return listSize;
}

template<class T>
int LinkedList<T>::indexOf(T element){
    Node<T> *curr=head,*prev;
    int index=0;
    while(curr->data!=element && curr->next!=NULL){
            curr=curr->next;
            index++;
    }
    if(curr->data==element)
             return index;
    return -1;
}  

template<class T>
T LinkedList<T>::get(int index) const{
    Node<T> *curr=head;
    int pos=0;
    if(index>listSize){
            return -1;
    }
    while(pos<index){
        pos++;
        curr=curr->next;
    }
    return curr->data;
}

template<class T>
void LinkedList<T>::InsertFront(T element){
    Node<T> *new_node=new Node<T>(element);
    new_node->next=head;
    head=new_node;
    listSize++;
}

template<class T>
void LinkedList<T>::insert(int index,T element){
    Node<T> *new_node=new Node<T>(element);
    Node<T> *curr=head,*prev;
    int pos=0;
    if(index>listSize){
        cout<<"Invalid Index";
        return;
    }
    if(index==0){
        InsertFront(element);
        return;
    }
    while(pos<index){
        prev=curr;
        curr=curr->next;
        pos++;
    }
    new_node->next=prev->next;
    prev->next=new_node;
    listSize++;    
}

template<class T>
void LinkedList<T>::Append(T data){
    Node<T> *new_node=new Node<T>(data);
    if(IsEmpty())
   {
        head=new_node;
        listSize++;
        return;
    }
    Node<T> *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=new_node;
    listSize++;
}
 
template<class T>
void LinkedList<T>::erase(int index){
    Node<T> *curr,*prev;
    curr=head;
    if(index==0){
        head=head->next;
        listSize--;
        delete curr;
        return;
    }
    int pos=0;
    while(pos<index){
        prev=curr;
        curr=curr->next;
        pos++;
    }
    prev->next=curr->next;
    delete curr;
    listSize--;
}

template<class T>
void LinkedList<T>::eraseElement(T element)
{    
    Node<T> *curr,*prev;
    curr=head;
    while(curr->data!=element && curr->next !=NULL){
        prev=curr;
        curr=curr->next;
    }
    if(curr->data==element && curr==head){
        head=head->next;
        delete curr;
        listSize--;
        return;
    }
    prev->next=curr->next;
    delete curr;
    listSize--;
}

template <class T>
void LinkedList<T>::Print() const{
    Node<T> *curr;
    curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr=curr->next;    
    }
}

int main()
{
    LinkedList<char> l;
    int op,n;
    char c;
    cout<<"\nOPERATIONS:\n";
    cout<<"1.Insert an Element at the beginning\n2.Insert an Element at given Index\n3.Append the list\n4.Erase an Element\n5.Erase an element given an Index\n";
    cout<<"6.Get Index of an Element\n7.Get Element at given Index\n8.Display the List\n9.Exit\n";
    cout<<"\nSelect an Option:";
    cin>>op;
    while(op!=9){
        switch(op){
            case 1:cout<<"\nEnter the element to be Inserted at the beginning:";
                       cin>>c;
                       l.InsertFront(c);
                       break;
            case 2:cout<<"\nEnter the element to be Inserted:";
                      cin>>c;
                      cout<<"Enter the Index position to Insert:";
                     cin>>n;
                     l.insert(n,c);
                     break;
            case 3:cout<<"\nEnter the element to be Append:";
                       cin>>c;
                       l.Append(c);
                        break;
            case 4:cout<<"\nEnter the element to be Erased:";
                        cin>>c;
                         l.eraseElement(c);
                         break;
            case 5:cout<<"\nEnter the Index position of the Element to be Erased:";
                        cin>>n;
                        l.erase(n);
                        break;
            case 6:cout<<"\nEnter the  Element to retrieve the Index:";
                        cin>>c;
                        l.get(c);
                         cout<<"Index of "<<c<<":";
                        if(l.indexOf(c)==-1){
                               cout<<"Element not Present";
                        }
                        else{
                              cout<<l.indexOf(c)<<endl;
                         }
                         break;
            case 7:cout<<"\nEnter the Index to retrieve the Element:";
                        cin>>n;
                        cout<<"Element at Index "<<n<<":";
                        if(l.get(n)==-1){
                              cout<<"Invalid Index";
                        }
                       else{
                            cout<<l.get(n)<<endl;
                       }
                        break;
             case 8:cout<<"The List is:\n";
                        l.Print();
            
        }cout<<"Select an option:";
        cin>>op;
    }      
    cout<<"Quit";
}
/*OUTPUT:
OPERATIONS:
1.Insert an Element at the beginning
2.Insert an Element at given Index
3.Append the list
4.Erase an Element
5.Erase an element given an Index
6.Get Index of an Element
7.Get Element at given Index
8.Display the List
9.Exit
 
Select an Option:3
 Enter the element to be Append:c
 
Select an Option:1
 Enter the element to be Inserted at the beginning:a
 
Select an Option:2
 Enter the element to be Inserted:b
Enter the Index position to Insert:1
 
Select an Option:8
The List is:
a-->b-->c-->

Select an Option:3
 Enter the element to be Append:f
 
Select an Option:2
 Enter the element to be Inserted:d
Enter the Index position to Insert:3
 
Select an Option:2
 Enter the element to be Inserted:e
Enter the Index position to Insert:4
 
Select an Option:8
The List is:
a-->b-->c-->d-->e-->f-->

Select an Option:4
 Enter the element to be Erased:a
 
Select an Option:8
The List is:
b-->c-->d-->e-->f-->

Select an Option:6
 Enter the  Element to retrieve the Index:a
Index of a:Element not Present

Select an Option:5
 Enter the Index position of the Element to be Erased:2
 
Select an Option:8
The List is:
b-->c-->e-->f-->

Select an Option:7
 Enter the Index to retrieve the Element:3
Element at Index 3:f
 
Select an Option:5
 Enter the Index position of the Element to be Erased:3
 
Select an Option:8
The List is:
b-->c-->e-->

Select an Option:9
Quit*/
