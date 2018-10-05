#include<iostream>
using namespace std;
int main()
{
	int i,j,temp,n,a[100],mid,low,high,value,flag=0,b;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the elements of array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

 for(i=0;i<n-1;i++)
 {
 	for(j=0;j<n-1-i;j++)
 	{
 		if(a[j]>a[j+1])
 		{
 			temp=a[j];
 			a[j]=a[j+1];
 			a[j+1]=temp;
		 }
	 }
 } 
 	cout<<"SORTED ARRAY:-\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;	 
 	cout<<"enter the value to be searched\n";
	cin>>value;
 	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(value==a[mid])
		{
		     b=mid;
		    
			 flag=1;	
		     break;
		}
		else if(value>a[mid])
		{
			low=mid+1;
		}
		else
			high=mid-1;
	}

	if(flag==0)
	{
		cout<<"element not found in the above array";
	}
	else
	 cout<<"element found at "<<b<<" position in the above array";
	
	
}
