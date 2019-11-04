#include<iostream>
using namespace std;

int a[20][20],b[20][20],i,j,r,c;
void setValue(int a[20][20])
{
cout<<"Enter the rows and columns in matrix::"<<endl;
cin>>r>>c;

cout<<"Enter the elements in array::"<<endl;
for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      {
	  cin>>a[i][j];
      }	
  }

}
void dispValue(int a[20][20])
{
cout<<"The elements in array::"<<endl;
for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      {
	  cout<<"\t"<<a[i][j];
      }	
cout<<endl;
  }
}

void check()
{

int counter=0;

for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      {
	 if (a[i][j]==0)
	   {
		++counter;
	   }
      }	
  }
if(counter>(r*c)/2)
{
cout<<"\nMatrix is sparse matrix."<<endl;
}

else
{
cout<<"\nMatrix is not a sparse matrix."<<endl;
}

}

void dispSparse(int a[20][20])
{
  int size=0;

for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      {
	 if (a[i][j]!=0)
	   {
		++size;
	   }
      }	
  }
int k=0;
int sparse[3][size];
for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      {
	 if (a[i][j]!=0)
	   {
		sparse[0][k]=i;
		sparse[1][k]=j;
		sparse[2][k]=a[i][j];
		k++;
	   }
      }	
  }

for(i=0;i<3;i++)
  {
    for(j=0;j<size;j++)
     {
	cout<<"\t"<<sparse[i][j];
     }
cout<<endl;
  }


}

void fastTranspose()
{

}

int main()
{
setValue(a);
dispValue(a);
check();
cout<<"Sparse Matrix representation would be::"<<endl;
dispSparse(a);

return 0;
}
