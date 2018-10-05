#include<iostream>
using namespace std;
int main()
{
	int i,a[100],mid,low,high,value,n;
	cout<<"enter the size of array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the value to be searched\n";
	cin>>value;
	for(i=0;i<n;i++)
	{
		if(a[i]==value)
		{
		cout<<i;
		break;	
		}
		 
	}
}
