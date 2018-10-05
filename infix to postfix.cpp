#include<iostream>
#include<stack>
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
	stack<char>s;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		  {
		  	ab[k]=a[i];
		    k++;
		  }
		else if(a[i]=='(')
		  s.push(a[i]);
		else if(a[i]==')')
		{
			while(s.top()!='(')
			{
				ab[k]=s.top();
				k++;
				s.pop();
			}
			s.pop();
		}
		else if(a[i]=='*'|| a[i]=='/'|| a[i]=='+'|| a[i]=='-'|| a[i]=='^')
		{
			while(prec(a[i]) < prec(s.top()))
			{
				ab[k]=s.top();
				k++;
				s.pop();
			}
			s.push(a[i]);
		}
	}
	cout<<"Postfix Expression :-"<<endl;
	for(int i=0;ab[i]!='\0';i++)
	    cout<<ab[i];
	
}
