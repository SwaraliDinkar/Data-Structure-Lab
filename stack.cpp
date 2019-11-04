#include<iostream>
using namespace std;

#define size 5
class stack
{
	int data;
       int top=-1;
	int s[5];

public:
	void push();
	void pop();
	bool isEmpty();
	bool isFull();
	void display();

};

bool stack::isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
	  
}

bool stack::isFull()
{
	if(top==size-1)
		return true;
	else
		return false;
	  
}

void stack::push()
{
	if(isEmpty())
	{
		cout<<"Stack is empty.";	
	}
	
	else
	{
		top=top+1;
		cout<<"Enter the element to be added::"<<endl;
		cin>>data;
		s[top]=data;
	}
}

void stack::pop()
{
if(isFull())
	{
		cout<<"Stack is full.";
	}

else
	{
		data=s[top];
		top=top-1;
		cout<<"Deleted item is"<<data;
	}

}


void stack::display()
{
if(isEmpty())
	{
	cout<<"Stack is empty.";	
	}
else
	{
		for(int i=top;i>=0;i--)
			{
			cout<<"\t"<<data;
			}
		}

}

int main()
{
stack st;

st.push();
st.pop();
st.display();
return 0;
}


