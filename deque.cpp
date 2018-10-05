#include<iostream>
using namespace std;
class Deque
{
   public:
   int dq[100]; 
   int size;
   static int front,rear;
   Deque()
   {
	cout<<"Enter the size : ";
	cin>>size;
   }
   void insert_front(int);
   void insert_rear(int);
   void delete_front();
   void delete_rear();
   void display();	
};
void Deque::insert_front(int data)
{
  if(front==-1)
  {
  	front=0;
  	rear=0;
  }
  else if(front==0)
     front=size-1;
  else
  {
  	if(front==0 && rear==size-1)
  	  cout<<" Queue is overflow"<<endl;
  	else
  	{
  	  front--;
	}
  }
  dq[front]=data;
}
void Deque::insert_rear(int data)
{
  if(front==-1)
  {
  	front=rear=0; 
  	dq[rear]=data;
  }
  else
  {
  	if(rear==size-1)
  	  cout<<" Queue is overflow"<<endl;
  	  else
  	  {
  	  	rear++;
     	dq[rear]=data;
	  }
  	
  }  
}
void Deque::delete_front()
{
  if(front==-1 || rear==-1)
     cout<<"Queue is underflow"<<endl;
  else
  {
  	cout<<dq[front]<<" is popped"<<endl;
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	front++;
  }	
}
void Deque::delete_rear()
{
   if(front==-1 || rear==-1)
     cout<<"Queue is underflow"<<endl;
   else
   {
   	cout<<dq[rear]<<" is popped"<<endl;
   	if(rear==0)
   	{
   		front=rear=-1;
	}
	else 
	rear--;
   }	
}
void Deque::display()
{
  if(front==-1 ||rear==-1)
	 cout<<"Queue is underflow"<<endl;
  else
	{
	   int i=front;
	   while(i!=rear)
	   {
	   	cout<<dq[i]<<" ";
	   	i=((i+1)%size);
	   }
	   cout<<dq[i]<<endl;
	}
  
}
int Deque::front=-1;
int Deque::rear=-1;
int main()
{
	Deque d;
	int choice,data;
	cout<<"1.Insert at front\n2.Insert at rear\n3.Delete from front\n4.Delete from rear\n5.Display\n6.Exit\n";
	while(1)
	{
		cout<<"Enter the choice : ";
		cin>>choice;
		switch(choice)
		{
		  case 1:
		  {
		  	cout<<"Enter the data : ";
		  	cin>>data;
		  	d.insert_front(data);
		  	break;
		  }	
		  case 2:
		  {
		  	cout<<"Enter the data : ";
		  	cin>>data;
		  	d.insert_rear(data);
		  	break;
		  }	
		  case 3:
		  {
		  	d.delete_front();
		  	break;
		  }	
		  case 4:
		  {
		  	d.delete_front();
		  	break;
		  }	
		  case 5:
		  {
		  	d.display();
		  	break;
		  }	
		  case 6:
		  {
		  	exit(0);
		  }	
		  
		}
	}
}

