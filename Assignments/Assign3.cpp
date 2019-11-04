#include<iostream>
#include<maths.h>
using namespace std;

class polynomial
{

int p,n,a[20];

istream& operator >>(istream& din,polynomial &p)
{
int i;
    cout<<"Enter the degree of polynomial::"<<endl;
    din>>p.n;

for(i=0;i<=n;i++)
   {
      cout<<"Enter the coefficient for "<<i<<" power::";
      din>>p.a[i];
   }

return din;
																																																		
}

ostream& operator<<(ostream& din,polynomial &p)
{
int i;







}p1,p2,p3,p4,p;


int main()
{

cout<<"Enter the first polynomial::"<<endl;
cin>>p1;
cout<<"Enter the second polynomial::"<<<endl;
cin>>p2;

cout<<"f(x)="<<p1<<endl;
cout<<"g(x)="<<p2<<endl;



