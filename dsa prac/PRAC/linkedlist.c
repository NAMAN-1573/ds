#include<stdio.h>
#include<stdlib.h>
struct list {
     int val;
     struct list * next;

};
void delete_list(){
    
    if(start == NULL)
    {
        printf("EMPTY");
        return ;
    }
    if(start->next==NULL){
        start=NULL;
        return ;
    }
    temp=start->next;
    prev=start;
    while(temp->next!=NULL){
        temp=temp->next;
        prev=prev->next;
    }
    prev->next=NULL;
}
int main(){

    struct list *node=(struct list *)malloc(sizeof(struct list));
    node->val=25;
    node->next=NULL;
    printf("%d\n",node->val);
    
    printf("%p\n",node->next);
    printf("%p\n",node);
    free(node);
    printf("%p\n",node);
    printf("%d\n",node->val);
    printf("%p\n",node->next);
return 0;

}
// traverse link list from start and push element to stack till the last node having null value
// the stack is a static memory so that we have to create an empty stack for a fixed no of nodes
// the time complexity will order of n for both cases
/*delete by node number */
/*free method 
it releases allocated memeory (by malloc/DMA)
the released memory can be used by other methods 
by defaults o/s freed all memory taken by any program after the termination of program */
void delete_nodeno(int pos){
    struct list * node;
    if(start==NULL)
    {
        printf("empty list");
        return ;
    }
    if(pos==1){
        node=start;
        start=start->next;
    }
    else {
        int count=2;
    node=start->next;
    struct *list prev =start;
    while(node->next!NULL){
        if(pos==count){
            prev->next=node->next;
        }
        else{
        count++;
        node=nde->next;
        prev=prev->next;
    }
    }
}}