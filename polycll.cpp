#include<iostream>
using namespace std;

class node
{
public:
    int coeff;
    int power;
    node *next;

    node(int c,int p)
    {
      coeff=c;
      power=p;
      next=NULL;
    }
    friend class list;
};


class list
{

  public:
  void create();
  void insert(int c,int d);
  void display();
};

node *head=NULL;

void list:: create()
{
 int c,d,n;
 cout<<"enter the no. of terms"<<endl;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
   cout<<"enter the coefficient resp."<<endl;
   cin>>c;
   cout<<"enter the power resp."<<endl;
   cin>>d;
   insert(c,d);
 }
}


void list:: insert(int c,int d)
{
node *t=new node(c,d);
if(head==NULL)
 {
   head=t;
 }
else
 {
  
  node *temp;
  temp=head;
  while(temp->next!=NULL)
  {
       temp=temp->next;
  }
  temp->next=t;
 }
}


void list::display()
{
    node* temp;
    temp=head;
    while(temp->next!=NULL)
    {
       cout<<temp->coeff<<"x^"<<temp->power<<"+";
       temp=temp->next;
    }
cout<<temp->coeff<<"x^"<<temp->power;
       
}

int main()
{

   list *l;
   l =new list();
   l->create();
   l->display();
   return 0;
}


