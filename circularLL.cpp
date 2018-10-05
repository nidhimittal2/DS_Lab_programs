#include<iostream>
using namespace std;
struct node
{
    int data;
    node* prev;
    node* next;
};
struct node *start=NULL;
struct node *addBegin(struct node *start,int v)
{
    node* temp=new node();
    temp->data=v;
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
    {
        temp->data=v;
        temp->next=temp;
        temp->prev=temp;
        start=temp;
    }

     struct node *last;
     temp->data=v;
     last=start->prev;
     last->next=temp;
     temp->prev=last;
     temp->next=start;
     start=temp;
    return start;
}

struct node *addLast(struct node *start,int v)
{
    node* temp=new node();
    temp->data=v;
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
    {
        temp->data=v;
        temp->next=temp;
        temp->prev=temp;
        start=temp;
    }
    struct node* last;
    last =start->prev;
    last->next=temp;
    start->prev=temp;
    temp->prev=last;
    temp->next=start;

    return start;
};
struct node *addMid(struct head,int v)
{

};
void display(struct node *start)
{
    struct node *t;
    t=start;
    cout<<t->data;
    t=t->next;
    while(t!=start)
    {
        cout<<t->data;
        t=t->next;
    }
}
int main()
{
    int v;
    for(int i=0;i<=5;i++)
    {
    cin>>v;
    start = addBegin(start,v);
    }
    display(start);
}
