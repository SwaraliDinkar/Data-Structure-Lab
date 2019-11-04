#include<iostream>
using namespace std;


int main()
{
	int cn,bn,n,i,j,k;

cout<<"Enter the number of students in college"<<endl;
cin>>n;
int s[n];
for(i=0;i<n;i++)
{
   s[i]=i+1;
}

//Creating array of number of students playing cricket

cout<<"Enter the count of students playing cricket::"<<endl;
cin>>cn;
int a[cn];
if(cn<=n)
  {
      int r,j;
      i=0;
	while(i<cn)
	{
	 cout<<"Enter the roll number of students playing cricket::"<<endl;
	 cin>>r;
	 if(r>=1 && r<=n)
	 {
	      int flag=0;
	      for(j=0;j<i;j++)
	      {
		if(a[j]==r)
		    {
			flag=1;
			cout<<"Duplicate entry is not allowed";
			break;
		    }
	      }
      	     if(flag==0)
	      {
		    a[i]=r;
		    i++;
	      }

         }

	}
   }


//Creating array of number of students playing badminton

cout<<"Enter the number of students playing badminton::"<<endl;
	cin>>bn;
int b[bn];
if(bn<=n)
{
  int a[bn],r,j;
  i=0;
	while(i<bn)
	{
	 cout<<"Enter the roll number of students playing badminton::"<<endl;
	 cin>>r;
		if(r>=1 && r<=n)
		{
		int flag=0;
		for(j=0;j<i;j++)
		    {
			if(b[j]==r)
			    {
				flag=1;
				cout<<"Duplicate entry is not allowed";
				break;
			    }
		    }
			if(flag==0)
			   {
				b[i]=r;
				i++;
			   }

			}

	}
}

//SET OF STUDENTS PLAYING EITHER CRICKET OR BADMINTON OR BOTH

cout<<"\nSET OF STUDENTS PLAYING EITHER CRICKET OR BADMINTON OR BOTH::"<<endl;
for(i=0;i<cn;i++)
{
  cout<<"\t"<<a[i];
}

for(j=0;j<bn;j++)
{
int flag=0;
 for(i=0;i<cn;i++)
 {
  if(b[j]==a[i])
    {
      flag=1;
	break;
    }
 }
 if(flag==0)
  {
   cout<<"\t"<<b[j]; 
  }
}

//SET OF STUDENTS PLAYING BOTH CRICKET AND BADMINTON

cout<<"\nSET OF STUDENTS PLAYING BOTH CRICKET AND BADMINTON::"<<endl;

for(i=0;i<cn;i++)
{
  for(j=0;j<bn;j++)
   {
	if(b[j]==a[i])
         {
		cout<<"\t"<<b[j];
         }
   }
}

//SET OF STUDENTS WHO PLAY ONLY CRICKET

cout<<"\nSET OF STUDENTS WHO PLAY ONLY CRICKET"<<endl;
for(j=0;j<cn;j++)
{
  int flag=0;
  for(i=0;i<bn;i++)
   {
	if(a[j]==b[i])
         {
		flag=1;
		break;
         }
   }
 if(flag==0)
  {
    cout<<"\t"<<a[j];
  }
}

//SET OF STUDENTS PLAYING ONLY BADMINTON
cout<<"\nSET OF STUDENTS PLAYING ONLY BADMINTON::"<<endl;

for(i=0;i<bn;i++)
{
int flag=0;
  for(j=0;j<cn;j++)
   {
	if(b[i]==a[j])
         {
		flag=1;
		break;
         }
   }
if(flag==0)
  {
    cout<<"\t"<<b[i];
  }
}

//SET OF STUDENTS WHO NEITHER PLAY CRICKET NOR BADMINTON
cout<<"\nSET OF STUDENTS WHO NEITHER PLAY CRICKET NOR BADMINTON::"<<endl;

for(i=0;i<n;i++)
{
  int flag=0;
  for(j=0;j<bn;j++)
    {
      if(s[i]==b[j])
 	{
	   flag=1;
	   break;
	}
    }
  for(j=0;j<cn;j++)
    {
      if(s[i]==a[j])
 	{
	   flag=1;
	   break;
	}
    }
  if(flag==0)
    {
      cout<<"\t"<<s[i];
    }
}





return 0;
}


