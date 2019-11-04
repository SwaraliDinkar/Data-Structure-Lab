#include<iostream>
using namespace std;

class Student
{
public:

int prn;
string name;
Student *next;


 Student(int prn,string name)
{
 this->prn=prn;
 this->name=name;
next=NULL;
 }

friend class Pinnacle;

};

Student *head=NULL,*tail=NULL;
class Pinnacle
{
  public:
	void addPresident();
	void addSecretory();
	void addMember();
	
	void deleteMembers();
	void display();
};

void Pinnacle::addPresident()
{
Student *temp;
int prn;
string name;
cout<<"Enter the PRN number of president::"<<endl;
cin>>prn;
cout<<"Enter the name of president::"<<endl;
cin>>name;

temp=new Student(prn,name);
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

void Pinnacle::addSecretory()
{
 Student *temp;
int prn;
string name;
cout<<"Enter the secretory name::"<<endl;
cin>>name;
cout<<"Enter the PRN of the secretory::"<<endl;
cin>>prn;

temp=new Student(prn,name);
if(head==NULL)
{
cout<<"You cannot add secretory without adding president"<<endl;
return;
}

else
{
tail->next=temp;
tail=temp;
}
}

void Pinnacle::addMember()
{
Student *temp,*t;
int c=1,pos;
t=head;
temp=t;
cout<<"Enter the position where you have to add member::"<<endl;
cin>>pos;

if(pos==1)
{

addPresident();
cout<<"The president has been replaced"<<endl;
}

else
{
 while(t->next!=NULL && c<pos-1)
 {
 t=t->next;
 c++;
 }
 
    if(pos>1)
     {
	int prn;
string name;
	cout<<"Enter the member name::"<<endl;
	cin>>name;
	cout<<"Enter the PRN of the member::"<<endl;
	cin>>prn;
	temp=new Student(prn,name);
	temp->next=t->next;
	t->next=temp;
     }
    else
	{
	cout<<"Invalid position"<<endl;
	}
}

}


 
void Pinnacle::deleteMembers()
{
Student *temp,*t;
int c=1,pos;
t=head;
temp=t;
cout<<"Enter the position from where you want to delete the member::"<<endl;
cin>>pos;




 while(t->next!=NULL && c<pos-1)
 {
 t=t->next;
 c++;
 }
 
    if(pos>=1)
     {
	 temp=t->next;
    t->next=temp->next;
    delete(temp);
     }
    else
	{
	cout<<"Invalid position"<<endl;
	}
}

void Pinnacle::display()
{
if(head==NULL)
 {
  cout<<"Club is empty."; 
 }
 else
 {
  Student *a;
  a=head;

cout<<"_______________________________________________________";
            cout<<"\n|     PRN Number      |              Name             | \n";
            cout<<"|_____________________|_______________________________|";
  while(a!=NULL)
    {
		
      cout<<"\n"<<a->prn;
	cout<<a->name;

      a=a->next;
    } 
cout<<"\n_______________________________________________________";
            cout<<endl;
 
 }
}


int main()
{

Pinnacle *p;
p=new Pinnacle();
int ch;
char c;
do{
cout<<"Enter the choice::"<<endl;
cout<<"1.Add President."<<endl;
cout<<"2.Add Secretory"<<endl;
cout<<"3.Add member"<<endl;
cout<<"4.Delete president,Secretory or member"<<endl;

cout<<"5.Display"<<endl;


cin>>ch;

switch(ch)
{
case 1:

p->addPresident();
break;

case 2:

p->addSecretory();
break;

case 3:

p->addMember();
break;

case 4:

p->deleteMembers();
break;

case 5:

p->display();
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




 

