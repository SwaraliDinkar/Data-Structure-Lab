#include<iostream>
using namespace std;

int main()
{

int size,a[20],i,j,temp;
cout<<"Enter the size of array::"<<endl;
cin>>size;

cout<<"Enter the Elements in array::"<<endl;
for(i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"Array before sorting::"<<endl;
for(i=0;i<size;i++)
{
cout<<"\t"<<a[i];
}


for(i=0;i<size;i++)
{
for(j=0;j<=size-2-i;j++)
 {
	if(a[j]>a[j+1])
	{
	  temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	}

 }
}


cout<<"\nData after sorting is::"<<endl;

for(j=0;j<size;j++)
{
cout<<"\t"<<a[j];
}
return 0;
}
