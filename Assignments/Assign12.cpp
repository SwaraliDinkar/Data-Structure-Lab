#include<iostream>
using namespace std;
int size,a[20],i,j,temp;

void selectionSort()
{
for(i=0;i<size;i++)
   {
	  int min=i;
	  for(j=i+1;j<=size-1;j++)
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

}


void bubbleSort()
{
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
}

void display()
{

for(j=0;j<size;j++)
  {
    cout<<"\t"<<a[j];
  }
}

int main()
{

cout<<"Enter the size of array::"<<endl;
cin>>size;

cout<<"Enter the Elements in array::"<<endl;
for(i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"Array before sorting::"<<endl;
display();

selectionSort();

cout<<"\nData after sorting is::"<<endl;
display();



return 0;
}
