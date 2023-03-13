// binary search implementation is same in terms of time complexity .
//in array we  can find middle elemet in constant time because we hav index value assosciated with array
//but in link list we have to find middle elemet in order of n time with the help of two pointer 
//approach thats why time is order of n
#include"linkedlisthead.h"
Node *middle(Node *start,Node *last){
    Node * slow=start;
    Node *fast=start->next;
    while(fast!=last){
        fast=fast->next;
        if(fast!=last){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;

}
Node * binarsearch(Node *start,int val){
    Node * last =NULL;
    do{
        Node *mid =middle(start,last);
        if(mid==NULL)
           return NULL;
        if(mid->val==val)
           return mid;
        if(mid->val<val){
           start=mid->next;
        }
        else{
           last=mid;
                   }
    
    }while(last!=NULL || start!=last);
    
return NULL;
}
int main(){
    int val;
    printf("ENTER THE VALUE :");
    scanf("%d",&val);
    Node *st1= initialize ();

    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,10);
    binarsearch(st1,val);

}