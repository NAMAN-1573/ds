#include<stdio.h>
int main(){

   int a[10],b[10],i,c[10],j,k=0,n1,n2,f=0;
   printf("NAME : NAMAN MISHA\n");
   printf("ROLL NO.:2100320120113\n");
  
   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++){
      scanf("%d",&a[i]);}
 printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
   {
     scanf("%d",&b[i]);}
for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            { 
                c[k]=a[i];
                f=1;
                k++;
            }
         }}
         if(f==1)
         {
         for(i=0;i<k;i++){
      printf("intersection of set A and set B is:{%d }",c[i]);}}
      else 
        printf("SETS ARE DISJOINTS");
      return 0;}

    
