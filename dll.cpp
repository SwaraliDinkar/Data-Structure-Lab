#include<iostream>
using namespace std;
class Node
{
 public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
	data=d;
        next=NULL;
        prev=NULL;
    }
    friend class list;	
};

class List
{
    public :
	
	void addLast();
	void addFirst();
	void addBetween();
	void deleteLast();
	void deleteFirst();
	void deleteBetween();
	void display();
};

Node *head=NULL,*tail=NULL;

void List::addLast()
{
 int data;
 Node *temp;
 cout<<"Enter the element to be added at last"<<endl;
 cin>>data;
 temp=new Node(data);
 if(head==NULL)
 {
   head=temp;
   tail=temp;
 }
 else
 {
   tail->next=temp;
   temp->prev=tail;
   tail=temp;
 }
}

void List::addFirst()
{
  int data;
  Node *temp;
  cout<<"Enter the element to be added at first::"<<endl;
  cin>>data;
  temp=new Node(data);
  if(head==NULL)
  {
   head=temp;
   tail=temp;
  }
else
  {
     temp->next=head;
     head->prev=temp;
     head=temp;
  }
}

void List::addBetween()
{
   int c=1,pos,data;
   Node *temp,*t,*m;
   cout<<"Enter the position:";
   cin>>pos;
   if(pos==1)
   {
	addFirst();
   }
   else
   { 
     t=head;
     while(t->next!=NULL && c < pos-1)
     {
        t=t->next;
        c++;
     }
    
    if(pos>1)
     {
     	cout<<"Enter the element to be added at position::"<<endl;
     	cin>>data;
        m=t->next;
     	temp=new Node(data);
     	temp->next=m;
        temp->prev=t;
        m->prev=temp;
     	t->next=temp;
     }
     else
     {
       cout<<"Invalid Position";
     }
   }
}



void List::deleteFirst()
{

Node *temp;
temp=head;
head=head->next;
cout<<temp->data<<" is deleted!!!"<<endl;
delete(temp);


}


void List::deleteLast()
{
Node *temp,*t;

temp=head;
t=temp;
while(temp->next!=NULL)
{
t=temp;
temp=temp->next;
}

delete(temp);
t->next=NULL;
tail=t;
}



void List::deleteBetween()
{
    int c=1,pos;
    Node *t,*temp;
    cout<<"Enter the position::";
    cin>>pos;
 
    t=head;
   
    if(t->next!=NULL && c < pos-1)
      {
        t=t->next;
        c++;
      }


    temp=t->next;
    t->next=temp->next;
    delete(temp);
    
     

}

void List::display()
{
if(head==NULL)
 {
  cout<<"List is empty."; 
 }
 else
 {
  Node *a;
  a=head;
  while(a!=NULL)
    {
      cout<<"\t"<<a->data;
      a=a->next;
    }  
 }
}

int main()
{
List *l;
l=new List();
int ch;
char c;
do{
cout<<"Enter the choice::"<<endl;
cout<<"1.Add at first."<<endl;
cout<<"2.Add at Last."<<endl;
cout<<"3.Delete at first"<<endl;
cout<<"4.Delete at last"<<endl;
cout<<"5.Display"<<endl;
cout<<"6.Add in between."<<endl;
cout<<"7.Delete in between."<<endl;
cin>>ch;

switch(ch)
{
		case 1:

		l->addFirst();
		break;

		case 2:

		l->addLast();
		break;

		case 3:

		l->deleteFirst();
		break;

		case 4:

			l->deleteLast();
			break;

		case 5:

			l->display();
			break;

		case 6:

			l->addBetween();
			break;

		case 7:

			l->deleteBetween();
			break;

		

		default:

			cout<<"Invalid input."<<endl;
			break;
}

cout<<"Do you want to continue? y/n"<<endl;
cin>>c;
}while(c=='y');

return 0;
}
