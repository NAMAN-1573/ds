#include<stdio.h>
#define size 10

struct stack {
    int data[size];
    int top;
};
int isempty(struct stack s){
    return(s.top==-1);
}
void peep(struct stack st)
{
    if(isempty(st)){
    printf("\nTop item =%d\n",st.data[st.top]);
}}

struct stack  init(struct stack s){
    s.top=-1;
    return s;

}
struct stack push(struct stack s)
{
    int item;
    if(s.top==size -1){
        printf("Stack is overflow\n");

    }
    else{
        s.top=s.top+1;
        printf("Enter element:\n");
        scanf("%d",&item);
        s.data[s.top]=item;
        printf("element inserted\n");
    }
    return s;
}
struct stack  show(struct stack s){
    int i ;
    if(s.top==-1){
        printf("Stack empty");
    }
    else{
        printf("Stack items:\n");
        for(i=s.top;i>=0;i--){
            printf("%d\n",s.data[i]);
            
        }
    }

}
struct stack pop(struct stack s){
    int item;
    if(s.top==-1){
        printf("STACK EMPTY");
    }
    else{
        item =s.data[s.top];
        s.top=s.top-1;
        printf(" the pop item is :%d\n",item);
        
        return s;
    }

}
/*typedef struct {
    int data[10];
    int top;

}stack;*/
int menu(){
    int choice;
    printf("\n1.............Push\n");
    printf("\n2.............Pop\n");
    printf("\n3.............Peep\n");
    printf("\n4.............Show\n");
    printf("\n5.............Exit\n");
  printf("ENTER YOUR CHOICE :");
  scanf("%d",&choice);
  return choice;
}
int main(){
    struct stack s;//obejct
    int choice ;
   s= init(s);
   do{
    choice=menu();
    switch (choice){
    case 1:
    s=push(s);
    break;
     case 2:
    s=pop(s);
    break;
     case 3:
    peep(s);
    break;
case 4:
    s=show(s);
    break;
case 5:
  // s=exit(s);
    break;

   }
   }while (choice!=6);
   return 0;
}
