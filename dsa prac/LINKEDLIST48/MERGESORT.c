#include"linkedlisthead.h"
void split(Node *start,Node **list1,Node **list2){
    Node *fast;
    Node *slow;
    slow=start;
    fast=start->next;
    while(fast != NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            
              }}
              *list1=start;
              *list2=slow->next;
              slow->next=NULL;
    
}
Node *MERGESORT(Node * list1,Node *list2){
    Node *result;
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    if(list1->val<=list2->val){
        result=list1;
        result->next=MERGESORT(list1->next,list2);

    }
    else{
        result=list2;
        result->next=MERGESORT(list1,list2->next);
    }
    return result;
}
void merge(Node **start)
{
    if(start==NULL || (*start)->next==NULL){
            return;
    }
    Node *list1;
    Node *list2;
    split(*start,&list1,&list2);
    merge(&list1);
   merge(&list2);
   *start=MERGESORT(list1,list2);

}
int main(){
    Node *start= initialize ();
insert_beg(&start,6);
    insert_beg(&start,7);
    insert_beg(&start,9);
    insert_beg(&start,4);
    insert_beg(&start,5);
    insert_beg(&start,1);
    printf("BEFORE SORTING:\n");
    show(start);
merge(&start);
    printf("SORTEd LIST :\n");
    show(start);
   
return 0;
}