#include<stdio.h>
#include"traverse.h"
int main()
    {
       int ar[10];
       int s=10,flag=0;
       int count=s;
       int v;
        printf(" Name:-NAMAN MISHRA\n");
    printf("Roll no.:-2100320120113 \n");
       input(ar,s);
        printf("ENER THE ELEMENT YOU WANT TO DELETE:");
       scanf("%d",&v);
       for( int i=0;i<s;i++)
       {
         if(v==ar[i]){
            count--;
            flag=1;
            if(i==s-1){
               break;
            }
         }
         if(flag==1){
            ar[i]=ar[i+1];
            
         }
       }
         if(count==s){
            printf("not found");
         }
         else{
            printf("elemented deleted\n");
         }
       show(ar,count);
       return 0;

    }
