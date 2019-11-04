#include<iostream>
using namespace std;

int main(){

int arr[20];


	int n,i;
	cout<<"Enter the number of elements in array::"<<endl;
	cin>>n;
	
     for(i=0;i<n;i++)
	{
		cout<<"Enter the element at "<<i<<" index::"<<endl;
		cin>>arr[i];
	}


	cout<<"The elements in array are::"<<endl;
	
	 for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}

return 0;
}

