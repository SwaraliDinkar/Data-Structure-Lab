#include<iostream>
using namespace std;

class Search
{
  int roll[20];
  public:
	int total,number;
    	void setValue();
	void sort();
	void linear();
	void sentinel();
	void Binary();
	void Fibonacci(int,int,int,int);
	void generate_fibonacci_numbers(int k);
	
};

void Search::setValue()
{
int i;
cout<<"Enter the number of students who attended session::"<<endl;
cin>>total;
cout<<"Enter the roll number of students::"<<endl;
for(i=0;i<total;i++) 
{
cin>>roll[i];
}
cout<<"Enter the number you want to search::"<<endl;
cin>>number;

}

void Search::sort()
{
int i,j,min,temp;
for(i=0;i<total;i++)
{
  for(j=i+1;j<total;j++)
    {
	min=i;
	if(roll[min]>roll[j])
	{
	   min=j;
	}
     }
if(min!=i)
  {
    temp=roll[i];
    roll[i]=roll[min];
    roll[min]=temp;
  }
}

}


void Search::linear()
{
int i;

for(i=0;i<total;i++)
  {
    if(roll[i]==number)
      {
	break;
	}
  }
if(i<total)
{
cout<<"The number is found at "<<i+1<<" index";
}

else
{
cout<<"The student did not attend the sessions.";
}

}

void Search::sentinel()
{
int i;

for(i=0;i<total;i++)
  {
roll[total-1]=number;
    if(roll[i]==number)
     {
	break;
     }
  }

if(i<total)
{
cout<<"The number is found at "<<i+1<<" index"<<endl;
}
else
{
cout<<"The student did not attend the lecture"<<endl;
}

}

void Search::Binary()
{
int first,last,middle;
middle=0;
first=0;
last=total-1;
middle=(first+last)/2;

while(first<=last)
  {
    if(roll[number]==middle)
	break;
    else
     {
	if(roll[number]<middle)
	 last=middle-1;
	else
	 first=middle+1;
	 middle=(first+last)/2;
     }

}
if(first<total)
{
cout<<"The number is found at "<<middle+1<<" index"<<endl;
}
else
{
cout<<"The student did not attend the lecture"<<endl;
}	   

}

/*
int Search::generate_fibonacci_numbers(int k)
{
if(k==0) return 0;
if (k==1) return 1;
else
return(generate_fibonicci_number(k+2)+generate_fibonacci_number(k+1));
}

int Search::fibonacci(int x,int p,int q,int mid)
{
  int temp;
*/

int main()
{
Search s;
int choice;
char x;
do 
{
cout<<"1.Linear serach"<<endl;
cout<<"2.Binary search"<<endl;
cout<<"3.Sentinel search"<<endl;
cout<<"4.Fibonacci search"<<endl;
cout<<"5.Exit."<<endl;
cout<<"Enter your choice::"<<endl;
cin>>choice;

switch(choice)
{

case 1:
	s.setValue();
	s.sort();
	s.linear();
	break;

case 2:
	s.setValue();
	s.sort();
	s.Binary();
	break;

case 3:
	s.setValue();
	//s.sort();
	s.sentinel();
	break;
/*
case 4:
	s.setValue();
	s.fibonacci();
	break;
*/
case 5:
	exit(0);

default:
	cout<<"Invalid option."<<endl;
}
cout<<"Do you want to continue::(y/n)"<<endl;
cin>>x;
}while(x=='y');

return 0;
}

 
	
