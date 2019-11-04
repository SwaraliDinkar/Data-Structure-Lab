#include<iostream>
using namespace std;

int main()
{

int size,a[20],i,j,temp,min;
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
min=i;
for(j=i+1;j<=size-1;j++)
 {
	if(a[min]>a[j])
	{
	  temp=a[j];
	  a[j]=a[min];
	  a[min]=temp;
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
