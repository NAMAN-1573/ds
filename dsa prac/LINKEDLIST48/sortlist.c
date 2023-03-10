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
    Node *start= initialize ();

    insert_beg(&start,9);
    insert_beg(&start,7);
    insert_beg(&start,2);
    insert_beg(&start,5);
    insert_beg(&start,4);
    printf("BEFORE SORTING:\n");
    show(start);
sortlist(&start);
    printf("SORTEd LIST :\n");
    show(start);
   
return 0;
}