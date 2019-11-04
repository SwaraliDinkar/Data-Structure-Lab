#include<iostream>
using namespace std;

int main()
{
int a[20],i,j,min,temp,size;
cout<<"Enter the size of an array::"<<endl;
cin>>size;

cout<<"Enter the elements in an array::"<<endl;
for(i=0;i<size;i++)
{
  cin>>a[i];
}

cout<<"Array before sorting is::"<<endl;
for(i=0;i<size;i++)
{
  cout<<"\t"<<a[i];
}

for(i=0;i<size;i++)
{
    min=i;
  for(j=i+1;j<size-1;j++)
   {
	if(a[min]>a[j])
	  {
	   min=j;
	  }
     
    }
if(min!=i)
{
          temp=a[min];
          a[min]=a[i];
	   a[i]=temp;
}
}

cout<<"\nArray after sorting is::"<<endl;
for(i=0;i<size;i++)
{
  cout<<"\t"<<a[i];
}

return 0;
}
