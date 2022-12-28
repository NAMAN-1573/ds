#include"linkedlisthead.h"
int main(){
    Node *st1= initialize ();
    Node *st2= initialize ();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,10);
    insert_beg(&st2,15);
    insert_beg(&st2,20);
    insert_beg(&st2,25);
  
   Node *curr=st1;
   while(curr->next!=NULL){
    curr=curr->next;
   }
   curr->next=st2;
   printf("concatenated list :");
   show(st1);
    

    return 0;
}