//program for even or odd information
#include"linkedlisthead.h"
int main(){
    Node *st1= initialize ();
    Node *st2= initialize ();
    insert_beg(&st1,50);
    insert_beg(&st1,47);
    insert_beg(&st1,30);
    insert_beg(&st1,17);
   
   Node *curr=st1;
   int c1=0,c2=0;
   while(curr!=NULL){
    if(curr->val %2 ==0){
        c1++;
       
    }
    else{
        c2++;
        
    }
    curr=curr->next;
   }
   printf("\nNO OF EVEN NODES:%d",c1);
   printf("\nNO OF ODD NODES:%d",c2);
 

 
}