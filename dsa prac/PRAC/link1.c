#include<stdio.h>
#include<stdlib.h>
struct list{
    int val;
    struct list *next;

};
struct list *start;
void add_beg(){
    struct list *newnode=(struct list *)malloc(sizeof(struct list));
    printf("ENTER VALUE :");
    scanf("%d",&newnode->val);
    newnode->next = NULL;
    if(start!=NULL){
        newnode->next= start;

    }
    start =newnode;
    printf("NODE INSERTED AT BEGINNING");

}
void show(){
    if(start==NULL){
        printf("EMPTY LIST");
        return ;
    }
    printf("Nodes are :\n");
    struct list *temp=start;
    while(temp!=NULL){
    
        printf("%d|%p\t",temp->val,temp->next);
        temp=temp->next;
    }
}
int main(){
    
     add_beg();
     show();
      add_beg();
     show();
      add_beg();
     show();
      add_beg();
     show();
      add_beg();
     show();
      add_beg();
     show();
     


return 0;
}

