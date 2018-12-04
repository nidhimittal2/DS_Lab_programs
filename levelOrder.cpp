#include "queue"

    void levelOrder(Node * root) {
        queue <Node *> q;
        Node *t = root;
        if(root == NULL){
            return;
        }
        q.push(t);
        while(!q.empty()){
    
         cout<<t->data<<" ";
         if(t->left!=NULL){
             q.push(t->left);
         }
         if(t->right!=NULL){
             q.push(t->right);
         }
        
         
         q.pop();
         t = q.front();
    }
    }

}; //End of Solution
