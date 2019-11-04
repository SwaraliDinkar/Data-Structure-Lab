#include<iostream>
using namespace std;

int main()
{
int size,a[20],num,i;

cout<<"Enter the size of array::"<<endl;
cin>>size;

for(i=0;i<size;i++)
	{
	cout<<"Enter the element in array::"<<endl;
	cin>>a[i];
	}

cout<<"Enter the element to be searched::"<<endl;
cin>>num;

for(i=0;i<size;i++)
{
if(a[i]==num)
	{
	cout<<"Element "<<num<<" is found at "<<i+1<<" position."<<endl;
	break;
	}
}

if(i==size)
{
cout<<"Number not found."<<endl;
}



return 0;
}
