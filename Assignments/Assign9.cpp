#include<iostream>
using namespace std;

class Node{

public:
string job;
Node *next;

	Node(string j)
	{
	  job=j;
  	  next=NULL;
 	}

friend class Queue;
};

class Queue{

public:

void addJob();

void deleteJob();

void display();

};
Node *head=NULL,*tail=NULL;

void Queue::addJob()
{
	string job;
Node *temp;
cout<<"Enter the job to be added::"<<endl;
cin>>job;

temp=new Node(job);

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

void Queue::deleteJob()
{
Node *temp;
temp=head;
head=head->next;
cout<<temp->job<<" is deleted"<<endl;
delete(temp);
}


void Queue::display()
{

if(head==NULL)
{
cout<<"Queue is empty"<<endl;
}

else
{
Node *temp;
temp=head;

while(temp!=NULL)
{

cout<<"\t"<<temp->job;
temp=temp->next;

}

}
}


int main()
{

Queue *q;
q=new Queue();
int ch;
char c;
do{

cout<<"1.Add job::"<<endl;
cout<<"2.Delete job::"<<endl;
cout<<"3.Display job queue::"<<endl;
cout<<"4.Exit"<<endl;
cout<<"Enter the choice"<<endl;

cin>>ch;

switch(ch)
{
case 1:
q->addJob();
break;

case 2:
q->deleteJob();
break;

case 3:
q->display();
break;

default:
cout<<"Invalid choice"<<endl;

}
cout<<"DO you want to continue? y/n"<<endl;
cin>>c;
}while(c=='y');

return 0;
}
