#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};
struct node *head = NULL;

void insert_end(int e){
  struct node *temp = new node;
  temp->data = e;
  temp->next = NULL;
if(head==NULL){
  head = temp;
}
else{
  node *t = head;
  while(t->next!=NULL){
    t = t->next;
  }
  t->next = temp;

}
}
void insert_front(int e){
  struct node *temp = new node;
  temp->data = e;
  temp->next = NULL;
  if(head == NULL){
    head = temp;
  }
  else{
    node *t = head;
    temp->next = t;
    head = temp;

  }
}
void insert_middle(int ind,int data){

  int len =0,i=1;node *t = head;
  while(t!=NULL){
    len++;
    t=t->next;
  }
  struct node *temp = new node;
  temp->data = data; temp->next=NULL;
  node *p = head;
  while(i<ind){
    p = p->next;
    i++;
  }
  temp->next = p->next;
  p->next = temp;
}
void del_front(){
  node *t = head;
  head = t->next;
  delete t;

}
void del_end(){
  node *t = head;
  while(t->next!=NULL){
    t= t->next;
  }
  node *temp = t->next->next;
  t->next = NULL;
  delete temp;

}
void print(){
node *node1 = head;
while(node1 !=NULL){
  cout<<node1->data<<endl;
  node1=node1->next;
}


}
int main(){
  cout<<"Enter no of elements to insert"<<endl;
int t,e,ind,el;
cin>>t;
while(t--){
  cin>>e;
  insert_front(e);

}
cout<<"enter index at which you want to insert starting from 0 and element"<<endl;
cin>>ind>>el;
insert_middle(ind,el);
del_front();

print();
return 0;



}
