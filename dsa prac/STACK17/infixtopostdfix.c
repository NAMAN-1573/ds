#include <Stdio.h>
#define size 50
struct stack
{
    int data[size];
    int top;
} s;
int push(int n)
{
    if (s.top == size - 1)
    {
        return 0;
    }
    s.data[++s.top] = n;
}
int prcd(char op1,char op2){
    if(op1 =='$' || op1 =='*' || op1 =='/' || op1=='%'){
        return(op2!='$');
    }
    else{
        if(op2=='+' || op2=='-'){
            return 1;
        }
        else 
              return 0;
        
    }
}
int pop()
{
    if (s.top == -1)
        return 0;
    return s.data[s.top--];
}
int isempty()
{
    return s.top == -1;
}
int isfull()
{
    return s.top == size - 1;
}
int peep()
{
    return s.data[s.top];
}
int main()
{
    char exp[50], post[50], sym;
    printf("ENTER THE ECPRESSION:\n");
    gets(exp);
    int i = 0, p = 0;
    char x;
    while (exp[i] != '\0')
    {
        printf("%c\n", exp[i]);
        sym = exp[i];

        if (sym >= 'a' && sym <= 'z' || sym >= 'A' && sym <= 'Z' || sym >= '0' && sym <= '9')
        {
            post[p] = sym;
            p++;
        }
        else if (isempty())
        {
            push(sym);
        }
        else if (sym == '(')
        {
            push(sym);
        }
        else if(sym==')'){
            while(isempty() && (peep()!='(')){
              x=pop();
              post[p++]=x;

            }
            x=pop();
        }
    else{
       while(isempty() && (peep()!='(') && prcd(peep(),sym)){
        x=pop();
        post[p++]=x;
       }
       push(sym);
    }
i++;

    }
while(!isempty()){
    x=pop();
    post[p++]=x;
    
}
post[p]='\0';
printf("postfix=%s",post);
    return 0;
}