#include<iostream>
using namespace std;
struct queue
{
	int data;
	queue *next;
}*save;
struct queue *front=NULL;
struct queue *rear=NULL;
void push()
{
	int i;
	cout<<"enter the data : ";
	cin>>i;
	queue *temp=new queue;
	temp->data=i;
	temp->next=NULL;
	if(front==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=rear->next;
	}
}
void pop()
{
	queue *temp;
	 if(front==NULL && rear==NULL)
        {
            cout<<"\nQueue is Empty:\n";
        }
     else
        {
            temp=front;
	        front=temp->next;
	        delete temp;	
		}	
}
void pip()
		{
			if(front==NULL)
        {
    	    cout<<"\nQueue is Empty:\n";
    	     exit(0);
	    }
	    else
	    {
	     cout<<"Queue : ";
	     queue *temp;
	     temp=front;
       	while(temp!=NULL)
	    {
		cout<<temp->data<<"->";
		temp=temp->next;	
		}
	    
     	}
	cout<<endl; 
		}
int main()
{
	int c;
		cout<<"1.Push \n 2.Pop \n 3.Pip \n 4.Exit"<<endl;
	while(1)
	{
		cout<<"enter the choice : ";
		cin>>c;
		switch(c)
		{
			case 1:
				{
				    push();
					break;	
				}
			case 2:
				{
					pop();
					break;	
				}
			case 3:
				{ 
					pip();
					break;
				}
			case 4:
				{
				   exit(0);		
				}
		}
	}
	return 0;
}
