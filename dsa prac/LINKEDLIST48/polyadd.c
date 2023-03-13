#include"polyhead.h"
Node * addpoly(Node *list1,Node *list2){
Node *result=NULL;
while(list1!=NULL && list2!=NULL){
    if(list1->power>list2->power){
        insert_last(&result,list1->coef,list1->power);
        list1=list1->next;
    }
    else if(list2->power>list1->power){
        insert_last(&result,list2->coef,list2->power);
        list2=list2->next;
    }
     else{
        int sum=list1->coef+list2->coef;

        insert_last(&result,sum,list1->power);
        list1=list1->next;
        list2=list2->next;
    }
    
}
while(list1!=NULL || list2!=NULL){
     if(list1!=NULL){
        insert_last(&result,list1->coef,list1->power);
        list1=list1->next;
    }
    if(list2!=NULL){
        insert_last(&result,list2->coef,list2->power);
        list2=list2->next;
    }

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
   Node *poly3= addpoly(poly1,poly2);
   show(poly1);
   show(poly2);
   show(poly3);

    return 0;
}