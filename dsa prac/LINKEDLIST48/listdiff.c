#include"linkedlisthead.h"

void helper(Node **start, Node * newNode){
if(newNode->val<(*start)->val){
    newNode->next=*start;
    *start=newNode;
}
else{
    Node *current =(*start)->next;
    Node *prev = * start;
    while(current != NULL){
        if(current->val>newNode->val){
            break;
        }
        current =current->next;
        prev=prev->next;

    }
    newNode->next=prev->next;
    prev->next=newNode;
}   
}
void sortlist(Node ** start){
    Node *start2=*start;
    *start=(*start)->next;
    start2->next=NULL;
    while(*start!=NULL){
        Node * temp=*start;
        *start=(*start)->next;
        temp->next=NULL;
        helper(&start2,temp);
    }
    *start=start2;
}


int main(){
    Node *st1= initialize ();
    Node *st2= initialize ();
Node *st3=initialize ();
   insert_beg(&st1,50);
   insert_beg(&st1,90);
   insert_beg(&st1,40);
   insert_beg(&st1,10);
   insert_beg(&st2,40);
   insert_beg(&st2,30);
   insert_beg(&st2,20);
   insert_beg(&st2,10);
   
   sortlist(&st1);
   
   sortlist(&st2);

Node *t1=st1;
Node *t2=st2;
  while(t1!=NULL && t2!=NULL){
    if(t1->val<t2->val){
        insert_last(&st3,t1->val);
        t1=t1->next;
        
    }
    else if(t1->val==t2->val){
        insert_last(&st3,t1->val);
        t1=t1->next;
        t2=t2->next;
    }
    else{
       
        t2=t2->next;
    }

  }
  show(st3);
   
return 0;
}
