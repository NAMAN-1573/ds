/* to reverse a linked list in order of n we have two options:
 using stack : with the help of stack we can reverse the linked list with extra space of order of n 
 in second method we need only three nodes so it is more efficient in the 
 comparision of stack method */
 #include"linkedlisthead.h"
 void reverse(Node **st1){
    Node *curr=*st1;
    Node *prev=NULL;
    Node *Next=NULL;
    while(curr!=NULL){
        Next= curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    (*st1)=prev;
    
 }
int main(){
    Node *st1= initialize ();
   

    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,10);
    show(st1);
    reverse(&st1);
    show(st1);


   return 0;
}