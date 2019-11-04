#include<iostream>
using namespace std;

#define max 50

char stack[50];
int top=-1;

/*----------------------------------------stack functions----------------------------------------*/

bool isEmpty()
{
if(top==-1)  return 1;
else return 0;
}

bool isFull()
{
if(top==max-1) return 1;
else return 0;
}

void push(char p)
{
if(isFull())
{
cout<<"Stack is full."<<endl;
}
else
{
++top;    //or top=top+1;
stack[top]=p;
}
}

void pop()
{
if(isEmpty())
{
cout<<"Stack is empty."<<endl;
}
else
{
top--;
}
}

void check(char p)
{
if(stack[top]==p)
{
pop();
}
else
{
cout<<"Equation is not well parenthised."<<endl;
exit(0);
}
}

class exp
{

string text;

public:
	void input();
	void add_in_stack();

};
void exp::input()
{

cout<<"Enter the expression::"<<endl;
cin>>text;

}

void exp::add_in_stack()
{

int i=0;
while(text[i]!='\0')
   {
	if(text[i]=='(')
	push('(');
	else if(text[i]=='[')
	push('[');
	else if(text[i]=='{')
	push('{');
//else{}
	 if(text[i]==')')
	check('(');
	else if(text[i]==']')
	check('[');
	else if(text[i]=='}')
	check('{');
//else{}
i++;

	}

	if(isEmpty())
{
	cout<<"The equation is well parenthised"<<endl;}
	else
	{cout<<"The equation is not well parenthised"<<endl;}
	
}

int main()
{
exp e;
e.input();
e.add_in_stack();
return 0;
}






