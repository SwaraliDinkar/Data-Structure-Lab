#include<iostream>
using namespace std;
class employee
{
  string name;
  int salary;
  string profession;

 public:
 employee()
 {
  name='\0';
  salary=0;
  profession='\0';
 }

 void setValue()
 {
  cout<<"\nEnter the name:";
  cin>>name;
  cout<<"\nEnter the salary::";
  cin>>salary;
  cout<<"\nEnter the profession::";
  cin>>profession;
 }

 void dispValue()
 {
  cout<<"Name is::"<<name;
  cout<<"Salary is::"<<salary;
  cout<<"Profession is::"<<profession;
 }
};

int main()
{
 employee *e;
 e=new employee();
 e->setValue();
 e->dispValue();
 return 0;
}
