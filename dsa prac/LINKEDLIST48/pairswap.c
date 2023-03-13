#include"linkedlisthead.h"
void pairswap(Node **st1){
Node *curr=(*st1);
Node *prev=NULL;
while(curr!=NULL && curr->next!=NULL){

  Node *sn=curr->next;
    curr->next=sn->next;
   sn->next=curr;

 if (prev == NULL) {
            *st1 = sn;
        }
        else {
            prev->next = sn;
        }
 
        prev = curr;
        curr = curr->next;
    }
}

int main(){
    Node *st1= initialize ();
    
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,10);
    show(st1);
    pairswap(&st1);
    show(st1);
    return 0;
}