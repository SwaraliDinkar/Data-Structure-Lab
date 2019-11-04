#include<iostream>
using namespace std;

int a[20][20],b[20][20],r,c,i,j;
void setValue(int a[20][20])
{

cout<<"Enter the rows and column::"<<endl;
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

cout<<"\nElements in array are::"<<endl;

for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
	{
	  cout<<"\t"<<a[i][j];
	}
cout<<endl;
  }
}


bool upperTriangular()
{
  bool flag=true;
  for(i=1;i<r;i++)
  {
     for(j=0;j<i;i++)
     {
	  if(a[i][j]!=0)
         {
		flag=false;	
		break;
         }
      }
   }
  return flag;
}

void sumDiagonal()
{
int sum=0;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
	if(i==j)
	{
 	  sum+=a[i][j];
	}
  }
}
cout<<"\nSummation of diagonal elements is::"<<endl;
cout<<sum;
}

void Transpose()
{
  int t[20][20];
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
	t[j][i]=a[i][j];
  }

}
dispValue(t);

}

void Add(int a[20][20],int b[20][20])
{
int add[20][20];
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
	add[i][j]=a[i][j]+b[i][j];
  }

}
dispValue(add);

} 
void Sub(int a[20][20],int b[20][20])
{
int sub[20][20];
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
	sub[i][j]=a[i][j]-b[i][j];
  }

}
dispValue(sub);

} 

void Mul()
{
int r1,c1,r2,c2,k,mul[20][20];
cout<<"Enter the row and column for first matrix::"<<endl;
cin>>r1>>c1;
cout<<"Enter the row and column for second matrix::"<<endl;
cin>>r2>>c2;
if(c1==r1)
{
cout<<"Enter the elements in first array::"<<endl;

for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
	{
	  cin>>a[i][j];
	}
  }
cout<<"Enter the elements in second array::"<<endl;

for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
	{
	  cin>>b[i][j];
	}
  }

for(i=0;i<r1;i++)
  for(j=0;j<c2;j++)
    for(k=0;k<c1;k++)

	mul[i][j]+=a[i][k]*b[k][j];


cout<<"Multiplication is::"<<endl;
dispValue(mul);
}
}

void saddle(int a[20][20])
{
int k,min_row,col_index;

for(i=0;i<r;i++)
{
   int min_row=a[i][0],col_index=0;
  for(j=1;j<c;j++)
{
     if(min_row>a[i][j])
      {
	min_row=a[i][j];
	col_index=j;
      }
}
	for(k=0;k<c;k++)
	{
	    if(min_row<a[k][col_index])
		break;
	}
	   if(k==r)
	{
	cout<<"\nValue of saddle point is::"<<endl;
	cout<<min_row;
	}
}

}


int main()
{
setValue(a);
dispValue(a);
upperTriangular();
	if(upperTriangular())
		{
			cout<<"Matrix is upper triangular."<<endl;
		}
	else
		{
			cout<<"Matrix is not upper triangular."<<endl;
		}

sumDiagonal();
saddle(a);
cout<<"\nAfter transpose::"<<endl;
Transpose();
cout<<"\nFor addition enter first and second matrix::"<<endl;
setValue(a);
setValue(b);
cout<<"\nAfter Addition"<<endl;
Add(a,b);
cout<<"\nAfter subtraction::"<<endl;
Sub(a,b);
cout<<"\nFor multiplication::"<<endl;
Mul();
return 0;
}
