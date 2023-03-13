#include"polyhead.h"
Node *polymul(Node *list1,Node *list2){
    Node *result=NULL;
    while(list1!=  NULL){
        for(Node *l2=list2;l2!=NULL;l2=l2->next){
            int power=list1->power+list2->power;
            int coef=list1->coef+list2->coef;
        }
        list1=list1->next;
    }
    Node *curr=result;
    while(curr!=NULL){
        for(Node *p=curr;p->next!=NULL;p=p->next){
            if(p->next->power==curr->power){
                Node *temp=p->next;
                curr->coef+=temp->coef;
                p->next=temp->next;
                free(temp);
            }

        }
        curr=curr->next;
    }
    return result;
}
int main(){
    Node *poly1=initialize();
    Node *poly2=initialize();
    insert_last(&poly1,2,5);
    insert_last(&poly1,4,2);
    insert_last(&poly1,-3,1);
    insert_last(&poly2,-3,3);
    insert_last(&poly2,-3,2);
    insert_last(&poly2,-3,1);
   Node *poly3= polymul(poly1,poly2);
   show(poly1);
   show(poly2);
   show(poly3);

    return 0;
}