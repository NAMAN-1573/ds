/*detect cycle in a linkedlist with order of n time 
Method 1: by adding an extra flag in each  node that will identify visited 
or unvisited node by  default the flag value will be zero for all non visited
node
we will start the traversing from first node and mark the flag to 1 
if we got a node with flaf one that means this node visited twice ,results 
the loop or cycle condition if we reached the last node and no nodes having 
flag 1 that means no cycle found  */
#include"linkedlisthead.h"
int cycle(Node *start){
    Node *slow=(start);
    Node *fast=(start);
    while(fast!=NULL){
           fast=fast->next;  
        if(fast == slow){
         return 1;
        }
        slow=slow->next;
        if(fast!=NULL){
            fast=fast->next;
          
        }
        
    }
    return 0;

}
int main(){
    Node *start=initialize();
    Node *node=start;
    insert_beg(&start,10);
    insert_beg(&start,20);
    insert_beg(&start,30);
    insert_beg(&start,40);
    insert_beg(&start,50);
    show(start);
    while(node->next!=NULL){
        node=node->next;
    }
    node->next=start;
    if(cycle(start)){
        printf("cycle");
    }
    else{
        printf("not cycle");
    }
    return 0;
}