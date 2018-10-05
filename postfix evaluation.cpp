#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
class stack
{
	int a[20];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int num)
		{
			a[++top]=num;
		}
		int pop()
		{
			return a[top--];
		}
		void evaluate_postfix(char exp[20],int l)
		{
			int n1,n2,n3,num;
			for(int i=0;i<l;)
			{
				if(isdigit(exp[i]))
				{
					num=exp[i]-'0';
					push(num);
				}
				else if(exp[i]==' ')
				{
					
				}
				else
				{
					n1=pop();
					n2=pop();
					switch(exp[i])
					{
						case '+':
							{
								n3=n1+n2;
								break;
							}
						case '-':
							{
								n3=n2-n1;
								break;	
							}
						case '*':
							{
								n3=n1*n2;
								break;	
							}
						case '/':
							{
								n3=n2/n1;
								break;	
							}
						case '^':
							{
								n3=pow(n2,n1);
								break;	
							}
					}
					push(n3);
				}
				i++;
			}
			cout<<"The result of "<<exp<<" is "<<pop();
		}
};
int main()
{
	char exp[20];
	char *e;
	cout<<"Enter postfix expression"<<endl;
	cin>>exp;
	int l=strlen(exp);
	stack obj;
	obj.evaluate_postfix(exp,l);
	return 0;
}

