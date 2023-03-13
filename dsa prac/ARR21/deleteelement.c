#include<stdio.h>
#include "traversal.h"

int main()
    { 
      int n;
    printf("Enter size of array :");
    scanf("%d",&n);
       int ar[n];
       int s=n,flag=0;
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
