// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(20);
    temp = head;
    SinglyLinkedListNode* p = head;
    int c=0;int i=1;
    while(temp->next != NULL){
        c++;
        temp = temp->next;
    }
   // cout<<"count "<<c<<endl;
   if(position==0){
       SinglyLinkedListNode *h = head->next;
       delete head;
       head = h;
   }
   else{
while(i<position){
    p = p->next;
    i++;
}
 
//cout<<"p"<<p->data;
SinglyLinkedListNode *ty = p->next;
p->next = p->next->next;
delete ty;


    
    
   }
return head;

}
