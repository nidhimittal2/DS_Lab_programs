#include <bits/stdc++.h>

using namespace std;

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

class DoublyLinkedList {
    public:
        DoublyLinkedListNode *head;
        DoublyLinkedListNode *tail;

        DoublyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            DoublyLinkedListNode* node = new DoublyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
                node->prev = this->tail;
            }

            this->tail = node;
        }
};

void print_doubly_linked_list(DoublyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_doubly_linked_list(DoublyLinkedListNode* node) {
    while (node) {
        DoublyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}
 
// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *temp = new DoublyLinkedListNode(data);
       if(head==NULL){
              head = NULL;
       }
       else{
       DoublyLinkedListNode *t = head;
       if(head->data >data){
           temp->next = head;
           temp->prev = NULL;

           head = temp;
           
       }
       else{
           DoublyLinkedListNode *t1 = head;
           while(t1->next!=NULL){
               t1 = t1->next;
           }
           if(t1->data < data){
               t1->next = temp;
               temp->prev = t1;
           }
           else{
       while(t->next->data < data && t->next->next!=NULL){
           t = t->next;
       }
    
       temp->next = t->next;
       t->next = temp;
       temp->prev = t;
       }
       }
       }
return head;
}

int main()
