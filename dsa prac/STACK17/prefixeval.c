#include <stdio.h>
#define size 25
int calc(int a, int b, char symbol)
{
    switch (symbol)
    {
    case '+':
        return a + b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    case '-':
    return a-b;
    }
}
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
int pop()
{
    if (s.top == -1)
        return 0;
    return s.data[s.top--];
}

int main()
{
    char exp[21];
    s.top = -1;
    printf("ENTER THE EXPRESSION TO EVALUATE : ");
    // 2 5 + 6 2 / 5 * - 7 +
    gets(exp);
    printf("ENTERED EXPRESSION :");
    printf("%s\n", exp);
    strrev(exp);
    int i = 0;
    while (exp[i] != '\0')
    {
        if (exp[i] != ' ')
        {
            char symbol = exp[i];
            if (symbol >= '0' && symbol <= '9')
                push(symbol - '0');
            else
            {
                int a = pop();
                int b = pop();
                int num = calc(a, b, symbol);
                push(num);
            }
        }
        i++;
    }
    int r=pop();
    printf("ANS :%d", r);

    return 0;
}