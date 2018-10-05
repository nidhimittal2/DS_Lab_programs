#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int prec(char ch)
{
	switch(ch)
	{
		case '+':
			return 1;
		case '-':
			return 1;
		case '*':
			return 2;
		case '/':
			return 2;
		case '^':
			return 3;
	}
	return -1;
}
int main()
{
	char a[100];
	char ab[100];
	int k=0;
	cout<<"enter the infix expression"<<endl;
	cin>>a;
	strrev(a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==')')
		   a[i]='(';
		else if(a[i]=='(')
		   a[i]=')';
	}
	stack<char>s;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		  {
		  	ab[k]=a[i];
		    k++;
		  }
		else
		  {
		  	s.push(a[i]);
		    if(s.top()==')')
		    {
		    	s.pop();
		    	char c=s.top();
		    	s.pop();
		    	if(s.top()=='*'|| s.top()=='/' ||s.top()=='-'|| s.top()=='+'|| s.top()=='^')
		    	{
		    		char b=s.top();
		    		s.pop();
		    		s.pop();
		    		ab[k]=c;
		    		k++;
		    		ab[k]=b;
		    		k++;
				}
				else
				{
				ab[k]=c;
				k++;
				s.pop();	
				}
		    	
			}
			else if(s.top()=='*'|| s.top()=='/' ||s.top()=='-'|| s.top()=='+'|| s.top()=='^')
			{
				char c=s.top();
				s.pop();
				if(s.top()=='*'|| s.top()=='/' ||s.top()=='-'|| s.top()=='+'|| s.top()=='^')
				{
					char b=s.top();
					 s.pop();
					if(prec(c)<prec(b))
					  {
					  	 ab[k]=b;
					  	 k++;
					     s.push(c);
					  }
					  else
					  {
					  	s.push(b);
					  	s.push(c);
					  }
				}
				else
				 s.push(c);
			}
		  }
		     
	}
	strrev(ab);
	for(int i=0;ab[i]!='\0';i++)
	   cout<<ab[i];
}
