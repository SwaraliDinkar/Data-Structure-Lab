#include<iostream>
using namespace std;

int main()
{

int first,last,middle,size,num,a[20],i,j,temp;
cout<<"Enter the size of array::"<<endl;
cin>>size;

cout<<"Enter the elements in array::"<<endl;
for(int i=0;i<size;i++)
{
cin>>a[i];
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




cout<<"\nEnter the number to be searched::"<<endl;
cin>>num;

first=0;
last=size-1;

middle=(first+last)/2;

for(int i=0;i<size;i++)
{

if(a[middle]==num)
	{
	cout<<"Element "<<num<<" is found at "<<middle+1<<" position."<<endl;
	break;
	}
else
{
	if(a[middle]<num)
		{
		first=middle+1;
		}

	else
		{
		last=middle-1;
		}
	middle=(first+last)/2;

}
}

if(first>last)
{
cout<<"Element is not found."<<endl;
}

return 0;

}
