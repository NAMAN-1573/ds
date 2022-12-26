#include<stdio.h>
#include"myheader.h"
int main(){
    int a,b,c;
    a=10;
    b=5;
    c=add(a,b);
    printf("%d\n",c);
    c=mul(a,b);
    printf("%d\n",c);
    c=sub(a,b);
    printf("%d\n",c);
    c=div(a,b);
    printf("%d\n",c);
    return 0;
}