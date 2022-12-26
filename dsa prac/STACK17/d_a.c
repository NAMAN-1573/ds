#include<Stdio.h>
struct stack
{
    int data[20];
    int top;
};
void push(struct stack *st,int r )
{
    st->top++;
    st->data[st->top]=r;
}
int pop(struct stack *st){
    int r=st->data[st->top];
    st->top--;
    return r;
}
void main(){
    struct stack st;
    int base,choice;
    printf("1.................DECIMAL TO BINARY");
    printf("2.................DECIMAL TO OCTAL");
    printf("3.................DECIMAL TO HEXAM");
    printf("ENTER YOUR CHOICE :");
    scanf("%d",&choice);
    if(choice==1){
        base=2;

    }
     else if(choice==2){
        base=8;

    }
     else if(choice==3){
        base=16;

    }
   else {
    printf("INVALID CHOICE");
   }
    

    int num ;
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    st.top=-1;
    scanf("%d",&num);
    while(num>0){
        int r=num%base;
        push(&st,r);
        num/=base;
    }
    while(st.top!=-1)
    {
        int r=pop(&st);
        
        printf("%c",hex[r]);
    }
}