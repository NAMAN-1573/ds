// wap to print and show array .
#include<stdio.h>
void    input(int ar[],int s)
{
     for(int i=0;i<s;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&ar[i]);
    } 
}
void show(int arr[],int s){
    for(int k=0;k<s;k++){
        printf("%d ",arr[k]);
    }
}

