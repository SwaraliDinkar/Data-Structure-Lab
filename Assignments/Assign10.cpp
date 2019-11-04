#include<iostream>
using namespace std;
class Node
{
 public:
    int data;
    Node *next;
    Node(int d)
    {
	data=d;
        next=NULL;
    }
    friend class list;	
};

class List
{
    public :
	
	void addLast();
	void addFirst();
	void deleteLast();
	void deleteFirst();
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
     head=temp;
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
