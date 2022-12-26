#include<stdio.h>
void linear(int m,int ar[], int e)
{
    int flag=0;
    for(int i=0;i<m;i++)
    {
        if(ar[i]==e)
        {
          
            flag=1;
        }
    }
        
        if(flag==1)
        {
         printf("Found");   
        }
        else
        {
           printf(" NOT Found"); 
        }
     
}
int main(){
    int m,ar[100],e;
    printf("Enter the size of array:");
    scanf("%d",&m);

    for(int i=0;i<m;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&ar[i]);
    }
     printf("Enter the element to search:");
    scanf("%d",&e);

    linear(m,ar,e);
   
   return 0;
}

