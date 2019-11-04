#include<iostream>
using namespace std;
struct student
{
  string name;
  int id;
  int roll;


void setValue()
{
cout<<"Enter the name";
cin>>name;
cout<<"Enter the id";
cin>>id;
cout<<"Enter the roll no.";
cin>>roll;
}

void dispValue()
{
cout<<"Name::"<<name<<endl;
cout<<"id::"<<id<<endl;
cout<<"Roll no::"<<roll<<endl;
}

};

int main()
{
student *s;
s=new student();
s->setValue();
s->dispValue();
return 0;
}
