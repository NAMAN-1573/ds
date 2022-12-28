#include"linkedlisthead.h"
int main(){
    Node *st1= initialize ();
    Node *st2= initialize ();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    int val;
    printf("Enter the value you want to search:");
    scanf("%d",&val);
    Node *curr=st1;
    while(curr!= NULL){
        if(curr->val == val){
            printf("\nFOUND");
            printf("\n%d | %p",curr->val,curr->next);
            return 0 ;
        }
       
          curr=curr->next;
    }
    printf("\nNOT FOUND");
     return 0;
}