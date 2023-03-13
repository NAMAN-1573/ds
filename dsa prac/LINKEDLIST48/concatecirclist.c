#include<Stdio.h>
typedef struct Node{
    int val;
    struct Node *next;
}Node ;
Node *createnode(int val){
    Node *temp=(Node *)malloc(sizeof(Node));
    temp->val=val;
    temp->next=NULL;
    return temp;

}
void show(Node *last){
    if(last==NULL){
        printf("\nEmpty circular list :");
        return ;
    }
    Node *curr=last->next;
    printf("\nNODES OF CIRCULAR LIST ARE:");
    do{
        printf("%d |%p\t",curr->val,curr->next);
        curr=curr->next;

    }while(curr!=last->next);
}
void insert_beg()




Node *concate(Node *last1,Node *last2){
    Node *temp=last1->next;
    last1->next=last2->next;
    last2->next=temp;
    return last2;
}
int main(){
    Node *last1=NULL;
    Node *last2=NULL;
    Node *last=NULL;
    insert_beg(&last1,50);
    insert_beg(&last1,47);
    insert_beg(&last1,30);
    insert_beg(&last1,17);
    insert_beg(&last1,17);
    insert_beg(&last2,17);
    insert_beg(&last2,17);
    insert_beg(&last2,17);
    insert_beg(&last2,17);
    insert_beg(&last2,17);
}